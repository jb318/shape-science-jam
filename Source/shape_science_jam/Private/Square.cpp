// Fill out your copyright notice in the Description page of Project Settings.

#include "Square.h"
#include "GameFramework/CharacterMovementComponent.h"

ASquare::ASquare()
{
	// Physical Properties
	GetCharacterMovement()->MaxWalkSpeed = 500.0;
	GetCharacterMovement()->AirControl = 0.25;
	GetCharacterMovement()->GravityScale = 0.75;
	GetCharacterMovement()->FallingLateralFriction = 1.0;

	ShapeIndex = 1;
}

void ASquare::SpecialMove_Implementation()
{
	Super::SpecialMove_Implementation();

	FTimerHandle SwitchGravityTimer;

	if (!InputDisabled)
		InputDisabled = true;
		GetWorld()->GetTimerManager().SetTimer(SwitchGravityTimer, this, &ASquare::SwitchGravity, SpecialMoveDelay, false);

}

void ASquare::BeginPlay()
{
	Super::BeginPlay();

}

void ASquare::SwitchGravity()
{
	InputDisabled = false;

	// Switch gravity on player
	if (!UsingAntiGravity) {
		GetCharacterMovement()->SetGravityDirection(GetActorUpVector());
		UsingAntiGravity = true;
		CanChangeShape = false;
		FVector TransformLocation = GetSprite()->GetRelativeLocation();
		TransformLocation.Z = 4.f;
		GetSprite()->SetRelativeLocation(TransformLocation);
		GetSprite()->SetWorldRotation(FRotator(0.f, 0.f, 180.f));

	}
	else {
		GetCharacterMovement()->SetGravityDirection(-1 * GetActorUpVector());
		UsingAntiGravity = false;
		CanChangeShape = true;
		FVector TransformLocation = GetSprite()->GetRelativeLocation();
		TransformLocation.Z = -4.f;
		GetSprite()->SetRelativeLocation(TransformLocation);
		GetSprite()->SetWorldRotation(FRotator(0.f, 0.f, 0.f));
	}
}
