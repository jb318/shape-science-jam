// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyBase.h"
#include "Components/WidgetComponent.h"
#include "EnemyHealthBarWidget.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Perception/PawnSensingComponent.h"
#include "AIController.h" 
#include "ShapeController.h"
#include "DrawDebugHelpers.h"
#include "NavigationSystem.h"

// Sets default values
AEnemyBase::AEnemyBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Health Initialization
	CurrentHealth = MaxHealth;

	HealthBarComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("HealthBar"));
	HealthBarComponent->SetupAttachment(GetMesh());
	HealthBarComponent->SetRelativeLocation(FVector(0, 0, 110));
	HealthBarComponent->SetWidgetSpace(EWidgetSpace::Screen);
	HealthBarComponent->SetDrawAtDesiredSize(true);

	EyePoint = CreateDefaultSubobject<USceneComponent>(TEXT("EyePoint"));
	EyePoint->SetupAttachment(GetMesh());
	EyePoint->SetRelativeLocation(FVector(0, 0, 100));

	PawnSensingComp = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensing"));
	PawnSensingComp->SightRadius = 100.0f;
	PawnSensingComp->SetPeripheralVisionAngle(45.0f);
	PawnSensingComp->bOnlySensePlayers = true;
	PawnSensingComp->HearingThreshold = 20.0f;
	PawnSensingComp->LOSHearingThreshold = 20.0f;

	static ConstructorHelpers::FClassFinder<UUserWidget> WBP(TEXT("/Game/Enemy/UI/EnemyHealthBar_WBP.EnemyHealthBar_WBP_C"));
	if (WBP.Succeeded())
	{
		HealthBarComponent->SetWidgetClass(WBP.Class);
	}

}

float AEnemyBase::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	if (DamageAmount <= 0.0f) return 0.0f;

	// Subtract health
	CurrentHealth = FMath::Clamp(CurrentHealth - DamageAmount, 0.0f, MaxHealth);

	// Update UI
	RefreshHealthBar();

	if (CurrentHealth <= 0.0f)
	{
		Destroy();
	}

	// Returns the actual damage applied
	return DamageAmount;
}

// Called when the game starts or when spawned
void AEnemyBase::BeginPlay()
{
	Super::BeginPlay();
	CurrentHealth = MaxHealth;
	RefreshHealthBar();

	LastRoamTime = GetWorld()->GetTimeSeconds();
	
	if (PawnSensingComp)
	{
		PawnSensingComp->OnSeePawn.AddDynamic(this, &AEnemyBase::OnSeePawn);
		//PawnSensingComp->OnHearNoise.AddDynamic(this, &AEnemyBase::OnHearNoise);
	}
}

void AEnemyBase::OnSeePawn(APawn* SeenPawn)
{
	if (!SeenPawn) return;
	UE_LOG(LogTemp, Warning, TEXT("%s saw pawn: %s"), *GetName(), SeenPawn ? *SeenPawn->GetName() : TEXT("NULL"));
	if (GEngine && SeenPawn)
	{
		GEngine->AddOnScreenDebugMessage(
			-1, 2.f, FColor::Yellow,
			FString::Printf(TEXT("%s: OnSeePawn -> %s"), *GetName(), *SeenPawn->GetName()));
	}
	if (SeenPawn->IsA(AShapeController::StaticClass()))
	{
		if (AAIController* AICon = Cast<AAIController>(GetController()))
		{
			AICon->MoveToActor(SeenPawn, 5.0f);
		}
	}
	if (SeenPawn)
	{
		DrawDebugSphere(GetWorld(), SeenPawn->GetActorLocation(), 50.f, 12, FColor::Red, false, 2.f);
	}
}

FVector AEnemyBase::GetPawnViewLocation() const
{
	if (EyePoint)
	{
		return EyePoint->GetComponentLocation();
	}

	return Super::GetPawnViewLocation();
}
void AEnemyBase::RefreshHealthBar()
{
	if (UEnemyHealthBarWidget* UI = Cast<UEnemyHealthBarWidget>(HealthBarComponent->GetUserWidgetObject()))
	{
		UI->UpdateHealth(CurrentHealth, MaxHealth);
	}
}

void AEnemyBase::PickNewRoamDestination()
{
	// Finds all actors tagged for roaming
	TArray<AActor*> Points;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), RoamTag, Points);
	if (Points.Num() == 0) return;

	// Pick one at random
	AActor* Dest = Points[FMath::RandRange(0, Points.Num() - 1)];
	if (!Dest) return;

	// Instructs the AI to move there
	if (AAIController* AICon = Cast<AAIController>(GetController()))
	{
		
		AICon->MoveToLocation(Dest->GetActorLocation());
	}
	
	
}
// Called every frame
void AEnemyBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
	// Every RoamInterval seconds, pick a new destination
	const float Now = GetWorld()->GetTimeSeconds();
	if (Now - LastRoamTime >= RoamInterval)
	{
		LastRoamTime = Now;
		PickNewRoamDestination();
	}

}

// Called to bind functionality to input
void AEnemyBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

