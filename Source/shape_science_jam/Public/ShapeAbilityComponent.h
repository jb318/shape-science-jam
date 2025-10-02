// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ShapeAbilityComponent.generated.h"


UCLASS(Blueprintable, BlueprintType, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class SHAPE_SCIENCE_JAM_API UShapeAbilityComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UShapeAbilityComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Adjusts the transforms of the components owner
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "RPC")
	void TransformActor(FVector Location = FVector(0.f, 0.f, 0.f), FRotator Rotation = FRotator(0.f, 0.f, 0.f), FVector Scale = FVector(1.f, 1.f, 1.f));

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "RPC")
	void SpecialMoveAnimationCall();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "RPC")
	void DamageAnimationCall();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "RPC")
	void TransformInAnimationCall();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "RPC")
	void TransformOutAnimationCall();

	// Helper funcitons
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "RPC")
	void PlayAnimation(UPaperFlipbook* FlipbookAnimation);
	
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "RPC")
	void RotateShapeToMovement(FRotator Rotation = FRotator(0.f, 0.f, 0.f));

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void DirectInteract();
};
