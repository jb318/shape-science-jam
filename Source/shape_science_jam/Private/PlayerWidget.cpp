// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerWidget.h"

UPlayerWidget::UPlayerWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

void UPlayerWidget::NativeConstruct()
{
	Super::NativeConstruct();
}

void UPlayerWidget::SetHealthBar(float current, float max)
{
	if (HealthBar) {
		HealthBar->SetPercent(current / max);
	}
}

void UPlayerWidget::SetExperienceBar(float current, float max)
{
	if (ExperienceBar) {
		ExperienceBar->SetPercent(current / max);
	}
}

void UPlayerWidget::UpdateObjectiveBar_Implementation()
{
	ObjectiveCount++;
	if (ObjectiveCount == 4) {
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, TEXT("Set the victory widget and stuff in bp"));
	}
}
