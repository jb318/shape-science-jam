// Fill out your copyright notice in the Description page of Project Settings.

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "ShapeController.h"

AShapeController::AShapeController()
{
}

void AShapeController::BeginPlay()
{
	Super::BeginPlay();

	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 4.f, FColor::Green, FString::Printf(TEXT("Game Start")));
	}

	Player = Cast<AShape>(GetCharacter());

	if (AShapeController* PC = Cast<AShapeController>(this)) {

		// Enables possessed character to access the controllers Input Mapping Context and Inputs and use them in game

		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer())) {

			// *These conditional checks are extremely important when developing, basically making it so that the game isn't trying to accesss NULL pointers at any point (which will typically cause the editor and game to crash!)*
			if (PlayerInputContext) {
				Subsystem->AddMappingContext(PlayerInputContext, 0);
			}
		}
	}
}

void AShapeController::SetupInputComponent()
{
	Super::SetupInputComponent();

	// Binds the input functions to the keys they are assigned inside the mapping context in UE5
	if (AShapeController* PC = Cast<AShapeController>(this)) {
		if (UEnhancedInputComponent* Subsystem = Cast<UEnhancedInputComponent>(InputComponent)) {
			if (MoveAction) {
				Subsystem->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AShapeController::Move);
			}
		}
	}
}

void AShapeController::Move(const FInputActionValue& value)
{
	// Obtain the axis value of the movement input (1 or -1)
	float MovementDirection = value.Get<float>();
	if (APawn* ControlledPawn = GetPawn()) {
		/*FVector RightDirection = ControlledPawn->GetActorRightVector();*/
		ControlledPawn->AddMovementInput(FVector(1.f, 0.f, 0.f), MovementDirection);
	}
}
