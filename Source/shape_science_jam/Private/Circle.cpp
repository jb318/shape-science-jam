// Fill out your copyright notice in the Description page of Project Settings.

#include "Circle.h"
#include "GameFramework/CharacterMovementComponent.h"

void ACircle::SpecialMove_Implementation()
{
	FTimerHandle CircleJumpTimer;
	GetWorld()->GetTimerManager().SetTimer(CircleJumpTimer, this, &ACircle::CircleJump, SpecialMoveDelay, false);
}

void ACircle::CircleJump()
{
	Jump();
}
