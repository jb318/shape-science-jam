// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyBase.h"
#include "Components/WidgetComponent.h"
#include "EnemyHealthBarWidget.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "AIController.h" 
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
		UE_LOG(LogTemp, Warning, TEXT("Roaming to %s"), *Dest->GetName());
		AICon->MoveToLocation(Dest->GetActorLocation());
	}
	
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("  No valid AIController on %s"), *GetName());
	}
}
// Called every frame
void AEnemyBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UE_LOG(LogTemp, Warning, TEXT("%s Tick at %.2f"), *GetName(), GetWorld()->GetTimeSeconds());
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

