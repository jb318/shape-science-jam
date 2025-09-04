// Fill out your copyright notice in the Description page of Project Settings.

#include "Shape.h"
#include "Components/CapsuleComponent.h"
#include "CombatInterface.h"
#include "InteractInterface.h"
#include "Net/UnrealNetwork.h"
#include "Engine/Engine.h"
#include "ShapeAbilitySystemComponent.h"

AShape::AShape()
{
	// Creates spring arm and camera
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));

	// Properties for camera component
	CameraComponent->SetRelativeLocation(FVector(0.f, 960.f, 0.f));
	CameraComponent->SetRelativeRotation(FRotator(0.f, -90.f, 0.f));
	CameraComponent->SetRelativeScale3D(FVector(1.f, 1.f, 1.f));
	CameraComponent->SetupAttachment(RootComponent);

	// Sets the capsule size
	GetCapsuleComponent()->SetCapsuleSize(34.f, 34.f);

	// Box component
	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	BoxComponent->SetupAttachment(RootComponent);

	CurrentHealth = MaxHealth;

	// Network replication settings
	SetReplicates(true);
	SetReplicateMovement(true);

	// Components
	TransformComp = CreateDefaultSubobject<UTransformComponent>("Transform Component");
}

UAbilitySystemComponent* AShape::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

void AShape::BeginPlay()
{
	Super::BeginPlay();

	// Binds the item overlap event with the box component
	if (BoxComponent)
		BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &AShape::OnOverlapItemBegin);

	// Setting variables on player widget
	HUD = Cast<AGameHUD>(UGameplayStatics::GetPlayerController(this, 0)->GetHUD());
}

void AShape::CoolDown()
{
	// Reset the cooldown state to allow player to attack again
	CoolDownActive = false;
}

void AShape::MakeInvincibleTimer()
{
	// Reset can be damaged after player is invicible for some time
	Invincible = true;
	GEngine->AddOnScreenDebugMessage(1, 5.f, FColor::Red, TEXT("Player no longer invincible"));
}

void AShape::IncrementDiamondCountOnHUD(float amount)
{
	if (HUD) {
		if (HUD->PlayerWidget)
			HUD->PlayerWidget->UpdateDiamondCount();
	}
}

void AShape::OnRep_CurrentHealth()
{
	OnHealthUpdate();
}

void AShape::OnHealthUpdate()
{
	// Client-specific functionality
	if (IsLocallyControlled())
	{
		FString healthMessage = FString::Printf(TEXT("You now have %f health remaining."), CurrentHealth);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, healthMessage);

		if (CurrentHealth <= 0)
		{
			FString deathMessage = FString::Printf(TEXT("You have been killed."));
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, deathMessage);
		}
	}

	//Server-specific functionality
	if (GetLocalRole() == ROLE_Authority)
	{
		FString healthMessage = FString::Printf(TEXT("%s now has %f health remaining."), *GetFName().ToString(), CurrentHealth);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, healthMessage);
	}

	//Functions that occur on all machines.
	/*
		Any special functionality that should occur as a result of damage or death should be placed here.
	*/
}

void AShape::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// Replicate current health.
	DOREPLIFETIME(AShape, CurrentHealth);
}

void AShape::OnOverlapItemBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Checks if its the player picking up exp, should work for all players
	if (GetController() == GetWorld()->GetFirstPlayerController()) {
		if (OtherActor) {
			if (IInteractInterface* InterfaceItem = Cast<IInteractInterface>(OtherActor)) {
				ItemName = InterfaceItem->ItemName();
				// Call the necessary functions depending on which item was overlapped
				if (ItemName == TEXT("Health")) {
					SetHealth(InterfaceItem->ItemValue());
				}
				if (ItemName == TEXT("Invincibilty")) {
					Invincible = true;
					GEngine->AddOnScreenDebugMessage(1, 5.f, FColor::Blue, TEXT("Player invincible"));
					FTimerHandle InvincibilityTimer;
					GetWorld()->GetTimerManager().SetTimer(InvincibilityTimer, this, &AShape::MakeInvincibleTimer, InterfaceItem->ItemValue(), false);
				}
				if (ItemName == TEXT("Experience")) {
					IncrementDiamondCountOnHUD(InterfaceItem->ItemValue());
				}
				if (ItemName == TEXT("Objective")) {

					if (IInteractInterface* PlayerController = Cast<IInteractInterface>(GetController())) {
						GEngine->AddOnScreenDebugMessage(1, 5.f, FColor::Red, TEXT("Player picked up objective"));
						PlayerController->UpdateObjective();
					}

					if (HUD) {
						if (HUD->PlayerWidget) {
							HUD->PlayerWidget->UpdateObjectiveImage(InterfaceItem->ItemValue());
						}
					}
				}
				// Destroy the item
				InterfaceItem->Interact();
			}
		}
	}
}

