// Fill out your copyright notice in the Description page of Project Settings.

#include "Square.h"
#include "GameFramework/CharacterMovementComponent.h"

void ASquare::Attack_Implementation()
{
	GEngine->AddOnScreenDebugMessage(0, 3.f, FColor::Green, FString::Printf(TEXT("Reflect Attack")));
}

void ASquare::SpecialMove_Implementation()
{
	// Get the reference to Character Movement Component
	/*UCharacterMovementComponent* CharacterMovement = GetCharacterMovement();*/
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue,TEXT("SpecialMove Implementation called twice"));
	
	// Switch gravity on player
	if (!AntiGravityEnabled) {
		GetCharacterMovement()->SetGravityDirection(GetActorUpVector());
		AntiGravityEnabled = true;
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, FString::Printf(TEXT("Inside false conditional %d"), AntiGravityEnabled));
	}
	else {
		GetCharacterMovement()->SetGravityDirection(-1 * GetActorUpVector());
		AntiGravityEnabled = false;
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, FString::Printf(TEXT("Inside else conditional %d"), AntiGravityEnabled));
	}
}
