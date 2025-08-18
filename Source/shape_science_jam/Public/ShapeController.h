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
#include "Triangle.h"
#include "Star.h"
#include "GameHUD.h"
#include "InteractInterface.h"
#include "ShapeController.generated.h"

/**
 * 
 */
class AShape;

UCLASS()
class SHAPE_SCIENCE_JAM_API AShapeController : public APlayerController, public IInteractInterface
{
	GENERATED_BODY()

public:
	// Constructor
	AShapeController();

protected:
	virtual void BeginPlay() override;

	// Allow for input mapping context and actions to be set inside the details panel in UE5
	// *Example of Reflection system in action.  Things defined with UPROPERTY can generally be seen in Unreal Editor*
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input")
	UInputMappingContext* PlayerInputContext;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input")
	UInputAction* MoveAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input")
	UInputAction* AttackAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input")
	UInputAction* SpecialMoveAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input")
	UInputAction* PauseMenuAction;

	// Chorded action for changing shape
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input")
	UInputAction* ShapeChangeSelectAction;

	// Spawn locations for each of the shapes player will possess
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Spawn Points")
	FVector CirclePoolLocation = FVector(0.f, -100.f, 2000.f);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Spawn Points")
	FVector SquarePoolLocation = FVector(0.f, -100.f, 1000.f);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Spawn Points")
	FVector TrianglePoolLocation = FVector(0.f, -100.f, -1000.f);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Spawn Points")
	FVector StarPoolLocation = FVector(0.f, -100.f, -2000.f);

	// Main spawn point
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Spawn Points")
	FVector PlayerSpawn;

	// Call to server for local player controller to possess shape in multiplayer, needs WithValidation to create parameters in function signature
	UFUNCTION(Server, Reliable, WithValidation)
	void PossessRequest(AShapeController* LocalShapeController, int ShapeKeyX, int ShapeKeyY, bool AllowedSwitch);

	UFUNCTION(NetMulticast, Reliable)
	void ClientPossess();

	// Pools shape out of view and multicast to all clients if needed
	void PoolShape(int index);

public:
	// Sets the input mapping context to the game mode character class
	virtual void SetupInputComponent() override;

	// Template classes to create variabels that references classes and their respective subclasses
	UPROPERTY(EditDefaultsOnly, Category = "Shapes")
	TSubclassOf<ACircle> CircleClass;

	UPROPERTY(EditDefaultsOnly, Category = "Shapes")
	TSubclassOf<ASquare> SquareClass;

	UPROPERTY(EditDefaultsOnly, Category = "Shapes")
	TSubclassOf<ATriangle> TriangleClass;

	UPROPERTY(EditDefaultsOnly, Category = "Shapes")
	TSubclassOf<AStar> StarClass;

	// Possessable Shapes
	UPROPERTY(Replicated)
	AShape* AccessibleShapes[4] = {};

	// Pause menu widget instance and class reference
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI")
	TSubclassOf<UUserWidget> PauseMenuClass;
	UUserWidget* PauseMenu;

	// Restores players hp after dying
	UFUNCTION(BlueprintCallable)
	virtual void RestoreHealth();

	virtual void UpdateObjective() override;

	// Assigns Player to the corresponding entry in Accessible Shapes array
	void AssignPlayer(int ShapeIndex, FVector Location, FRotator Rotation);

	AShape* Player;

	// Spawn shapes
	void SpawnShapes(int FirstShapeIndex, int LastShapeIndex, AShapeController* LocalShapeController);

private:
	// Input functions and bindings
	void Move(const FInputActionValue& value);
	void Attack(const FInputActionValue& value);
	void SpecialMove(const FInputActionValue& value);
	void OpenPauseMenu(const FInputActionValue& value);
	void ShapeChangeSelect(const FInputActionValue& value);

	void ChangeShape(int XValue, int YValue, FVector PlayerLocation, FRotator PlayerRotation, AShapeController* LocalShapeController);

	// Tracks if widget is currently on screen or not
	bool PauseMenuVisible = false;

	// Key to indentify and switch shapes too
	int ShapeKey = 0;

	// reference to HUD
	AGameHUD* HUD;

	// Shape class instances to cast to
	/*ACircle* Circle;
	ASquare* Square;
	ATriangle* Triangle;
	AStar* Star;*/

	// Each shape's pool point
	FVector ShapePoolPoints[4] = {CirclePoolLocation, StarPoolLocation, TrianglePoolLocation, SquarePoolLocation};

	void SayHi();
	void Goodbye();

};
