// Fill out your copyright notice in the Description page of Project Settings.

#include "GameFramework/CharacterMovementComponent.h"
#include "Square.h"

void ASquare::Attack_Implementation()
{
	GEngine->AddOnScreenDebugMessage(0, 3.f, FColor::Green, FString::Printf(TEXT("Reflect Attack")));
}

void ASquare::SpecialMove_Implementation()
{
	// Get the reference to Character Movement Component
	/*UCharacterMovementComponent* CharacterMovement = GetCharacterMovement();*/

	// Switch gravity on player
	GetCharacterMovement()->SetGravityDirection(GetActorUpVector());
}
