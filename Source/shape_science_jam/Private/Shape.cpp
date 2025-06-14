// Fill out your copyright notice in the Description page of Project Settings.


#include "Shape.h"

AShape::AShape()
{
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComponent->SetupAttachment(RootComponent);
	CameraComponent->SetRelativeLocation(FVector(0.0f, -100.0f, 0.0f));
	/*CameraComponent->SetRelativeRotation(FVector(0.0f, 0.0f, 90.f));*/
}

void AShape::BeginPlay()
{
}
