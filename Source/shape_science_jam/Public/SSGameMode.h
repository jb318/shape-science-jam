// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ShapeController.h"
#include "SSGameMode.generated.h"

/**
 * 
 */
UCLASS()
class SHAPE_SCIENCE_JAM_API ASSGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	ASSGameMode();

protected:
	virtual void BeginPlay() override;

	virtual void PostLogin(APlayerController* NewPlayer) override;

	virtual void Logout(AController* Exiting) override;

	//virtual AActor* ChoosePlayerStart_Implementation(AController* Player) override;

	// Stores the player controllers on the server
	AShapeController* PlayerControllers[2] = {};

	// Spawn locations for each of the shapes player will possess
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Spawn Points")
	FVector CircleSpawn = FVector(-100000.0, 0.f, -400000.0);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Spawn Points")
	FVector SquareSpawn = FVector(-100000.0, 0.f, -200000.0);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Spawn Points")
	FVector TriangleSpawn = FVector(-100000.0, 0.f, 200000.0);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Spawn Points")
	FVector StarSpawn = FVector(-100000.0, 0.f, 400000.0);

	// Player spawn locations
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Points")
	FVector FirstPlayerSpawn = FVector(0.f, 0.f, 0.f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Points")
	FVector SecondPlayerSpawn = FVector(100.f, 0.f, 0.f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Points")
	FRotator FirstPlayerRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Points")
	FRotator SecondPlayerRotation;

	// Possessable Shapes
	AShape* Shapes[4] = {};

	// Template classes to create variabels that references classes and their respective subclasses
	UPROPERTY(EditDefaultsOnly, Category = "Shapes")
	TSubclassOf<ACircle> CircleClass;

	UPROPERTY(EditDefaultsOnly, Category = "Shapes")
	TSubclassOf<ASquare> SquareClass;

	UPROPERTY(EditDefaultsOnly, Category = "Shapes")
	TSubclassOf<ATriangle> TriangleClass;

	UPROPERTY(EditDefaultsOnly, Category = "Shapes")
	TSubclassOf<AStar> StarClass;

	void AssignShapes(int StartingShapeIndex, int EndingShapeIndex, AShapeController* PC);

	UPROPERTY(EditDefaultsOnly)
	float AssignShapesDelay = 1.5f;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void MakeWorldUnlit();

public: 
	// Shape that is assigned to player controller on begin play
	UPROPERTY(EditDefaultsOnly, Meta = (ClampMin = "0", ClampMax = "1"))
	int FirstPlayer = 0;

	UPROPERTY(EditDefaultsOnly, Meta = (ClampMin = "2", ClampMax = "3"))
	int SecondPlayer = 2;

private:
	int ShapeCount = 0;

};
