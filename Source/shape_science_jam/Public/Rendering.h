// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rendering.generated.h"

/**
 * 
 */
UCLASS()
class SHAPE_SCIENCE_JAM_API URendering : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static void SetViewMode(EViewModeIndex ViewMode);

	UFUNCTION(BlueprintCallable)
	static void DisableAdvancedEngineFeatures();
	
};
