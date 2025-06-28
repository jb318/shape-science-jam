// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ProgressBar.h"
#include "PlayerWidget.generated.h"

/**
 * 
 */
UCLASS()
class SHAPE_SCIENCE_JAM_API UPlayerWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	// Constructor
	UPlayerWidget(const FObjectInitializer& ObjectInitializer);
	
	// Override NativeConstruct for C++ initialization
	virtual void NativeConstruct() override;

	// Health bar
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	class UProgressBar* HealthBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	class UProgressBar* ExperienceBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	class UProgressBar* AttackCoolDown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* ObjectiveCountText;

	void SetHealthBar(float current, float max);
	void SetExperienceBar(float current, float max);

	// Updates the objective bar
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void UpdateObjectiveBar();

	void UpdateObjectiveBar_Implementation();

	// Keeps track of objective
	int ObjectiveCount = 0;
};
