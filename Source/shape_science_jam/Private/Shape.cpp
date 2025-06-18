// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/CapsuleComponent.h"
#include "Shape.h"

AShape::AShape()
{
	// Sets the properties for player camera
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComponent->SetupAttachment(RootComponent);
	CameraComponent->SetRelativeLocation(FVector(0.f, 100.f, 0.f));
	CameraComponent->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.f));
	CameraComponent->SetRelativeScale3D(FVector(0.2f, 0.2f, 0.2f));

	// Sets the capsule size
	GetCapsuleComponent()->SetCapsuleSize(8.f, 12.f);
}

void AShape::BeginPlay()
{
	Super::BeginPlay();
	
}

void AShape::Attack()
{
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Cyan, FString::Printf(TEXT("Attack")));
}

void AShape::SpecialMove()
{
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Red, FString::Printf(TEXT("SpecialMove")));
}

void AShape::ChangeShape()
{
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::White, FString::Printf(TEXT("Shape Change")));
	Destroy();

}
