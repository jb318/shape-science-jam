// Fill out your copyright notice in the Description page of Project Settings.

#include "Shape.h"
#include "Components/CapsuleComponent.h"
#include "CombatInterface.h"
#include "InteractInterface.h"

AShape::AShape()
{
	// Creates spring arm and camera
	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	
	// Properties for spring arm component
	SpringArmComponent->SetupAttachment(RootComponent);
	SpringArmComponent->TargetArmLength = 400.f;
	SpringArmComponent->SetRelativeRotation(FRotator(0.f, -90.f, 0.f));
	SpringArmComponent->bInheritPitch = false;
	SpringArmComponent->bInheritYaw = false;
	SpringArmComponent->bInheritRoll = false;

	// Properties for camera component
	CameraComponent->SetupAttachment(SpringArmComponent);
	CameraComponent->SetRelativeScale3D(FVector(0.2f, 0.2f, 0.2f));

	// Sets the capsule size
	GetCapsuleComponent()->SetCapsuleSize(34.f, 34.f);
	
	// Box component
	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	BoxComponent->SetupAttachment(RootComponent);
}

void AShape::BeginPlay()
{
	Super::BeginPlay();
	
	CurrentExperience = 0;

	if (ShapeDT) {
		// Get the corresponding row you want the shape's level to be
		RowNames = ShapeDT->GetRowNames();
		if (RowNames.IsValidIndex(ShapeLevelIndex)) {
			
			row = ShapeDT->FindRow<FShapeLevelData>(RowNames[ShapeLevelIndex], "");
			if (row) {
				/*GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Purple, FString::Printf(TEXT("%f Experience"), CurrentExperience));*/
				CurrentHealth = row->MaxHealth;
				GEngine->AddOnScreenDebugMessage(2, 2.f, FColor::Purple, FString::Printf(TEXT("You are at level: %d\nCurrent hp is: %.0f\nExperience: %.0f\n%.0f more experience until next level"), row->Level, CurrentHealth, CurrentExperience, row->MaxExperience));
			}
			else {
				GEngine->AddOnScreenDebugMessage(0, 2.f, FColor::Red, FString::Printf(TEXT("Could not find what level you are at.  Try setting the Shape Level Data values inside your shapes Details Panel")));
			}
		}
		
	}	
	else {
		GEngine->AddOnScreenDebugMessage(0, 2.f, FColor::Red, FString::Printf(TEXT("Data table not set")));
	}

	// Binds the item overlap event with the box component
	if (BoxComponent) 
		BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &AShape::OnOverlapItemBegin);

	// Setting variables on player widget
	HUD = Cast<AGameHUD>(UGameplayStatics::GetPlayerController(this, 0)->GetHUD());
	if (HUD) {
		if (row) {
			if (HUD->PlayerWidget) {
				HUD->PlayerWidget->SetHealthBar(CurrentHealth, row->MaxHealth);
				HUD->PlayerWidget->SetExperienceBar(CurrentExperience, row->MaxExperience);
			}
			
		}
	}
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

void AShape::AddExperience(float amount)
{
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, FString::Printf(TEXT("Gained %.0f experience"), amount));
	// update player current experience with the amount provided
	CurrentExperience += amount;
	if (row) {
		if (CurrentExperience >= row->MaxExperience) {
			LevelUp();
			if (HUD->PlayerWidget) 
				HUD->PlayerWidget->SetExperienceBar(row->MaxHealth, row->MaxHealth);
		}
		if (HUD->PlayerWidget)
			HUD->PlayerWidget->SetExperienceBar(CurrentExperience, row->MaxExperience);
	}
	
}

void AShape::OnOverlapItemBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	
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
				AddExperience(InterfaceItem->ItemValue());
			}
			if (ItemName == TEXT("Objective")) {
				if (HUD->PlayerWidget) {
					HUD->PlayerWidget->UpdateObjectiveBar_Implementation();
				}
			}
			// Destroy the item
			InterfaceItem->Interact();
		}
	}
}

void AShape::Attack_Implementation()
{
	if (!CoolDownActive) {
		CoolDownActive = true;
		FTimerHandle CoolDownTimer;
		GetWorld()->GetTimerManager().SetTimer(CoolDownTimer, this, &AShape::CoolDown, AttackCoolDown, false);
	}
}

void AShape::SpecialMove_Implementation()
{
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Red, FString::Printf(TEXT("SpecialMove")));
}

void AShape::LevelUp()
{
	// Sets players hp to max at next level, increases level, and properly subtracts experience from current level
	// This function should not be called by the AI
	ShapeLevelIndex++;
	if (ShapeLevelIndex < RowNames.Num()) {
		// Doing multiple validity checks to ensure the engine crashes under no circumstances
		if (row) {
			CurrentExperience -= row->MaxExperience;
		}
		row = ShapeDT->FindRow<FShapeLevelData>(RowNames[ShapeLevelIndex], "");
		if (row) {
			CurrentHealth = row->MaxHealth;
			GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, FString::Printf(TEXT("Congrats you have just leveled up!  Your new max health is: %.1f"), CurrentHealth));
		}
	}
}

void AShape::SetHealth(float amount)
{
	// amount can be a positive value such as when interacted with health pickup or negative when receiving damage
	if (row) {
		if (CurrentHealth + amount < row->MaxHealth && CurrentHealth + amount > 0) {
			CurrentHealth += amount;
		}
		else if (CurrentHealth + amount >= row->MaxHealth) {
			CurrentHealth = row->MaxHealth;
		}
		else {
			GEngine->AddOnScreenDebugMessage(-3, 5.f, FColor::Red, TEXT("Warning, you are below 0 hp"));
		}
		// Update widget
		if (HUD->PlayerWidget) {
			HUD->PlayerWidget->SetHealthBar(CurrentHealth, row->MaxHealth);
		}
	}
}

void AShape::DamageCharacter(float amount, bool IsProjectile)
{
	
	if (!Invincible && !InDamageCoolDown) {
		// Executes damage no matter what on melee attack so long as shape is not invincible
		if (!IsProjectile) {
			if (row) {
				if (CurrentHealth + amount > 0) {
					CurrentHealth -= amount;
				}
				else {
					GEngine->AddOnScreenDebugMessage(-3, 5.f, FColor::Red, TEXT("Cue the defeat function"));
				}
				// Set health
				if (HUD->PlayerWidget) {
					HUD->PlayerWidget->SetHealthBar(CurrentHealth, row->MaxHealth);
				}
			}
			
			GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, FString::Printf(TEXT("Current health after attack: %.1f"), CurrentHealth));
		}
		// Only damages if shape is not invincible
		if (IsProjectile && !ImmuneToProjectile) {
			if (row) {
				if (CurrentHealth + amount > 0) {
					CurrentHealth -= amount;
				}
				else {
					GEngine->AddOnScreenDebugMessage(-3, 5.f, FColor::Red, TEXT("Cue the defeat function"));
				}
				// Set Health
				if (HUD->PlayerWidget) {
					HUD->PlayerWidget->SetHealthBar(CurrentHealth, row->MaxHealth);
				}
			}
			GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, FString::Printf(TEXT("Current health after attack: %.1f"), CurrentHealth));
		}
	}
	
}

void AShape::HitReaction(FVector LaunchVelocity)
{
	// Add knockback
	LaunchCharacter(LaunchVelocity, false, false);
	
	// Play character damage animation
	PlayDamageAnimation();
}



