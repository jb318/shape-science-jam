// Fill out your copyright notice in the Description page of Project Settings.


#include "MultiplayerSessionsSubsystems.h"
#include "OnlineSubsystem.h"
#include "OnlineSessionSettings.h"
#include "Online/OnlineSessionNames.h"


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
	ServerNameToFind = "";
	MySessionName = FName("MolecularMayhem");
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
			SessionInterface->OnFindSessionsCompleteDelegates.AddUObject(this,
				&UMultiplayerSessionsSubsystems::OnFindSessionsComplete);
			SessionInterface->OnJoinSessionCompleteDelegates.AddUObject(this,
				&UMultiplayerSessionsSubsystems::OnJoinSessionComplete);
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
	SessionSettings.Set(FName("SERVER_NAME"), ServerName, EOnlineDataAdvertisementType::ViaOnlineServiceAndPing);

	SessionInterface->CreateSession(0, MySessionName, SessionSettings);

}

void UMultiplayerSessionsSubsystems::CreateFindServer(FString ServerName)
{
	if (ServerName.IsEmpty())
	{
		PrintString("Server name cannot be empty!");
		return;

	}
	bool IsLan = false;
	if (IOnlineSubsystem::Get()->GetSubsystemName() == "NULL")
	{
		IsLan = true;
	}

	SessionSearch = MakeShareable(new FOnlineSessionSearch());
	SessionSearch->bIsLanQuery = IsLan;
	SessionSearch->MaxSearchResults = 9999;
	SessionSearch->QuerySettings.Set(SEARCH_PRESENCE, true, EOnlineComparisonOp::Equals);

	ServerNameToFind = ServerName;

	SessionInterface->FindSessions(0, SessionSearch.ToSharedRef());

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

void UMultiplayerSessionsSubsystems::OnFindSessionsComplete(bool bWasSuccessful)
{
	if (!bWasSuccessful) return;
	if (ServerNameToFind.IsEmpty()) return;

	TArray<FOnlineSessionSearchResult> Results = SessionSearch->SearchResults;
	FOnlineSessionSearchResult* CorrectResult = 0;

	if (Results.Num() > 0)
	{
		FString ResultString = FString::Printf(TEXT("Number of sessions found: %d"), Results.Num());
		PrintString(ResultString);

		for (FOnlineSessionSearchResult Result : Results)
		{
			if (Result.IsValid())
			{
				FString ServerName = "No-Name";
				Result.Session.SessionSettings.Get(FName("SERVER_NAME"), ServerName);

				FString Msg = FString::Printf(TEXT("ServerName: %s, ID: %s, Ping: %d ms"), *ServerName, *Result.GetSessionIdStr(), Result.PingInMs);
				PrintString(Msg);

				if (ServerName.Equals(ServerNameToFind))
				{
					CorrectResult = &Result;
					FString Msg2 = FString::Printf(TEXT("Found the correct server: %s"), *ServerName);
					PrintString(Msg2);
					break;
				}
			}
		}
	}

	if (CorrectResult)
	{
		PrintString("Joining the correct server...");
		SessionInterface->JoinSession(0, MySessionName, *CorrectResult);
	}
	else
	{
		PrintString("Could not find the correct server");
		ServerNameToFind = "";
	}
}

void UMultiplayerSessionsSubsystems::OnJoinSessionComplete(FName SessionName, EOnJoinSessionCompleteResult::Type Result)
{
	if(Result == EOnJoinSessionCompleteResult::Success)
	{
		PrintString("Joined session successfully: " + SessionName.ToString());
		FString Address;
		bool Success = SessionInterface->GetResolvedConnectString(SessionName, Address);
		if (Success)
		{
			PrintString("Connect string: " + Address);
			APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
			if (PlayerController)
			{
				PlayerController->ClientTravel(Address, ETravelType::TRAVEL_Absolute);
			}
		}
	}
	else
	{
		PrintString("Failed to join session: " + SessionName.ToString());
	}
	ServerNameToFind = "";
}




