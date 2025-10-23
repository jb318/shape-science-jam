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

public:

	/*UPROPERTY(Replicated, BlueprintReadOnly, Category = "Player State")
	FString PlayerName;

	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Player State")
	float PlayerHealth;*/

	UFUNCTION(Server, Reliable)
	void UpdatePlayerHealth();

	UFUNCTION(NetMulticast, Reliable)
	void MulticastHealth();

};
