// Fill out your copyright notice in the Description page of Project Settings.


#include "AIShapeController.h"
#include "NavigationSystem.h"
#include "Kismet/GameplayStatics.h"

void AAIShapeController::AAIController()
{
	// uncomment if using behavior tree
	// BehaviorTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("Behavior Tree"));
	// BlackBoardComponent = CreateDefaultSubobject<UBlackboardComponent>(TEXT("Blackboard"));
}

void AAIShapeController::BeginPlay()
{
	Super::BeginPlay();
	
	GEngine->AddOnScreenDebugMessage(-3, 3.f, FColor::Blue, TEXT("Possessed"));
	// uncomment if using behavior tree
	/*if (BehaviorTree) {
		RunBehaviorTree(BehaviorTree);
		BehaviorTreeComponent->StartTree(*BehaviorTree);
	}*/
}

void AAIShapeController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	// Get reference to shape
	AI = Cast<AShape>(InPawn);
	if (AI) {
		GetWorldTimerManager().SetTimer(RoamTimerHandle, this, &AAIShapeController::PickNewRoamDestination, FMath::RandRange(1.f, 4.f), true);
	}
	
	// uncomment if using behavior tree
	/*if (Blackboard && BehaviorTree) {
		Blackboard->InitializeBlackboard(*BehaviorTree->BlackboardAsset);
	}*/
}

void AAIShapeController::PickNewRoamDestination()
{
	// Might want to limit where the AI can move to in the level
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), RoamTag, Points);
	GEngine->AddOnScreenDebugMessage(-3, 3.f, FColor::Blue, TEXT("Possessed"));
	
	// Pick one at random
	if (Points.Num() > 0) {
		AActor* Dest = Points[FMath::RandRange(0, Points.Num() - 1)];
		if (AI) {
			FString name = Dest->GetName();
			GEngine->AddOnScreenDebugMessage(-3, 3.f, FColor::Blue, name);
			MoveToActor(Dest, 1000.f);
		}
	}
	
}

void AAIShapeController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
