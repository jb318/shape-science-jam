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

};
