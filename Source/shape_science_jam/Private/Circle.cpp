// Fill out your copyright notice in the Description page of Project Settings.

#include "GameFramework/CharacterMovementComponent.h"
#include "Circle.h"

void ACircle::Attack_Implementation()
{
	GetCharacterMovement()->MaxWalkSpeed = RunSpeed;
}

void ACircle::SpecialMove_Implementation()
{
	Jump();
}