// Fill out your copyright notice in the Description page of Project Settings.


#include "ShapeState.h"
#include "Kismet/GameplayStatics.h"
#include "GameHUD.h"

void AShapeState::UpdatePlayerHealth_Implementation()
{
	MulticastHealth();
}

void AShapeState::MulticastHealth_Implementation()
{
	if (AGameHUD* GameHUD = Cast<AGameHUD>(UGameplayStatics::GetPlayerController(this, 0)->GetHUD())) {
		if (GameHUD->PlayerWidget) {
			GameHUD->PlayerWidget->UpdatePlayerNames(FText::FromString(TEXT("JB")), FText::FromString(TEXT("ÉWÉFÉr")));
		}
	}

}

