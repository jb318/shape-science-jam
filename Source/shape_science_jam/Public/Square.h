// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Shape.h"
#include "Square.generated.h"

/**
 * 
 */
UCLASS()
class SHAPE_SCIENCE_JAM_API ASquare : public AShape
{
	GENERATED_BODY()

public:
	// Base class function implementations
	void SpecialMove_Implementation() override;

protected:
	// Checks if anti-gravity mode is in effect
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool UsingAntiGravity = false;

private:
	void SwitchGravity();
	
};
