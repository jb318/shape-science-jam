// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "OnlineSessionSettings.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "SSGameInstance.generated.h"

USTRUCT(BlueprintType)
struct FExtraSessionSettings
{
	GENERATED_USTRUCT_BODY()

	// Room Code that is stored in sessions settings
	UPROPERTY(BlueprintReadOnly)
	FString SessionRoomCode;

	// Player IGN that is stored in sessions settings
	UPROPERTY(BlueprintReadOnly)
	FString FoundPlayersIGN;

	// Index of Session Results
	UPROPERTY(BlueprintReadOnly)
	int SessionIndex;
};

DECLARE_MULTICAST_DELEGATE_OneParam(FOnSessionSearchCompleted, const TArray<FOnlineSessionSearchResult>&/*SearchResult*/); 
/**
 * 
 */
UCLASS()
class SHAPE_SCIENCE_JAM_API USSGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
protected: 
	virtual void Init() override;

public:
	UFUNCTION(BlueprintCallable)
	void Login();

	UFUNCTION(BlueprintCallable)
	void CreateSession(const FName& PlayerName, const FString RoomCode);

	UFUNCTION(BlueprintCallable)
	void DestroySession();

	UFUNCTION(BlueprintCallable)
	void FindSession();

	UFUNCTION(BlueprintCallable)
	void JoinSession(int index);

	FORCEINLINE FName GetSessionName() const { return SessionNameKey; }
	FString GetSessionName(const FOnlineSessionSearchResult& SearchResult) const;

	UPROPERTY(BlueprintReadOnly)
	FExtraSessionSettings ExtraSettings;

private:
	class IOnlineSubsystem* OnlineSubsystem;
	TSharedPtr<class IOnlineIdentity, ESPMode::ThreadSafe> identityPtr;
	TSharedPtr<class IOnlineSession, ESPMode::ThreadSafe> sessionPtr;

	// Essential Online Function Delegates
	void LoginCompleted(int NumOfPlayers, bool bWasSuccessful, const FUniqueNetId& UserId, const FString& Error);
	void CreateSessionCompleted(FName SessionName, bool bWasSuccessful);
	void DestroySessionCompleted(FName SessionName, bool bWasSuccessful);
	void FindSessionsCompleted(bool bWasSuccessful);
	void JoinSessionCompleted(FName SessionName, EOnJoinSessionCompleteResult::Type Result);

	FOnSessionSearchCompleted SearchCompleted;

	UPROPERTY(EditDefaultsOnly)
	TSoftObjectPtr<UWorld> GameLevel;

	TSharedPtr<class FOnlineSessionSearch> SessionSearch;

	const FName SessionNameKey{ "SessionNameKey" };
	const FName SessionRoomKey{ "SessionRoomKey" };


};
