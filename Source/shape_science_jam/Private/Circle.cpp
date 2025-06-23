// Fill out your copyright notice in the Description page of Project Settings.

#include "Circle.h"
#include "GameFramework/CharacterMovementComponent.h"

void ACircle::Attack_Implementation()
{
	
}

void ACircle::SpecialMove_Implementation()
{
	Jump();
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, TEXT("SpecialMove Implementation called twice"));
}