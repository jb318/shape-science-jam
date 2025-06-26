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
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Shape Moves")
	TSubclassOf<AProjectile> ProjectileClass;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UArrowComponent* FireComponent1;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UArrowComponent* FireComponent2;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UArrowComponent* FireComponent3;

private:
	AProjectile* Projectile1;
	AProjectile* Projectile2;
	AProjectile* Projectile3;
};