// Fill out your copyright notice in the Description page of Project Settings.

#include "ShapeController.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "GameFramework/CharacterMovementComponent.h"

AShapeController::AShapeController()
{
	
}

void AShapeController::BeginPlay()
{
	Super::BeginPlay();

	if (GetPawn()) {
		GEngine->AddOnScreenDebugMessage(1, 7.f, FColor::Blue, TEXT("Game started with character blueprint set in game mode"));
		if (AShape* SpawnedShape = Cast<AShape>(GetPawn())) {
			for (int i = 0; i < sizeof(Shapes) / sizeof(Shapes[0]); i++) {
				if (i != SpawnedShape->ShapeIndex) {
					// Spawns the shape and pools it
					SpawnShape(i);
				}
				else {
					Shapes[i] = SpawnedShape;
					Player = Shapes[i];
					ShapeKey = Player->ShapeIndex;
				}
			}
		}
		else {
			GEngine->AddOnScreenDebugMessage(1, 7.f, FColor::Red, TEXT("Spawned character is not a member of the shape class"));
		}
		
	}
	else {
		
		// Spawns the different shape classes to object pool through
		for (int i = 0; i < sizeof(Shapes) / sizeof(Shapes[0]); i++) {
			SpawnShape(i);
			if (Shapes[i] && !Player) {
				Player = Shapes[i];
				Possess(Player);
				Player->SetActorLocation(PlayerSpawn);
			}	
		}
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
	// Setting variables on player widget
	HUD = Cast<AGameHUD>(UGameplayStatics::GetPlayerController(this, 0)->GetHUD());
	if (HUD) {
		HUD->CreatePlayerWidget();
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
			if (PauseMenuAction) {
				Subsystem->BindAction(PauseMenuAction, ETriggerEvent::Started, this, &AShapeController::OpenPauseMenu);
			}
			if (ShapeChangeSelectAction) {
				Subsystem->BindAction(ShapeChangeSelectAction, ETriggerEvent::Started, this, &AShapeController::ShapeChangeSelect);
			}
		}
	}
}

void AShapeController::RestoreHealth()
{
	for (int i = 0; i < sizeof(Shapes) / sizeof(Shapes[0]); i++) {
		Shapes[i]->ObjectiveCounter++;
		int j = Shapes[i]->ObjectiveCounter++;
	}
	if (HUD) {
		HUD->ToggleWidget();
		if (Player) {
			HUD->SetHealthPercent(Player->CurrentHealth, Player->MaxHealth);
		}
		
	}
}

void AShapeController::UpdateObjective()
{
	for (int i = 0; i < sizeof(Shapes) / sizeof(Shapes[0]); i++) {
		if (Shapes[i]) {
			Shapes[i]->ObjectiveCounter++;
		}
	}
	
}

void AShapeController::Move(const FInputActionValue& value)
{
	// Obtain the axis value of the movement input (1 or -1)
	float MovementDirection = value.Get<float>();
	if (Player) {
		// Checks if the player is locked from moving after getting hit
		if (!Player->CannotMove && !Player->InputDisabled)
			Player->AddMovementInput(Player->GetActorForwardVector(), MovementDirection);
		
	}
}

void AShapeController::Attack(const FInputActionValue& value)
{
	// Perform validity checks of player and then call corresponding functions
	if (Player && !Player->InputDisabled) {
		Player->Attack();
		Player->Attack_Implementation();
	}		
}

void AShapeController::SpecialMove(const FInputActionValue& value)
{
	if (Player && !Player->InputDisabled) {
		Player->SpecialMove();
		Player->SpecialMove_Implementation();
	}
	
	
}

