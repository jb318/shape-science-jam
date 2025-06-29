// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Kismet/GameplayStatics.h"
#include "Shape.h"
#include "AIShapeController.generated.h"

/**
 * 
 */
UCLASS()
class SHAPE_SCIENCE_JAM_API AAIShapeController : public AAIController
{
	GENERATED_BODY()

public:
	// Sets default value for the controllers properties
	void AAIController();

protected:
	virtual void BeginPlay() override;

	// Get the reference of pawn for AI controller to use
	virtual void OnPossess(APawn* InPawn) override;

	// AI enemy reference
	AShape* AI;

	// Execute attack call
	UFUNCTION(BlueprintCallable)
	virtual void Attack();

	// Possessed AI Perception
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UAIPerceptionComponent* AIPerception;

	// Possessed AI Sight
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UAISenseConfig_Sight* Sight;

	// Checks if player is spotted
	bool CanSeePlayer;

	// AI Speed when moving on tick
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AI Properties")
	float MovementSpeed = 0.33f;

	// AI sight config detected target
	UFUNCTION()
	void OnTargetDetected(AActor* Actor, FAIStimulus Stimulus);

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
