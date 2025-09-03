// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "ShapeAbilitySystemComponent.generated.h"

/**
 * 
 */
UCLASS()
class SHAPE_SCIENCE_JAM_API UShapeAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()
	
public:
	UShapeAbilitySystemComponent();

protected:
	virtual void BeginPlay() override;
};
