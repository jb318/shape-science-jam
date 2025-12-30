// Fill out your copyright notice in the Description page of Project Settings.


#include "ShapeState.h"
#include "Kismet/GameplayStatics.h"
#include "GameHUD.h"

void AShapeState::BeginPlay()
{
	if (AGameHUD* GameHUD = Cast<AGameHUD>(UGameplayStatics::GetPlayerController(this, 0)->GetHUD())) {
		if (GameHUD->PlayerWidget) {
			GameHUD->PlayerWidget->FirstPlayerName->SetText(FText::FromString(TEXT("Player 1")));
			GameHUD->PlayerWidget->SecondPlayerName->SetText(FText::FromString(TEXT("Player 2")));
			GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Red, TEXT("Player Name set in ShapeState.cpp"));
		}
	}
}

void AShapeState::UpdatePlayerHealth_Implementation()
{
	MulticastHealth();
}

void AShapeState::MulticastHealth_Implementation()
{
	

}