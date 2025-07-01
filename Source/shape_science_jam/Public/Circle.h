// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Shape.h"
#include "Circle.generated.h"

/**
 * 
 */
UCLASS()
class SHAPE_SCIENCE_JAM_API ACircle : public AShape
{
	GENERATED_BODY()

public: 
	// Base class function implementations
	virtual void Attack_Implementation() override;
	virtual void SpecialMove_Implementation() override;

protected: 
	virtual void BeginPlay() override;

	// Lasts duration of launch
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CanHitEnemy;

	// Dash attacks damage
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Shape Moves")
	float DashDamage = 0.5;

	// Knockback velocity
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector KnockbackVelocity;

	UFUNCTION()
	void OnOverlapEnemy(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool SameVeloDash;

private:
	// Helper function, delays the circle from jumping to match with animation
	void CircleJump();

};
