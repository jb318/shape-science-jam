// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "SSGameState.generated.h"

/**
 * 
 */
UCLASS()
class SHAPE_SCIENCE_JAM_API ASSGameState : public AGameStateBase
{
	GENERATED_BODY()

public:
	void UpdateObjectiveCount();
	
};
