// Fill out your copyright notice in the Description page of Project Settings.

#include "SSGameInstance.h"
#include "OnlineSubsystem.h"
#include "Interfaces/OnlineIdentityInterface.h"
#include <Online/OnlineSessionNames.h>
#include "Kismet/GameplayStatics.h"

void USSGameInstance::Init()
{
	Super::Init();
	OnlineSubsystem = IOnlineSubsystem::Get("EOS");

	identityPtr = OnlineSubsystem->GetIdentityInterface();
	identityPtr->OnLoginCompleteDelegates->AddUObject(this, &USSGameInstance::LoginCompleted);

	sessionPtr = OnlineSubsystem->GetSessionInterface();
	sessionPtr->OnCreateSessionCompleteDelegates.AddUObject(this, &USSGameInstance::CreateSessionCompleted);
	sessionPtr->OnDestroySessionCompleteDelegates.AddUObject(this, &USSGameInstance::DestroySessionCompleted);
	sessionPtr->OnFindSessionsCompleteDelegates.AddUObject(this, &USSGameInstance::FindSessionsCompleted);
	sessionPtr->OnJoinSessionCompleteDelegates.AddUObject(this, &USSGameInstance::JoinSessionCompleted);
	
}

void USSGameInstance::Login()
{
	FOnlineAccountCredentials OnlineAccountCredentials;
	OnlineAccountCredentials.Type = "accountportal";
	OnlineAccountCredentials.Id = "";
	OnlineAccountCredentials.Token = "";
	if (identityPtr) {
		identityPtr->Login(0, OnlineAccountCredentials);
	}
}

void USSGameInstance::CreateSession(const FName& PlayerName, const FString RoomCode)
{
	if (sessionPtr) {
		FOnlineSessionSettings SessionSettings;
		SessionSettings.bAllowInvites = true;
		SessionSettings.bIsDedicated = false;
		SessionSettings.bIsLANMatch = false;
		SessionSettings.bShouldAdvertise = true;
		SessionSettings.bUseLobbiesIfAvailable = false;
		SessionSettings.bUsesPresence = false;
		SessionSettings.bAllowJoinInProgress = true;
		SessionSettings.bAllowJoinViaPresence = true;
		SessionSettings.NumPublicConnections = true;
		
		// Passing an arbitrary data, and make is available to be read be client
		SessionSettings.Set(SessionNameKey, PlayerName.ToString(), EOnlineDataAdvertisementType::ViaOnlineServiceAndPing);
		SessionSettings.Set(SessionRoomKey, RoomCode, EOnlineDataAdvertisementType::ViaOnlineServiceAndPing);

		FString Name = PlayerName.ToString();
		Name += "'s Session";
		FName SessionName = *Name;

		auto UserId = identityPtr->GetUniquePlayerId(0);
		sessionPtr->CreateSession(*UserId, SessionName, SessionSettings);
	}
}

void USSGameInstance::FindSession()
{
	if (sessionPtr) {
		SessionSearch = MakeShareable(new FOnlineSessionSearch);
		
		SessionSearch->bIsLanQuery = false;
		SessionSearch->MaxSearchResults = 20;
		SessionSearch->QuerySettings.Set(SEARCH_PRESENCE, true, EOnlineComparisonOp::Equals);

		auto UserId = identityPtr->GetUniquePlayerId(0);
		sessionPtr->FindSessions(*UserId, SessionSearch.ToSharedRef());
	}
}

void USSGameInstance::JoinSession(int index)
{
	if (!sessionPtr || !SessionSearch.IsValid())
	{
		UE_LOG(LogTemp, Error, TEXT("Cannot Join Lobby. SessionPtr or SessionSearch invalid"));
		return;
	}
	if (index < 0 || index >= SessionSearch->SearchResults.Num())
	{
		UE_LOG(LogTemp, Error, TEXT("Cannot Join Lobby. Index: %d is out of range"), index);
		return;
	}

	const FOnlineSessionSearchResult& SearchResult = SessionSearch->SearchResults[index];

	FName LocalSessionName = FName("GameSession");

	auto UserId = identityPtr->GetUniquePlayerId(0);

	const bool bJoinStarted = sessionPtr->JoinSession(*UserId, LocalSessionName, SearchResult);
	UE_LOG(LogTemp, Warning, TEXT("JoinSession called, success flag: %d"), bJoinStarted);
}

