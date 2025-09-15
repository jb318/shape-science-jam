// Fill out your copyright notice in the Description page of Project Settings.


#include "MultiplayerSessionsSubsystems.h"
#include "OnlineSubsystem.h"
#include "OnlineSessionSettings.h"


	void PrintString(FString String)
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, String);
		}
}
UMultiplayerSessionsSubsystems::UMultiplayerSessionsSubsystems()
{
	//PrintString("MultiplayerSessionsSubsystems Constructor");

	CreateServerAfterDestroy = false;
	DestroyServerName = "";
}

void UMultiplayerSessionsSubsystems::Initialize(FSubsystemCollectionBase& Collection)
{
	//PrintString("MultiplayerSessionsSubsystems Initialized");

	IOnlineSubsystem* OnlineSubsystem = IOnlineSubsystem::Get();
	if (OnlineSubsystem)
	{
		FString SubsystemName = OnlineSubsystem->GetSubsystemName().ToString();
		PrintString("Found Online Subsystem: " + SubsystemName);

		SessionInterface = OnlineSubsystem->GetSessionInterface();
		if (SessionInterface.IsValid())
		{
			SessionInterface->OnCreateSessionCompleteDelegates.AddUObject(this, 
				&UMultiplayerSessionsSubsystems::OnCreateSessionComplete);
			SessionInterface->OnDestroySessionCompleteDelegates.AddUObject(this, 
				&UMultiplayerSessionsSubsystems::OnDestroySessionComplete);
		}

	}
}
void UMultiplayerSessionsSubsystems::Deinitialize()
{
	//UE_LOG(LogTemp, Warning, TEXT("MultiplayerSessionsSubsystems Deinitialized"));
}

void UMultiplayerSessionsSubsystems::CreateServer(FString ServerName)
{
	PrintString("CreateServer: " + ServerName);

	if (ServerName.IsEmpty())
	{
		PrintString("Server name is empty");
		return;
	}
	
	FName MySessionName = FName("MolecularMayhem");

	FNamedOnlineSession *ExistionSession = SessionInterface->GetNamedSession(MySessionName);
	if (ExistionSession)
	{
		PrintString("Session already exists Destroying it.");
		CreateServerAfterDestroy = true;
		DestroyServerName = ServerName;
		SessionInterface->DestroySession(MySessionName);
		return;
	}


	FOnlineSessionSettings SessionSettings;


	SessionSettings.bAllowJoinInProgress = true;
	SessionSettings.bIsDedicated = false;
	SessionSettings.bShouldAdvertise = true;
	SessionSettings.NumPublicConnections = 2;
	SessionSettings.bUseLobbiesIfAvailable = true;
	SessionSettings.bUsesPresence = true;
	SessionSettings.bAllowJoinViaPresence = true;
	bool IsLan = false;
	if (IOnlineSubsystem::Get()->GetSubsystemName() == "NULL")
	{
		IsLan = true;
	}
	SessionSettings.bIsLANMatch = IsLan;

	SessionInterface->CreateSession(0, MySessionName, SessionSettings);

}

void UMultiplayerSessionsSubsystems::CreateFindServer(FString ServerName)
{
	if (ServerName.IsEmpty())
	{
		PrintString("Server name cannot be empty!");
		return;
	}

}

void UMultiplayerSessionsSubsystems::OnCreateSessionComplete(FName SessionName, bool bWasSuccessful)
{
	if (bWasSuccessful)
	{
		PrintString("Session created successfully: " + SessionName.ToString());
		GetWorld()->ServerTravel("/Game/Levels/Test_Level?Listen");
	}

}

void UMultiplayerSessionsSubsystems::OnDestroySessionComplete(FName SessionName, bool bWasSuccessful)
{
	if (bWasSuccessful)
	{
		PrintString("Session destroyed successfully: " + SessionName.ToString());

		if (CreateServerAfterDestroy)
		{

		CreateServerAfterDestroy = false;
		CreateServer(DestroyServerName);

		}
	}
	else
	{
		PrintString("Failed to destroy session: " + SessionName.ToString());
	}

}

