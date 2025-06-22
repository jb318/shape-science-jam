// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTree.h"
#include "AIController.h"
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

	// Finds all actors tagged for roaming
	TArray<AActor*> Points;

protected:
	virtual void BeginPlay() override;

	// Get the reference of pawn for AI controller to use
	virtual void OnPossess(APawn* InPawn) override;

	// Tag used to find roam points
	UPROPERTY(EditAnywhere, Category = "Roam")
	FName RoamTag = TEXT("RoamPoint");

	// Interval between new roaming targets
	UPROPERTY(EditAnywhere, Category = "Roam")
	float RoamInterval = 2.0f;

	// How often to pick a new roam target
	UPROPERTY(EditAnywhere, Category = "Roam")
	float LastRoamTime = 0.0f;

	void PickNewRoamDestination();

	// AI enemy reference
	AShape* AI;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	// uncomment if using behavior tree
	/*UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "AI", meta = (AllowPrivateAccess = true))
	TObjectPtr<UBehaviorTree> BehaviorTree;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI", meta = (AllowPrivateAccess = true))
	TObjectPtr<UBehaviorTreeComponent> BehaviorTreeComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI", meta = (AllowPrivateAccess = true))
	TObjectPtr<UBlackboardComponent> BlackBoardComponent;*/

	FTimerHandle RoamTimerHandle;
};