void USSGameInstance::DestroySession()
{
	if (sessionPtr) {
		sessionPtr->DestroySession(FName("MainSession"));
	}
}

FString USSGameInstance::GetSessionName(const FOnlineSessionSearchResult& SearchResult) const
{
	FString outVal = {"Name None"};
	SearchResult.Session.SessionSettings.Get(SessionNameKey, outVal);
	return outVal;
}

void USSGameInstance::LoginCompleted(int NumOfPlayers, bool bWasSuccessful, const FUniqueNetId& UserId, const FString& Error)
{
	if (bWasSuccessful) {
		UE_LOG(LogTemp, Warning, TEXT("Logged in"));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Log in failed: %s"), *Error);
	}
}

void USSGameInstance::CreateSessionCompleted(FName SessionName, bool bWasSuccessful)
{
	if (bWasSuccessful) {
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, TEXT("Session Created Successfully"));
	}
	else {
		GEngine->AddOnScreenDebugMessage(1, 2.f, FColor::Red, TEXT("Session Creation Failed"));;
	}
	
	if (!GameLevel.IsValid()) {
		GameLevel.LoadSynchronous();
	}
	if (GameLevel.IsValid()) {
		const FName LevelName = FName(*FPackageName::ObjectPathToPackageName(GameLevel.ToString()));
		GetWorld()->ServerTravel(LevelName.ToString() + "?listen");
		UE_LOG(LogTemp, Warning, TEXT("Server travel to %s"), *GameLevel.ToString());
	}
}

void USSGameInstance::DestroySessionCompleted(FName SessionName, bool bWasSuccessful)
{
	if (bWasSuccessful) {
		UE_LOG(LogTemp, Warning, TEXT("%s destroyed succesfully"), *SessionName.ToString());
	}
}

void USSGameInstance::FindSessionsCompleted(bool bWasSuccessful)
{
	ExtraSettings.SessionIndex = 0;
	if (bWasSuccessful && SessionSearch->SearchResults.Num() != 0) {
		for (const FOnlineSessionSearchResult& lobbyFound : SessionSearch->SearchResults) {
			FString OutVal{"N/A"};
			lobbyFound.Session.SessionSettings.Get(SessionRoomKey, OutVal);
			ExtraSettings.SessionRoomCode = OutVal;
			ExtraSettings.FoundPlayersIGN = GetSessionName(lobbyFound);
			ExtraSettings.SessionIndex++;
		}
		SearchCompleted.Broadcast(SessionSearch->SearchResults);
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("no sessions found | %d"), SessionSearch->SearchResults.Num() != 0);
	}
}

void USSGameInstance::JoinSessionCompleted(FName SessionName, EOnJoinSessionCompleteResult::Type Result)
{
	UE_LOG(LogTemp, Warning, TEXT("JoinSessionCompleted fired. SessionName: %s, Result: %d"),
		*SessionName.ToString(), (int32)Result);

	if (Result == EOnJoinSessionCompleteResult::Success)
	{
		if (sessionPtr)
		{
			FString TravelUrl;
			const bool bGotUrl = sessionPtr->GetResolvedConnectString(SessionName, TravelUrl);
			UE_LOG(LogTemp, Warning, TEXT("GetResolvedConnectString: %d, URL: %s"), bGotUrl, *TravelUrl);

			if (bGotUrl && !TravelUrl.IsEmpty())
			{
				if (APlayerController* PC = GetFirstLocalPlayerController(GetWorld()))
				{
					PC->ClientTravel(TravelUrl, ETravelType::TRAVEL_Absolute);
				}
			}
		}
	}
}