// Fill out your copyright notice in the Description page of Project Settings.

#include "Circle.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "InteractInterface.h"

void ACircle::Attack_Implementation()
{
	// Execute dash if not jumping or hit, not falling, and once the cool down is up
	if (!InputDisabled && !GetCharacterMovement()->IsFalling() && !CoolDownActive) {
		// Turn off input and make sure can hit is true
		InputDisabled = true;
		CanHitEnemy = true;

		if (FacingLeft) {
			LaunchCharacter(GetActorForwardVector() * -1500.f, false, false);
		}
		else {
			LaunchCharacter(GetActorForwardVector() * 1500.f, false, false);
		}
	}
}

void ACircle::SpecialMove_Implementation()
{
	// Check if is falling is false otherwise jump will lock if clicked a second time in air
	if (!InputDisabled && !GetCharacterMovement()->IsFalling()) {
		InputDisabled = true;
		FTimerHandle CircleJumpTimer;
		GetWorld()->GetTimerManager().SetTimer(CircleJumpTimer, this, &ACircle::CircleJump, SpecialMoveDelay, false);
	}
	
}

void ACircle::BeginPlay()
{
	Super::BeginPlay();

	// Binding box component to overlap enemy event
	if (BoxComponent) {
		BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &ACircle::OnOverlapEnemy);
	}

}

void ACircle::OnOverlapEnemy(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Checks if the window to hit enemy is active
	if (CanHitEnemy) {
		if (OtherActor && OtherActor != this) {
			
			// Filters overlapped Actors with those that implement combat interface
			if (ICombatInterface* CombatInterface = Cast<ICombatInterface>(OtherActor)) {
				
				CombatInterface->DamageCharacter(DashDamage, false);
				CombatInterface->HitReaction(KnockbackVelocity);
			}
		}
	}
	
}

void ACircle::CircleJump()
{
	if (!GetCharacterMovement()->IsFalling()) 
		Jump();
}
