// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatInterface.h"

void ICombatInterface::DamageCharacter(float amount)
{

}

void ICombatInterface::HitReaction_Implementation(FVector LaunchVelocity)
{
	GEngine->AddOnScreenDebugMessage(2, 4.f, FColor::Cyan, FString::Printf(TEXT("Hit reaction implementation called with %.0f, %.0f, %.0f being passed in as arguments"), LaunchVelocity.X, LaunchVelocity.Y, LaunchVelocity.Z));
}

