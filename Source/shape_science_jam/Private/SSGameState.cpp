// Fill out your copyright notice in the Description page of Project Settings.


#include "SSGameState.h"
#include "Net/UnrealNetwork.h"

void ASSGameState::UpdateObjectiveCount()
{
	
}

void ASSGameState::SetSessionName(const FName& NewSessionName)
{
	SessionName = NewSessionName;
}

void ASSGameState::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ASSGameState, SessionName);
	
}
