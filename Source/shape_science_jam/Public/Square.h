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
	void SpecialMove_Implementation() override;

protected:
	// When game begins
	virtual void BeginPlay() override;

	// Instance of projectile to spawn on reflect
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Shape Moves")
	TSubclassOf<AProjectile> ProjectileClass;

	// Checks if anti-gravity mode is in effect
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool UsingAntiGravity = false;

	UFUNCTION()
	void OnOverlapProjectile(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

private:
	void SwitchGravity();

	// Projectile instance
	AProjectile* Projectile;
	
};
