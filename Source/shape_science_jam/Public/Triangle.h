#pragma once

#include "CoreMinimal.h"
#include "Shape.h"
#include "Components/ArrowComponent.h"
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

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Shape Moves")
	TSubclassOf<AProjectile> ProjectileClass;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UArrowComponent* FireComponent;

private:
	AProjectile* Projectile;

};