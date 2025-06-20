// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"
#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include "ShapeController.generated.h"

/**
 * 
 */
class AShape;

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

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input")
	UInputAction* AttackAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input")
	UInputAction* SpecialMoveAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input")
	UInputAction* ChangeShapeAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input")
	UInputAction* PauseMenuAction;

public:
	// Sets the input mapping context to the game mode character class
	virtual void SetupInputComponent() override;

	// Template classes to create variabels that references classes and their respective subclasses
	UPROPERTY(EditDefaultsOnly, Category = "Shapes")
	TSubclassOf<ACircle> CircleClass;

	UPROPERTY(EditDefaultsOnly, Category = "Shapes")
	TSubclassOf<ASquare> SquareClass;
	
	// Shape class instances to cast to
	ACircle* Circle;
	ASquare* Square;

	// Player Reference
	AShape* Player;

	// Pause menu widget instance and class reference
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI")
	TSubclassOf<UUserWidget> PauseMenuClass;
	UUserWidget* PauseMenu;

	// Tracks if widget is currently on screen or not
	bool PauseMenuVisible = false;
	
	// Index to indentify and switch shapes too
	int ShapeIndex = 0;

private: 
	
	// Input functions and bindings
	void Move(const FInputActionValue& value);
	void Attack(const FInputActionValue& value);
	void SpecialMove(const FInputActionValue& value);
	void ChangeShape(const FInputActionValue& value);
	void OpenPauseMenu(const FInputActionValue& value);

};
