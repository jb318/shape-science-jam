// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "ShapeState.generated.h"

/**
 * 
 */
UCLASS()
class SHAPE_SCIENCE_JAM_API AShapeState : public APlayerState
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

public:

	UFUNCTION(Server, Reliable)
	void UpdatePlayerHealth();

	UFUNCTION(NetMulticast, Reliable)
	void MulticastHealth();

};