void AShapeController::ChangeShape(int XValue, int YValue)
{
	if (Player) {
		// On shape switch, disable input and movement immediately and reapply in blueprints at the end of animation
		
		// Location and orientation of former shape for incoming shape to inherit
		FVector PlayerLocation = Player->GetActorLocation();
		FRotator PlayerRotation = Player->GetActorRotation();

		// pool the previous shape so it is out of view
		PoolShape(ShapeKey);

		// Switch the shape if X returned a value and update ShapeIndex to the one that corresponds with new shape
		switch (XValue) {
		case -1:
			if (Shapes[2]) {
				Shapes[2]->SetActorLocation(PlayerLocation);
				Shapes[2]->SetActorRotation(PlayerRotation);
				Possess(Shapes[2]);
				Player = Shapes[2];
				Player->ChangeShapeEnd();
				ShapeKey = 2;
			}
			break;
		case 1:
			if (Shapes[0]) {
				Shapes[0]->SetActorLocation(PlayerLocation);
				Shapes[0]->SetActorRotation(PlayerRotation);
				Possess(Shapes[0]);
				Player = Shapes[0];
				Player->ChangeShapeEnd();
				ShapeKey = 0;
			}
			break;
		default:
			break;
		}

		// Switch the shape if Y returned a value
		switch (YValue) {
		case -1:
			if (Shapes[3]) {
				Shapes[3]->SetActorLocation(PlayerLocation);
				Shapes[3]->SetActorRotation(PlayerRotation);
				Possess(Shapes[3]);
				Player = Shapes[3];
				Player->ChangeShapeEnd();
				ShapeKey = 3;
				
			}
			break;
		case 1:
			if (Shapes[1]) {
				Shapes[1]->SetActorLocation(PlayerLocation);
				Shapes[1]->SetActorRotation(PlayerRotation);
				Possess(Shapes[1]);
				Player = Shapes[1];
				Player->ChangeShapeEnd();
				ShapeKey = 1;
			}
			break;
		default:
			break;
		}
		for (int i = 0; i < sizeof(Shapes) / sizeof(Shapes[0]); i++) {
			if (i == Player->ShapeIndex) {
				if (HUD && Shapes[i]) {
					HUD->SetHealthPercent(Shapes[i]->CurrentHealth, Shapes[i]->MaxHealth);
				}
			}
		}

		// Prevent players from moving for a short time when changing shapes
		Player->InputDisabled = true;
		Player->CannotMove = true;

		// Can be punished immediately after changing shape however, prevents thoughtless spamming
		Player->Invincible = false;
	}
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

void AShapeController::ShapeChangeSelect(const FInputActionValue& value)
{
	// Get the two floats of the FVector2D
	FVector2D XYValue = value.Get<FVector2D>();
	int XValue = XYValue.X;
	int YValue = XYValue.Y;

	bool TargetShapeExists = false;
	if (Player) {
		// checks if target shape exists
		for (int i = 0; i < sizeof(Shapes) / sizeof(Shapes[0]); i++) {
			if (Shapes[i] && Shapes[i]->ShapeKey == XYValue) {
				TargetShapeExists = true;
			}
		}
		// Switch only to a different shape that exists
		if (Player->ShapeKey != XYValue && TargetShapeExists) {
			// Allows switch only when character is grounded and inputs are enabled
			if (!Player->InputDisabled && !Player->GetCharacterMovement()->IsFalling() && !Player->SpecialMoveClicked) {
				Player->Invincible = true;
				Player->InputDisabled = true;
				Player->CannotMove = true;
				// Start the shape change animation inside shape blueprints
				Player->ChangeShapeStart();

				// Set a timer for shape switch to begin
				FTimerDelegate ChangeShapeDelegate;
				FTimerHandle ChangeShapeTimer;
				ChangeShapeDelegate.BindUObject(this, &AShapeController::ChangeShape, XValue, YValue);
				GetWorld()->GetTimerManager().SetTimer(ChangeShapeTimer, ChangeShapeDelegate, 1.f, false);
			}
			else
				GEngine->AddOnScreenDebugMessage(1, 3.f, FColor::Red, FString::Printf(TEXT("Can't access player")));
		}
	}
}

void AShapeController::SpawnShape(int ShapeIndex)
{
	// Take the argument and spawn the shape if class is assigned in blueprint
	switch (ShapeIndex) {
	case 0:
		if (CircleClass)
			Shapes[0] = GetWorld()->SpawnActor<ACircle>(CircleClass, CircleSpawn, FRotator(0, 0, 0));
		break;
	case 1:
		if (SquareClass)
			Shapes[1] = GetWorld()->SpawnActor<ASquare>(SquareClass, SquareSpawn, FRotator(0, 0, 0));
		break;
	case 2:
		if (TriangleClass)
			Shapes[2] = GetWorld()->SpawnActor<ATriangle>(TriangleClass, TriangleSpawn, FRotator(0, 0, 0));
		break;
	case 3:
		if (StarClass)
			Shapes[3] = GetWorld()->SpawnActor<AStar>(StarClass, StarSpawn, FRotator(0, 0, 0));
		break;
	default: 
		break;
	}
	
}

void AShapeController::PoolShape(int index)
{
	if (Shapes[index])
		Shapes[index]->SetActorLocation(ShapeSpawnPoints[index]);
}
