// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "Camera/CameraComponent.h"
#include "Shape.generated.h"

/**
 * 
 */
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

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Camera")
	UCameraComponent* CameraComponent;

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

	UFUNCTION(BlueprintNativeEvent, Category = "Shape Moves")
	void ChangeShape();
	virtual void ChangeShape_Implementation();
	
};
