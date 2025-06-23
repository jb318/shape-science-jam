// Fill out your copyright notice in the Description page of Project Settings.

#include "Shape.h"
#include "Components/CapsuleComponent.h"
#include "CombatInterface.h"

AShape::AShape()
{
	// Sets the properties for player camera
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComponent->SetupAttachment(RootComponent);
	CameraComponent->SetRelativeLocation(FVector(0.f, 200, 0.f));
	CameraComponent->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.f));
	CameraComponent->SetRelativeScale3D(FVector(0.2f, 0.2f, 0.2f));

	// Sets the capsule size
	GetCapsuleComponent()->SetCapsuleSize(34.f, 34.f);
	
	// Box component
	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
}

void AShape::BeginPlay()
{
	Super::BeginPlay();
	
	CurrentExperience = 0;

	if (ShapeDT) {
		// Get the corresponding row you want the shape's level to be
		RowNames = ShapeDT->GetRowNames();
		if (RowNames.IsValidIndex(ShapeLevelIndex)) {
			
			row = ShapeDT->FindRow<FShapeLevelData>(RowNames[ShapeLevelIndex], "");
			if (row) {
				/*GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Purple, FString::Printf(TEXT("%f Experience"), CurrentExperience));*/
				CurrentHealth = row->MaxHealth;
				GEngine->AddOnScreenDebugMessage(2, 2.f, FColor::Purple, FString::Printf(TEXT("You are at level: %d\nCurrent hp is: %.0f\nExperience: %.0f\n%.0f more experience until next level"), row->Level, CurrentHealth, CurrentExperience, row->MaxExperience));
			}
			else {
				GEngine->AddOnScreenDebugMessage(0, 2.f, FColor::Red, FString::Printf(TEXT("Could not find what level you are at.  Try setting the Shape Level Data values inside your shapes Details Panel")));
			}
		}
		
	}	
	else {
		GEngine->AddOnScreenDebugMessage(0, 2.f, FColor::Red, FString::Printf(TEXT("Data table not set")));
	}

	// Binds OnOverlapBegin function to the BoxComponent and is to be handled by the OnComponentOverlapBeegin delegate
	// Done in BeginPlay instead since it causes the engine to crash when writen in constructor
	if (BoxComponent) {
		BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &AShape::OnOverlapBegin);
		GEngine->AddOnScreenDebugMessage(0, 2.f, FColor::Red, FString::Printf(TEXT("Box overlap event set")));
	}
}

void AShape::Attack_Implementation()
{
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Cyan, FString::Printf(TEXT("Attack")));
}

void AShape::SpecialMove_Implementation()
{
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Red, FString::Printf(TEXT("SpecialMove")));
}

void AShape::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	GEngine->AddOnScreenDebugMessage(0, 2.f, FColor::Red, FString::Printf(TEXT("Overlap Called")));
	// Obtain the reference to the item that implements interact interface
	if (OtherActor) {
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, FString::Printf(TEXT("Overlapped Actor: %s"), *OtherActor->GetName()));
		if (IInteractInterface* Interface = Cast<IInteractInterface>(OtherActor)) {
			Interface->Interact();
		}
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, FString::Printf(TEXT("Did not overlap member of AActor")));
	}
}

void AShape::LevelUp()
{
	// Sets players hp to max at next level, increases level, and properly subtracts experience from current level
	// This function should not be called by the AI
	ShapeLevelIndex++;
	if (ShapeLevelIndex < RowNames.Num()) {
		// Doing multiple validity checks to ensure the engine crashes under no circumstances
		if (row) {
			CurrentExperience -= row->MaxExperience;
		}
		row = ShapeDT->FindRow<FShapeLevelData>(RowNames[ShapeLevelIndex], "");
		if (row) {
			CurrentHealth = row->MaxHealth;
			GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, FString::Printf(TEXT("Congrats you have just leveled up!  Your new max health is: %f"), CurrentHealth));
		}
	}
}

float AShape::SetHealth(float amount)
{
	// amount can be a positive value such as when interacted with health pickup or negative when receiving damage
	CurrentHealth += amount;
	return CurrentHealth;
}



