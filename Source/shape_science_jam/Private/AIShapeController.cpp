// Fill out your copyright notice in the Description page of Project Settings.


#include "AIShapeController.h"
#include "Shape.h"

void AAIShapeController::AAIController()
{
	AIPerception = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Shape Perception"));
	Sight = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight"));

	// Sight settings
	Sight->SightRadius = 450.f;
	Sight->LoseSightRadius = 500.f;
	Sight->PeripheralVisionAngleDegrees = 90.f;
	Sight->DetectionByAffiliation.bDetectEnemies = true;
	Sight->DetectionByAffiliation.bDetectFriendlies = true;
	Sight->DetectionByAffiliation.bDetectNeutrals = true;

	// Adding and registering sight and perception
	AIPerception->ConfigureSense(*Sight);
	SetPerceptionComponent(*AIPerception);
}

void AAIShapeController::BeginPlay()
{
	Super::BeginPlay();
	
	// Establishes binding for sight updating function
	if (AIPerception) {
		AIPerception->OnTargetPerceptionUpdated.AddDynamic(this, &AAIShapeController::OnTargetDetected);
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, TEXT("AI Perception"));
	}
}

void AAIShapeController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	// Get reference to shape
	AI = Cast<AShape>(InPawn);
	if (AI) {
		FTimerHandle AttackTimer;
		//GetWorld()->GetTimerManager().SetTimer(AttackTimer, this, &AAIShapeController::Attack, 3.f, false);
	}

}


void AAIShapeController::Attack()
{
	// Attack if the player is within range
	if (AI && GetWorld()->GetFirstPlayerController()->GetPawn()) {
		if (FVector::Distance(AI->GetActorLocation(), GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation()) <= AI->AttackRange) {
			GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, TEXT("Within range of player"));
			AI->Attack_Implementation();
			AI->Attack();
		}
		else
			GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, TEXT("Not within range of player"));
	}
	
}

void AAIShapeController::OnTargetDetected(AActor* Actor, FAIStimulus Stimulus)
{
	if (AI) {
		if (!AI->InputDisabled) {
			FTimerHandle AttackTimer;
			GetWorld()->GetTimerManager().SetTimer(AttackTimer, this, &AAIShapeController::Attack, 0.05, true);
		}
	}
}

void AAIShapeController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Move AI only when this bool value is set to false
	if (AI) {
		if (!AI->InputDisabled && !AI->CannotMove) {
			AI->AddMovementInput(AI->GetActorForwardVector(), MovementSpeed);
		}
	}
	

}
