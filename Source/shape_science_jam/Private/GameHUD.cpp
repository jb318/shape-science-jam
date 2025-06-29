// Fill out your copyright notice in the Description page of Project Settings.


#include "GameHUD.h"

void AGameHUD::GameOver_Implementation()
{
	if (PlayerWidget) {
		PlayerWidget->SetVisibility(ESlateVisibility::Hidden);
	}
	
}

void AGameHUD::CreatePlayerWidget()
{
	if (!PlayerWidgetCreated) {
		if (PlayerWidgetClass) {
			PlayerWidget = CreateWidget<UPlayerWidget>(GetWorld(), PlayerWidgetClass);
			if (PlayerWidget) {
				PlayerWidget->AddToViewport();
			}
		}
	}
}

void AGameHUD::SetHealthPercent(float MinimumHealth, float MaximumHealth)
{
	if (PlayerWidget) {
		PlayerWidget->SetHealthBar(MinimumHealth, MaximumHealth);
	}
	
}

void AGameHUD::ToggleWidget()
{
	if (PlayerWidget) {
		PlayerWidget->SetVisibility(ESlateVisibility::Visible);
	}
}

void AGameHUD::BeginPlay()
{
	Super::BeginPlay();

}
