// Fill out your copyright notice in the Description page of Project Settings.

#include "Circle.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "InteractInterface.h"

ACircle::ACircle()
{
	// Air control
	GetCharacterMovement()->JumpZVelocity = 500.0;
	GetCharacterMovement()->MaxWalkSpeed = 600.0;
	GetCharacterMovement()->AirControl = 0.25;

	ShapeIndex = 0;
}

void ACircle::SpecialMove_Implementation()
{
	Super::SpecialMove_Implementation();
	
	// Check if is falling is false otherwise jump will lock if clicked a second time in air
	if (!InputDisabled && !GetCharacterMovement()->IsFalling()) {
		SpecialMoveClicked = true;
		FTimerHandle CircleJumpTimer;
		GetWorld()->GetTimerManager().SetTimer(CircleJumpTimer, this, &ACircle::CircleJump, SpecialMoveDelay, false);
	}
	
}

void ACircle::BeginPlay()
{
	Super::BeginPlay();
}

void ACircle::CircleJump()
{
	if (!GetCharacterMovement()->IsFalling()) 
		Jump();
		
	SpecialMoveClicked = false;
}
