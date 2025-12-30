// Fill out your copyright notice in the Description page of Project Settings.

#include "Shape.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "InteractInterface.h"
#include "ShapeState.h"

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
	ShapeAbilityComponent = CreateDefaultSubobject<UShapeAbilityComponent>("Shape Ability Component");

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
					if (HUD) {
						HUD->PlayerWidget->UpdateHealthImage();
					}
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
				InterfaceItem->PlaySoundEffect();
			}
		}
	}
}

void AShape::SpecialMove_Implementation()
{
	// Calls special move for each child when Super::SpecialMove_Implementation is used
	if (ShapeAbilityComponent)
	{
		// Play special move animation when falling only on square or star
		if (GetCharacterMovement()->IsFalling()) {
			if (ShapeIndex == 1 || ShapeIndex == 3) {
				ShapeAbilityComponent->SpecialMoveAnimationCall();
			}
		}
		else {
			ShapeAbilityComponent->SpecialMoveAnimationCall();
		}
	}
}

void AShape::SetHealth(float amount)
{
	if (CurrentHealth + amount > MaxHealth)
		CurrentHealth = MaxHealth;
	else if (CurrentHealth + amount <= 0) {
		CurrentHealth = 0;
		FTimerHandle DeathTimer;
		GetWorld()->GetTimerManager().SetTimer(DeathTimer, this, &AShape::CharacterDefeat, 1.f, false);
	}
	else
		CurrentHealth += amount;
}

void AShape::DamageShape(float amount, bool InstantDeath)
{
	SetHealth(amount * -1);

	if (ShapeAbilityComponent) {
		ShapeAbilityComponent->DamageAnimationCall();
		if (InstantDeath) {
			UGameplayStatics::PlaySound2D(this, ShapeAbilityComponent->DefeatedSFX);
		}
		else {
			if (CurrentHealth <= 0) 
				UGameplayStatics::PlaySound2D(this, ShapeAbilityComponent->DefeatedSFX);
			
			else
				UGameplayStatics::PlaySound2D(this, ShapeAbilityComponent->DamagedSFX);
		}
	}

	if (HUD) {
		HUD->UpdateHealthDisplay();
	}
}

void AShape::CharacterDefeat()
{
	CannotMove = true;
	if (HUD) {
		HUD->GameOver();
		HUD->GameOver_Implementation();
	}
}

float AShape::GetShapeHealthPercent()
{
	if (MaxHealth == 0.f)
		return 0.0f;
	
	float HealthPercent = CurrentHealth / MaxHealth;
		return HealthPercent;
}
