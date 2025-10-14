// Fill out your copyright notice in the Description page of Project Settings.


#include "SSGameMode.h"
#include "GameFramework/PlayerStart.h"

ASSGameMode::ASSGameMode()
{

}

void ASSGameMode::BeginPlay()
{
	Super::BeginPlay();
}

void ASSGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	ENetMode CurrentNetMode = GetWorld()->GetNetMode();
	
	if (CurrentNetMode == NM_ListenServer) {
		
		if (AShapeController* PC = Cast<AShapeController>(NewPlayer)) {
			AssignShapes(ShapeCount, ShapeCount + 1, PC);
			ShapeCount = ShapeCount + 2;
		}
		else {
			GEngine->AddOnScreenDebugMessage(7, 2.f, FColor::Red, TEXT("Wrong player controller"));
		}
	}
	else {
		if (AShapeController* PC = Cast<AShapeController>(NewPlayer))
			AssignShapes(0, 3, PC);
	}

}

void ASSGameMode::AssignShapes(int StartingShapeIndex, int EndingShapeIndex, AShapeController* PC)
{
	PC->SpawnShapes(StartingShapeIndex, EndingShapeIndex, PC);
	if (PC->IsLocalController()) {
		PC->AssignPlayer(FirstPlayer, FirstPlayerSpawn, FirstPlayerRotation);
	}
	else {
		PC->AssignPlayer(SecondPlayer, SecondPlayerSpawn, SecondPlayerRotation);
	}
}