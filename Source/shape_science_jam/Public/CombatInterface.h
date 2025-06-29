// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CombatInterface.generated.h"

/**
 * 
 */

UINTERFACE(MinimalAPI)
class UCombatInterface : public UInterface
{
	GENERATED_BODY()
};

class SHAPE_SCIENCE_JAM_API ICombatInterface
{
	GENERATED_BODY()

public:
	// Sets characters health after being hit
	virtual void DamageCharacter(float amount, bool IsProjectile);

	// Controls the logic behind a character being hit including things like knockback
	virtual void HitReaction(FVector LaunchVelocity);
	// Triggers the attack for square enemy
	virtual void TriggerCounter();

};
