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

void AGameHUD::UpdateHealthDisplay()
{
	if (PlayerWidget) {
		PlayerWidget->UpdateHealthImage();
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
