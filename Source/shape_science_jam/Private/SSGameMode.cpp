// Fill out your copyright notice in the Description page of Project Settings.


#include "SSGameMode.h"
#include "GameFramework/PlayerStart.h"

ASSGameMode::ASSGameMode()
{

}

void ASSGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	if (AShapeController* PC = Cast<AShapeController>(NewPlayer)) {
		if (PlayerCount < 2) {
			PlayerControllers[PlayerCount] = PC;
			PlayerCount++;
		}
		if (PlayerCount == 2) {
			GEngine->AddOnScreenDebugMessage(-3, 3.f, FColor::Purple, TEXT("Second Controller Set"));
			if (PlayerControllers[0]) {
				PlayerControllers[0]->Shapes[1] = NULL;
				PlayerControllers[0]->Shapes[2] = NULL;
			}
			else {
				PlayerControllers[1]->Shapes[0] = NULL;
				PlayerControllers[1]->Shapes[3] = NULL;
			}
		}
		
	}
}

//AActor* ASSGameMode::ChoosePlayerStart_Implementation(AController* Player)
//{
//	// Selects player start
//	for (TActorIterator<APlayerStart> It(GetWorld()); It; ++It)
//	{
//		APlayerStart* PlayerStart = *It;
//		if (PlayerStart && PlayerStart->IsClaimed() == false)
//	}
//	return nullptr;
//}
