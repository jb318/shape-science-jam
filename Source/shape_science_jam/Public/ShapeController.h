// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Shape.h"
#include "ShapeController.generated.h"

/**
 * 
 */
UCLASS()
class SHAPE_SCIENCE_JAM_API AShapeController : public APlayerController
{
	GENERATED_BODY() 

public:
	// Constructor
	AShapeController();
	
protected:
	virtual void BeginPlay() override;

	// Allow for input mapping context and actions to be set inside the details panel in UE5
	// *Example of Reflection system in action.  Things defined with UPROPERTY can generally be seen in Unreal Editor*
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Input")
	UInputMappingContext* PlayerInputContext;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Input")
	UInputAction* MoveAction;

public:
	// Sets the input mapping context to the game mode character class
	virtual void SetupInputComponent() override;

	// Player Class reference to cast to
	AShape* Player;

private: 
	// Input functions and bindings
	void Move(const FInputActionValue& value);
};