void AShape::Attack_Implementation()
{
	Attack();
	if (!CoolDownActive) {
		CoolDownActive = true;
		FTimerHandle CoolDownTimer;
		GetWorld()->GetTimerManager().SetTimer(CoolDownTimer, this, &AShape::CoolDown, AttackCoolDown, false);
	}
}

void AShape::SpecialMove_Implementation()
{
	// Calls special move for each child when Super::SpecialMove_Implementation is used
	SpecialMove();
}

void AShape::SetHealth(float amount)
{
	if (CurrentHealth + amount > MaxHealth)
		CurrentHealth = MaxHealth;
	else if (CurrentHealth + amount <= 0)
		CharacterDefeat();
	else
		CurrentHealth += amount;
}

void AShape::DamageCharacter(float amount, bool IsProjectile)
{

	if (!Invincible) {
		// Executes damage no matter what on melee attack so long as shape is not invincible
		if (!IsProjectile) {
			if (CurrentHealth - amount > 0) {
				ImmuneToProjectile = true;
				InputDisabled = true;
				CurrentHealth -= amount;
				// Only update player widget if its the player character taking damage
				if (GetController() == GetWorld()->GetFirstPlayerController()) {
					// Set health
					if (HUD) {
						if (HUD->PlayerWidget) {
							HUD->UpdateHealthDisplay(CurrentHealth, MaxHealth, ShapeIndex);
						}
					}
				}
			}
			else {
				if (GetController() == GetWorld()->GetFirstPlayerController()) {
					FTimerHandle DeathTimer;
					GetWorld()->GetTimerManager().SetTimer(DeathTimer, this, &AShape::CharacterDefeat, 0.25f, false);
					GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Player controlled character dead"));
				}
				else {
					Destroy();
					GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("AI controlled character dead"));
				}
			}

		}
		// Only damages if shape is not invincible
		if (IsProjectile && !ImmuneToProjectile) {

			// Set projectile immunity to true so damage instance happens only once, reset once damage animation 
			if (CurrentHealth - amount > 0) {
				InputDisabled = true;
				CurrentHealth -= amount;
				// Only update player widget if its the player character taking damage
				if (GetController() == GetWorld()->GetFirstPlayerController()) {
					// Set health
					if (HUD) {
						if (HUD->PlayerWidget) {
							HUD->UpdateHealthDisplay(CurrentHealth, MaxHealth, ShapeIndex);
						}
					}
				}
			}
			else {
				if (GetController() == GetWorld()->GetFirstPlayerController()) {
					FTimerHandle DeathTimer;
					GetWorld()->GetTimerManager().SetTimer(DeathTimer, this, &AShape::CharacterDefeat, 0.25f, false);
					GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Player controlled character dead"));
				}
				else {
					Destroy();
					GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("AI controlled character dead"));
				}

			}
		}
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, FString::Printf(TEXT("Current health after attack: %.1f"), CurrentHealth));
	}
}

void AShape::HitReaction(FVector LaunchVelocity)
{
	// Add knockback
	LaunchCharacter(LaunchVelocity, false, false);

	// Play character damage animation
	PlayDamageAnimation();
}

void AShape::RPCToggleShapeVisibility_Implementation(bool SetHidden)
{
	MulticastShapeVisibility(SetHidden);
}

void AShape::MulticastShapeVisibility_Implementation(bool SetHidden)
{
	GetSprite()->SetHiddenInGame(SetHidden);
}

void AShape::CharacterDefeat()
{
	if (HUD) {
		HUD->GameOver();
		HUD->GameOver_Implementation();

	}
}
