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

	PlayerCount++;
	ENetMode CurrentNetMode = GetWorld()->GetNetMode();
	
	if (CurrentNetMode == NM_ListenServer) {
		if (AShapeController* PC = Cast<AShapeController>(NewPlayer)) {
			PlayerControllers[PlayerCount - 1] = PC;
			if (PlayerCount == 1) {
				// Checks how many players there are after a second or two
				FTimerDelegate AssignShapesDelegate;
				FTimerHandle AssignShapesHandle;
				AssignShapesDelegate.BindUObject(this, &ASSGameMode::AssignShapes, PC);
				GetWorld()->GetTimerManager().SetTimer(AssignShapesHandle, AssignShapesDelegate, AssignShapesDelay, false);
			}
		}
		else {
			GEngine->AddOnScreenDebugMessage(7, 2.f, FColor::Red, TEXT("Wrong player controller"));
		}
	}
	else {
		if (AShapeController* PC = Cast<AShapeController>(NewPlayer))
			AssignShapes(PC);
	}

}

void ASSGameMode::AssignShapes(AShapeController* PC) 
{
	// Assigns the full list of shapes to player if playing single player
	if (PlayerCount == 1) {
		PC->SpawnShapes(0, 3, PC);
		PC->AssignPlayer(FirstPlayer, FirstPlayerSpawn, FirstPlayerRotation);
	}
	// Otherwise, split the accessible shapes per player
	else if (PlayerCount == 2) {
		PlayerControllers[0]->SpawnShapes(0, 1, PlayerControllers[0]);
		PlayerControllers[1]->SpawnShapes(2, 3, PlayerControllers[1]);
		PlayerControllers[0]->AssignPlayer(FirstPlayer, FirstPlayerSpawn, FirstPlayerRotation);
		PlayerControllers[1]->AssignPlayer(SecondPlayer, SecondPlayerSpawn, SecondPlayerRotation);
	}
}