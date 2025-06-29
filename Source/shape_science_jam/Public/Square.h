// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Shape.h"
#include "Projectile.h"
#include "Square.generated.h"

/**
 * 
 */
UCLASS()
class SHAPE_SCIENCE_JAM_API ASquare : public AShape
{
	GENERATED_BODY()

public:
	// Base class function implementations
	void Attack_Implementation() override;
	void SpecialMove_Implementation() override;

protected:
	// When game begins
	virtual void BeginPlay() override;

	// Instance of projectile to spawn on reflect
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Shape Moves")
	TSubclassOf<AProjectile> ProjectileClass;

	// Implement in square enemy to ensure that reflect is reflecting attack
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AutoReflectAttack;

	// Checks if anti-gravity mode is in effect
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool UsingAntiGravity = false;

	UFUNCTION()
	void OnOverlapProjectile(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// Pool for square projectile
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FVector PoolProjectileLocation1;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FVector PoolProjectileLocation2;

	// Projectile instances, exposed to BP so the flipbook can be modified
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AProjectile* Projectile1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AProjectile* Projectile2;

	// Which side to reflect projectile
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float ReflectOffset = 40.f;

private:
	void SwitchGravity();

	int ProjectileIndex = 0;
	
};
