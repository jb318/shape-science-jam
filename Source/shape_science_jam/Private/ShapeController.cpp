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
			if (AttackAction) {
				Subsystem->BindAction(AttackAction, ETriggerEvent::Started, this, &AShapeController::Attack);
			}
			if (SpecialMoveAction) {
				Subsystem->BindAction(SpecialMoveAction, ETriggerEvent::Started, this, &AShapeController::SpecialMove);
			}
			if (ChangeShapeAction) {
				Subsystem->BindAction(ChangeShapeAction, ETriggerEvent::Started, this, &AShapeController::ChangeShape);
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
		ControlledPawn->AddMovementInput(ControlledPawn->GetActorForwardVector(), MovementDirection);
	}
}

void AShapeController::Attack(const FInputActionValue& value)
{
	// Perform validity checks of player and then call corresponding functions
	if (Player)
		Player->Attack();
}

void AShapeController::SpecialMove(const FInputActionValue& value)
{
	if (Player)
		Player->SpecialMove();
}

void AShapeController::ChangeShape(const FInputActionValue& value)
{
	if (Player) {
		// Add functionality for character switch 
		FVector PlayerLocation = Player->GetActorLocation();
		FRotator PlayerRotation = Player->GetActorRotation();
		Player->ChangeShape();
		
		// Trying to spawn a new instance of a shape class into the level and then possess it but 
		// NewPlayer is always nullptr for some reason
		AShape* NewPlayer = GetWorld()->SpawnActor<AShape>(ShapeClass, PlayerLocation, PlayerRotation);
		
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Purple, FString::Printf(TEXT("%s"), NewPlayer));
		
			
		/*if (NewPlayer)
			GEngine->AddOnScreenDebugMessage(1, 3.f, FColor::Black, FString::Printf(TEXT("Success")));
		else
			GEngine->AddOnScreenDebugMessage(1, 3.f, FColor::Red, FString::Printf(TEXT("Failed")));*/
	}
		
}
