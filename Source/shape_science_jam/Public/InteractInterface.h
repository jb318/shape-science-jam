// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractInterface.generated.h"

/**
 * 
 */

UINTERFACE(MinimalAPI)
class UInteractInterface : public UInterface
{
	GENERATED_BODY()
};

class SHAPE_SCIENCE_JAM_API IInteractInterface
{
	GENERATED_BODY()

public:
	// Player overlaps actor
	virtual void Interact();

	// Returns the name of the actor so the correct functions get called inside shape class
	virtual FString ItemName();
};

