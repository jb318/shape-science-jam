#pragma once

#pragma once

#include "CoreMinimal.h"
#include "Shape.h"
#include "Components/ArrowComponent.h"
#include "Projectile.h"
#include "Star.generated.h"

UCLASS()
class SHAPE_SCIENCE_JAM_API AStar : public AShape
{
	GENERATED_BODY()

public:
	// Constructor
	AStar();

	// Base class function implementations
	virtual void Attack_Implementation() override;
	virtual void SpecialMove_Implementation() override;

protected:
	virtual void BeginPlay() override;
	
	// Components of star
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Shape Moves")
	TSubclassOf<AProjectile> ProjectileClass;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UArrowComponent* FireComponent1;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UArrowComponent* FireComponent2;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UArrowComponent* FireComponent3;

	// Where to pool spawned projectile class
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Shape Moves")
	FVector PoolProjectileLocation1;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Shape Moves")
	FVector PoolProjectileLocation2;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Shape Moves")
	FVector PoolProjectileLocation3;

	// Animation related timers
	virtual void CoolDown() override;
	void FireProjectile();

	// Attack cool down (could have separated shapes further into melee and range...)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Shape Moves")
	float AttackDelay = 0.0833;

	// If false, should shoot projectile to the left
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool FireRightSide;
	
	// Projectile instances to editor for flipbook changing
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AProjectile* Projectile1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AProjectile* Projectile2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AProjectile* Projectile3;
};