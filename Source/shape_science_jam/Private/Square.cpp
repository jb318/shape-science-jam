// Fill out your copyright notice in the Description page of Project Settings.

#include "Square.h"
#include "GameFramework/CharacterMovementComponent.h"

void ASquare::SpecialMove_Implementation()
{
	// Call switch gravity with the user defined delay
	FTimerHandle SwitchGravityTimer;
	GetWorld()->GetTimerManager().SetTimer(SwitchGravityTimer, this, &ASquare::SwitchGravity, SpecialMoveDelay, false);
}

void ASquare::SwitchGravity()
{
	// Get the reference to Character Movement Component
	/*UCharacterMovementComponent* CharacterMovement = GetCharacterMovement();*/
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, TEXT("SpecialMove Implementation called twice"));

	// Switch gravity on player
	if (!UsingAntiGravity) {
		GetCharacterMovement()->SetGravityDirection(GetActorUpVector());
		UsingAntiGravity = true;
	}
	else {
		GetCharacterMovement()->SetGravityDirection(-1 * GetActorUpVector());
		UsingAntiGravity = false;
	}
}
