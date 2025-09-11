#pragma once

#include "CoreMinimal.h"
#include "Shape.h"
#include "Components/ArrowComponent.h"
#include "Projectile.h"
#include "Triangle.generated.h"

UCLASS()
class SHAPE_SCIENCE_JAM_API ATriangle : public AShape
{
	GENERATED_BODY()

public:
	// Constructor 
	ATriangle();

	// Base class function implementations
	virtual void Attack_Implementation() override;
	virtual void SpecialMove_Implementation() override;

protected:
	virtual void BeginPlay() override;

	// Where to pool spawned projectile class
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Shape Moves")
	FVector PoolProjectileLocation1;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Shape Moves")
	FVector PoolProjectileLocation2;

	// Projectile class to spawn in
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Shape Moves")
	TSubclassOf<AProjectile> ProjectileClass;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UArrowComponent* FireComponent;

	// Animation related timers
	virtual void CoolDown() override;
	void FireProjectile();

	// Attack delay so the projectiles are fired in sync with animations
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Shape Moves")
	float AttackDelay = 0.333;

	// Instances of projectile spawned into the level
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AProjectile* Projectile1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AProjectile* Projectile2;

	UFUNCTION(Server, Reliable)
	void FireProjectileRequest();

	UFUNCTION(NetMulticast, Reliable)
	void FireProjectileMulticast();

private:

	// Index of which projectile to fire
	int ProjectileIndex = 0;

};