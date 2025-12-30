// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "PaperFlipbookComponent.h"
#include "InteractInterface.h"
#include "Item.generated.h"

UCLASS()
class SHAPE_SCIENCE_JAM_API AItem : public AActor, public IInteractInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item Properties")
	UBoxComponent* BoxComponent;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item Properties")
	FString Name;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item Properties")
	UPaperFlipbookComponent* Flipbook;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item Properties")
	USoundWave* ItemCollectedSFX;

	// Item value (i.e. a value of 7 on invincibility would give the player 7 seconds of invincibility
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float ItemVal = 7.f;

	// From the interact interface
	virtual void Interact() override;
	virtual FString ItemName() override;
	virtual float ItemValue() override;
	virtual void UpdateObjective() override;
	virtual void PlaySoundEffect() override;
};
