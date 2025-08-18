// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TransformComponent.generated.h"


UCLASS(Blueprintable, BlueprintType, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SHAPE_SCIENCE_JAM_API UTransformComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTransformComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Adjusts the transforms of the components owner
	UFUNCTION(BlueprintImplementableEvent, Category = "Transform")
	void TransformActor(FVector Location = FVector(0.f, 0.f, 0.f), FRotator Rotation = FRotator(0.f, 0.f, 0.f), FVector Scale = FVector(1.f, 1.f, 1.f));
};
