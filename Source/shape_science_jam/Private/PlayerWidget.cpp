// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerWidget.h"

UPlayerWidget::UPlayerWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

void UPlayerWidget::NativeConstruct()
{
	Super::NativeConstruct();

	UpdateHealthImage(4.f, 4.f);
	FText player1 = FText::FromString(TEXT("Player 1"));
	FText player2 = FText::FromString(TEXT("Player 2"));
	
	UpdatePlayerNames(player1, player2);

	FirstPlayerName->SetVisibility(ESlateVisibility::Hidden);
	SecondPlayerName->SetVisibility(ESlateVisibility::Hidden);
}

void UPlayerWidget::UpdatePlayerNames(FText Player1, FText Player2)
{
	FirstPlayerName->SetText(Player1);
	SecondPlayerName->SetText(Player2);

	FirstPlayerName->SetVisibility(ESlateVisibility::Visible);
	SecondPlayerName->SetVisibility(ESlateVisibility::Visible);
}
