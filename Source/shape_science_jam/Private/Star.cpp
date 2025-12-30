// Fill out your copyright notice in the Description page of Project Settings.

#include "Star.h"
#include "GameFramework/CharacterMovementComponent.h"

AStar::AStar()
{
	// Air controls
	GetCharacterMovement()->JumpZVelocity = 200.f;
	GetCharacterMovement()->MaxWalkSpeed = 300.f;
	GetCharacterMovement()->AirControl = 0.75;
	GetCharacterMovement()->GravityScale = 0.25;

	ShapeIndex = 3;
}

void AStar::SpecialMove_Implementation()
{
	SetSpecialMoveFlipbook();

	if (StarSpecialMove)
		SpecialMoveAnimation = StarSpecialMove;

	Super::SpecialMove_Implementation();

	SpecialMoveClicked = true;
	
	if (!InputDisabled) {
		InputDisabled = true;
		if (!GetCharacterMovement()->IsFalling()) {
			SpecialMoveDelay = 0.25f;
			SpecialMoveAnimationDuration = 0.33f;
		}
		else {
			SpecialMoveDelay = 0.001f;
			SpecialMoveAnimationDuration = 0.25;
			if (!FacingRight) {
				LaunchVector.X *= -1;
			}
		}
		FTimerHandle SpecialMoveTimer;
		GetWorld()->GetTimerManager().SetTimer(SpecialMoveTimer, this, &AStar::LaunchStar, SpecialMoveDelay, false);
		
	}
}

void AStar::BeginPlay()
{
	Super::BeginPlay();

}

void AStar::LaunchStar()
{
	if (!GetCharacterMovement()->IsFalling())
		Jump();
	else {
		LaunchCharacter(LaunchVector, true, false);
		CannotMove = true;
		FTimerHandle ThrustCoolDown;
		GetWorld()->GetTimerManager().SetTimer(ThrustCoolDown, this, &AStar::CoolDown, 1.f, false);
	}
}

void AStar::CoolDown()
{
	Super::CoolDown();
	CannotMove = false;
}