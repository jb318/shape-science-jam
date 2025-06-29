// Fill out your copyright notice in the Description page of Project Settings.


#include "GameHUD.h"

void AGameHUD::GameOver_Implementation()
{
	if (PlayerWidget) {
		PlayerWidget->RemoveFromParent();
	}
}

void AGameHUD::BeginPlay()
{
	Super::BeginPlay();

	if (PlayerWidgetClass) {
		PlayerWidget = CreateWidget<UPlayerWidget>(GetWorld(), PlayerWidgetClass);
		if (PlayerWidget) {
			PlayerWidget->AddToViewport();
		}
	}
	else
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Need to set the widget class for the HUD"));
}
