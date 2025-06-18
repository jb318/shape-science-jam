// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EnemyHealthBarWidget.generated.h"

/**
 * 
 */
UCLASS()
class SHAPE_SCIENCE_JAM_API UEnemyHealthBarWidget : public UUserWidget
{
	GENERATED_BODY()
	

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Health")
	void UpdateHealth(float Current, float Max);
};
