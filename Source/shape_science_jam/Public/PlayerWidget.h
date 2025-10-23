// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "PlayerWidget.generated.h"

class UImage;

UCLASS()
class SHAPE_SCIENCE_JAM_API UPlayerWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	// Constructor
	UPlayerWidget(const FObjectInitializer& ObjectInitializer);
	
	// Override NativeConstruct for C++ initialization
	virtual void NativeConstruct() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UTextBlock* ObjectiveCountText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UTextBlock* DiamondCountText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UImage* ObjectiveImage_Circle;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UImage* ObjectiveImage_Square;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UImage* ObjectiveImage_Triangle;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UImage* ObjectiveImage_Star;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UImage* HealthImage_1;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UImage* HealthImage_2;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UImage* HealthImage_3;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UImage* HealthImage_4;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UImage* DiamondImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UTextBlock* FirstPlayerName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UTextBlock* SecondPlayerName;

	// Keeps track of objective
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int ObjectiveCount = 0;

	// Updates the objectives
	UFUNCTION(BlueprintImplementableEvent)
	void UpdateDiamondCount();

	UFUNCTION(BlueprintImplementableEvent)
	void UpdateHealthImage(float current, float max, int ShapeIndex = -1);

	UFUNCTION(BlueprintImplementableEvent)
	void UpdateObjectiveImage(int ObjectiveIndex);

	void UpdatePlayerNames(FText Player1, FText Player2);

	
};
