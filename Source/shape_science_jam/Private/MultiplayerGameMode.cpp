// Fill out your copyright notice in the Description page of Project Settings.


#include "MultiplayerGameMode.h"
#include "GameFramework/PlayerStart.h"

AMultiplayerGameMode::AMultiplayerGameMode()
{

}

void AMultiplayerGameMode::BeginPlay()
{
	Super::BeginPlay();
}

void AMultiplayerGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);
	
}

void AMultiplayerGameMode::SpawnShapes(int ShapeIndex)
{
	if (Shape.IsValidIndex(ShapeIndex))
	{
		FVector SpawnLocation = (FVector(0.f, 0.f, -100.f));
		FRotator SpawnRotation = FRotator::ZeroRotator;
		GetWorld()->SpawnActor<AActor>(Shape[ShapeIndex], SpawnLocation, SpawnRotation);
	}
}


void AMultiplayerGameMode::AssignShapes(AShapeController* PC) 
{

}

