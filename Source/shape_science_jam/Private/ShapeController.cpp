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

	// Spawns the different shape classes to object pool through
	// Need to set the shape class template inside the details panel of player controller bp

	if (CircleClass) 
		Circle = GetWorld()->SpawnActor<ACircle>(CircleClass, FVector(-100, 0, 25), FRotator(0, 0, 0));

	if (SquareClass)
		Square = GetWorld()->SpawnActor<ASquare>(SquareClass, FVector(0, 0, 10), FRotator(0, 0, 0));
	
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 4.f, FColor::Green, FString::Printf(TEXT("Game Start")));

	// No longer needed since we are removing default pawn class from game mode
	// and possessing one of the spawned shapes but leaving here if needed later
	/*Player = Cast<AShape>(GetCharacter());*/

	// Possess shape on begin play
	if (Circle) {
		Possess(Circle);
		// Assign the player class to whatever is possessed so we can call access member variables
		// and functions using the Shape class
		Player = Circle;
	}
	
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
			if (PauseMenuAction) {
				Subsystem->BindAction(PauseMenuAction, ETriggerEvent::Started, this, &AShapeController::OpenPauseMenu);
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
	if (Player) {
		Player->Attack();
		Player->Attack_Implementation();
	}		
}

void AShapeController::SpecialMove(const FInputActionValue& value)
{
	if (Player) {
		Player->SpecialMove();
		Player->SpecialMove_Implementation();
	}
		
	
}

void AShapeController::ChangeShape(const FInputActionValue& value)
{
	// Add functionality for character switch
	if (Player) {

		// purely for testing, delete later
		Player->LevelUp();

		// Location and orientation of former shape for incoming shape to inherit
		FVector PlayerLocation = Player->GetActorLocation();
		FRotator PlayerRotation = Player->GetActorRotation();
		
		// Switch the shape depending on the index accessed
		switch(ShapeIndex) {
		case 0:
			Possess(Square);
			Player = Square;
			ShapeIndex = 1;
			break;
		case 1:
			Possess(Circle);
			Player = Circle;
			ShapeIndex = 0;
			break;
		default:
			break;
		}
	}
	else
		GEngine->AddOnScreenDebugMessage(1, 3.f, FColor::Red, FString::Printf(TEXT("Can't access player")));
		
}

void AShapeController::OpenPauseMenu(const FInputActionValue& value)
{
	if (PauseMenuClass) {
		// Swap between opening and closing pause menu
		// another conditional check for if the player can pause might be needed
		if (PauseMenu) {
			PauseMenu->RemoveFromParent();	
			PauseMenu = NULL;
		}
		else {
			PauseMenu = CreateWidget<UUserWidget>(GetWorld(), PauseMenuClass);
			PauseMenu->AddToViewport();
		}	
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Red, FString::Printf(TEXT("Pause widget class not set in player controller")));
	}
}
