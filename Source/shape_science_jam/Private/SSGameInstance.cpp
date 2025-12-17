// Fill out your copyright notice in the Description page of Project Settings.


#include "SSGameInstance.h"
#include "OnlineSubsystem.h"
#include <Online/OnlineSessionNames.h>
#include "Kismet/GameplayStatics.h"

void USSGameInstance::Init()
{
	Super::Init();
	OnlineSubsystem = IOnlineSubsystem::Get();

	sessionPtr = OnlineSubsystem->GetSessionInterface();
	sessionPtr->OnCreateSessionCompleteDelegates.AddUObject(this, &USSGameInstance::CreateSessionCompleted);
	sessionPtr->OnFindSessionsCompleteDelegates.AddUObject(this, &USSGameInstance::FindSessionsCompleted);
	sessionPtr->OnJoinSessionCompleteDelegates.AddUObject(this, &USSGameInstance::JoinSessionCompleted);
	
}

void USSGameInstance::HostSession(const FName& PlayerName, const FString RoomCode)
{
	if (sessionPtr) {
		FOnlineSessionSettings SessionSettings;
		SessionSettings.bAllowInvites = true;
		SessionSettings.bIsDedicated = false;
		SessionSettings.bIsLANMatch = false;
		SessionSettings.bShouldAdvertise = true;
		SessionSettings.bUseLobbiesIfAvailable = true;
		SessionSettings.bUsesPresence = true;
		SessionSettings.bAllowJoinInProgress = true;
		SessionSettings.bAllowJoinViaPresence = true;
		SessionSettings.NumPublicConnections = true;
		
		// Passing an arbitrary data, and make is available to be read be client
		SessionSettings.Set(SessionNameKey, PlayerName.ToString(), EOnlineDataAdvertisementType::ViaOnlineServiceAndPing);
		SessionSettings.Set(SessionRoomKey, RoomCode, EOnlineDataAdvertisementType::ViaOnlineServiceAndPing);

		FString Name = PlayerName.ToString();
		Name += "'s Session";
		FName SessionName = *Name;

		sessionPtr->CreateSession(0, SessionName, SessionSettings);
	}
}

void USSGameInstance::FindSession()
{
	if (sessionPtr) {
		SessionSearch = MakeShareable(new FOnlineSessionSearch);
		
		SessionSearch->bIsLanQuery = false;
		SessionSearch->MaxSearchResults = 20;
		SessionSearch->QuerySettings.Set(SEARCH_LOBBIES, true, EOnlineComparisonOp::Equals);
		sessionPtr->FindSessions(0, SessionSearch.ToSharedRef());
	}
}

void USSGameInstance::JoinLobby(int index)
{
	if (index < 0 || index >= SessionSearch->SearchResults.Num()) {
		return;
	}

	const auto& SearchResult = SessionSearch->SearchResults[index];

	FString SessionName = GetSessionName(SearchResult);

	if (sessionPtr) {
		sessionPtr->JoinSession(0, FName(SessionName), SearchResult);
	}
}

FString USSGameInstance::GetSessionName(const FOnlineSessionSearchResult& SearchResult) const
{
	FString outVal = {"Name None"};
	SearchResult.Session.SessionSettings.Get(SessionNameKey, outVal);
	return outVal;
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
	if (Result == EOnJoinSessionCompleteResult::Success) {
		FString TravelUrl;
		sessionPtr->GetResolvedConnectString(SessionName, TravelUrl);
		GetFirstLocalPlayerController(GetWorld())->ClientTravel(TravelUrl, ETravelType::TRAVEL_Absolute);
	}
}