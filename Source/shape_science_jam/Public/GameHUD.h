// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "PlayerWidget.h"
#include "GameHUD.generated.h"

/**
 * 
 */
UCLASS()
class SHAPE_SCIENCE_JAM_API AGameHUD : public AHUD
{
	GENERATED_BODY()

public:
	// Player widget class
	UPROPERTY(EditAnywhere, Category = "Widget")
	TSubclassOf<UPlayerWidget> PlayerWidgetClass;

	// Player widget instance
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widget")
	UPlayerWidget* PlayerWidget;
	
protected:
	virtual void BeginPlay() override;
};
