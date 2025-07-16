// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ShapeController.h"
#include "SSGameMode.generated.h"

/**
 * 
 */
UCLASS()
class SHAPE_SCIENCE_JAM_API ASSGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	ASSGameMode();

protected:
	virtual void PostLogin(APlayerController* NewPlayer) override;

	//virtual AActor* ChoosePlayerStart_Implementation(AController* Player) override;

	// Stores the player controllers on the server
	AShapeController* PlayerControllers[2] = {};

private:
	int PlayerCount = 0;
};
