#pragma once

#pragma once

#include "CoreMinimal.h"
#include "Shape.h"
#include "Star.generated.h"

UCLASS()
class SHAPE_SCIENCE_JAM_API AStar : public AShape
{
	GENERATED_BODY()

public:
	// Base class function implementations
	virtual void Attack_Implementation() override;
	virtual void SpecialMove_Implementation() override;
};