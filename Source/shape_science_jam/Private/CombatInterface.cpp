// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatInterface.h"

void ICombatInterface::DamageCharacter(float amount, bool IsProjectile)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("%.1f damage applied")));
}

void ICombatInterface::HitReaction(FVector LaunchVelocity)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, FString::Printf(TEXT("Hit reaction implementation called with %.0f, %.0f, %.0f being passed in as arguments"), LaunchVelocity.X, LaunchVelocity.Y, LaunchVelocity.Z));
}

