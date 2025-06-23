// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/BoxComponent.h"
#include "InteractInterface.h"
#include "Projectile.h"
#include "Shape.generated.h"

/**
 * 
 */

USTRUCT()
struct FShapeLevelData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Shape Stats")
	int Level;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Shape Stats")
	float MaxHealth;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Shape Stats")
	float MaxExperience;

};

UCLASS()
class SHAPE_SCIENCE_JAM_API AShape : public APaperCharacter
{
	GENERATED_BODY()
	
public: 
	// Sets default values for this character's properties
	AShape();

protected: 
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Data table reference
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Shape Level Data")
	UDataTable* ShapeDT;

	// Individual row from the data table reference
	FShapeLevelData* row;

	// Level of the shape, change the starting level in editor
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Shape Level Data")
	int ShapeLevelIndex = 0;

	// Array of the rows inside datatable
	TArray<FName> RowNames;

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UCameraComponent* CameraComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UBoxComponent* BoxComponent;

	// Functions for player and AI controller to call
	// The first is for the childs to base class and derived classes to use inside the UE5 editor
	// and should only be declared in base class! Also, do not create definition in the cpp file 
	// The second function is for the cpp functionality of the function and should be overriden 
	// in derived classes
	UFUNCTION(BlueprintNativeEvent, Category = "Shape Moves")
	void Attack();
	virtual void Attack_Implementation();

	UFUNCTION(BlueprintNativeEvent, Category = "Shape Moves")
	void SpecialMove();
	virtual void SpecialMove_Implementation();

	/*UFUNCTION(BlueprintNativeEvent, Category = "Shape Moves")
	void ChangeShape();
	virtual void ChangeShape_Implementation();*/

	// On overlap with actors that implement interact interface
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// Name of the item that was overlapped
	FName* ItemName;

	// Functions to be called in conjunction with interfaces
	void LevelUp();
	float SetHealth(float amount);

private:
	// The actual values of stats
	float CurrentHealth;
	float CurrentExperience;

};
