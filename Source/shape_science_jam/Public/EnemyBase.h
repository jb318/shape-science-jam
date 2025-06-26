// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Perception/PawnSensingComponent.h"
#include "CombatInterface.h"
#include "EnemyBase.generated.h"


class UWidgetComponent;
class UEnemyHealthBarWidget;


UCLASS()
class SHAPE_SCIENCE_JAM_API AEnemyBase : public ACharacter, public ICombatInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemyBase();

	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	/* Health and UI */
	UPROPERTY(VisibleAnywhere, Category = "Health")
	float CurrentHealth;

	UPROPERTY(EditAnywhere, Category = "Health")
	float MaxHealth = 25.0f;

	// Widget component that holds our UMG health bar
	UPROPERTY(VisibleAnywhere, Category = "UI")
	UWidgetComponent* HealthBarComponent;

	// Called when CurrentHealth changes
	void RefreshHealthBar();

	// Tag used to find roam points
	UPROPERTY(EditAnywhere, Category = "Roam")
	FName RoamTag = TEXT("RoamPoint");
	
	// Interval between new roaming targets
	UPROPERTY(EditAnywhere, Category = "Roam")
	float RoamInterval = 2.0f;

	// How often to pick a new roam target
	UPROPERTY(EditAnywhere, Category = "Roam")
	float LastRoamTime = 0.0f;

	UFUNCTION()
	void OnSeePawn(APawn* SeenPawn);

	//UFUNCTION()
	//void OnHearNoise(APawn* InstigatorPawn, const FVector& Location, float Volume);

	UPROPERTY(VisibleAnywhere, Category = "AI Sensing")
	UPawnSensingComponent* PawnSensingComp;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "AI Sensing", meta = (AllowPrivateAccess = "true"))
	USceneComponent* EyePoint;

	/** Returns EyePoint location instead of default */
	virtual FVector GetPawnViewLocation() const override;
	void PickNewRoamDestination();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
