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
	virtual void SpecialMove_Implementation() override;

protected:
	virtual void BeginPlay() override;

	// Attack cool down (could have separated shapes further into melee and range...)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Shape Moves")
	float AttackDelay = 0.0833;

	void LaunchStar();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FVector LaunchVector = FVector(450.f, 0.f, 0.f);

	UFUNCTION(BlueprintImplementableEvent)
	void SetSpecialMoveFlipbook();

	UPROPERTY(BlueprintReadWrite)
	UPaperFlipbook* StarSpecialMove;

	virtual void CoolDown() override;
};