// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "CombatInterface.h"
#include "Projectile.generated.h"

UCLASS()
class SHAPE_SCIENCE_JAM_API AProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	// Projectile movement component
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UProjectileMovementComponent* ProjectileMovement;

	// fires a projectile
	void Fire();

private:
	void PoolProjectile();

	// sets the speed of projectile for firing
	void SetProjectileSpeed();

};
