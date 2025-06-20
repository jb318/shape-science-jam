// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Shape.h"
#include "Circle.generated.h"

/**
 * 
 */
UCLASS()
class SHAPE_SCIENCE_JAM_API ACircle : public AShape
{
	GENERATED_BODY()

public: 
	// Base class function implementations
	virtual void Attack_Implementation() override;
	virtual void SpecialMove_Implementation() override;
};
