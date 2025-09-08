// Fill out your copyright notice in the Description page of Project Settings.

#include "ShapeController.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Net/UnrealNetwork.h" // Required for replication macros
#include "GameFramework/CharacterMovementComponent.h"

AShapeController::AShapeController()
{

}

void AShapeController::BeginPlay()
{
	Super::BeginPlay();

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

// DO NOT DELETE: Ensures replication and local use of accessible shapes array
void AShapeController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AShapeController, AccessibleShapes);

}

void AShapeController::PossessRequest_Implementation(AShapeController* LocalShapeController, int ShapeKeyX, int ShapeKeyY, bool AllowedSwitch)
{
	// Have the server control possess requests
	// Switch only to a different shape that exists
	if (AShape* ControlledShape = Cast<AShape>(GetPawn())) {

		if (ControlledShape->ShapeKey != FVector2d(ShapeKeyX, ShapeKeyY) && AllowedSwitch) {
			if (!ControlledShape->InputDisabled && !ControlledShape->GetCharacterMovement()->IsFalling() && !ControlledShape->SpecialMoveClicked && ControlledShape->CanChangeShape) {
				ControlledShape->Invincible = true;
				ControlledShape->InputDisabled = true;
				ControlledShape->CannotMove = true;

				// Delay in the time it takes to assign player on switch so there is no desync
				float AssignShapeDelay = 1.f;
				if (!IsLocalController())
					AssignShapeDelay = 1.0125f;

				ControlledShape->ShapeAbilityComponent->TransformOutAnimationCall();

				FTimerDelegate PoolShapeDelegate;
				FTimerHandle PoolShapeTimer;
				PoolShapeDelegate.BindUObject(this, &AShapeController::PoolShape, ShapeKey);
				GetWorld()->GetTimerManager().SetTimer(PoolShapeTimer, PoolShapeDelegate, 1.0f, false);

				FVector PlayerLocation = ControlledShape->GetActorLocation();
				FRotator PlayerRotation = ControlledShape->GetActorRotation();

				// Adds miniscule delay for shape teleport in so it doesn't cause collision
				FTimerDelegate ChangeShapeDelegate;
				FTimerHandle ChangeShapeTimer;
				ChangeShapeDelegate.BindUObject(this, &AShapeController::ChangeShape, ShapeKeyX, ShapeKeyY, PlayerLocation, PlayerRotation, LocalShapeController);
				GetWorld()->GetTimerManager().SetTimer(ChangeShapeTimer, ChangeShapeDelegate, AssignShapeDelay, false);
			}
		}
		else
			GEngine->AddOnScreenDebugMessage(1, 3.f, FColor::Red, FString::Printf(TEXT("Can't access player, %d %d %d"), ShapeKeyX, ShapeKeyY, AllowedSwitch));
	}
}


bool AShapeController::PossessRequest_Validate(AShapeController* LocalShapeController, int ShapeKeyX, int ShapeKeyY, bool AllowedSwitch)
{
	if (LocalShapeController)
		return true;

	return false;
}

void AShapeController::PoolShape(int index)
{
	// Push controlled shape out on change after a second
	if (AccessibleShapes[index]) {
		if (IsLocalController() && AccessibleShapes[index]->ShapeAbilityComponent)
			AccessibleShapes[index]->ShapeAbilityComponent->TransformActor(ShapePoolPoints[index]);
		else if (!IsLocalController()) {
			AccessibleShapes[index]->SetActorLocation(ShapePoolPoints[index]);
		}
		else {
			GEngine->AddOnScreenDebugMessage(0, 3.f, FColor::Red, TEXT("Transform Actor Component not set"));
		}
	}
	else {
		GEngine->AddOnScreenDebugMessage(0, 3.f, FColor::Red, TEXT("No valid shape to transform too"));
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
	for (int i = 0; i < sizeof(AccessibleShapes) / sizeof(AccessibleShapes[0]); i++) {
		if (AccessibleShapes[i]) {
			AccessibleShapes[i]->ObjectiveCounter++;
			int j = AccessibleShapes[i]->ObjectiveCounter++;
		}
	}
	if (HUD) {
		HUD->ToggleWidget();
		if (Player) {
			HUD->UpdateHealthDisplay(Player->CurrentHealth, Player->MaxHealth);
		}

	}
}

void AShapeController::UpdateObjective()
{
	for (int i = 0; i < sizeof(AccessibleShapes) / sizeof(AccessibleShapes[0]); i++) {
		if (AccessibleShapes[i]) {
			AccessibleShapes[i]->ObjectiveCounter++;
		}
	}

}

void AShapeController::AssignPlayer(int ShapeIndex, FVector Location, FRotator Rotation)
{
	if (AccessibleShapes[ShapeIndex] && AccessibleShapes[ShapeIndex]->ShapeAbilityComponent) {
		// Possess and set player variable to the appropriate shape
		Possess(AccessibleShapes[ShapeIndex]);
		Player = AccessibleShapes[ShapeIndex];

		AccessibleShapes[ShapeIndex]->ShapeAbilityComponent->TransformActor(Location, Rotation);

		ShapeKey = ShapeIndex;
	}
	else {
		if (!AccessibleShapes[ShapeIndex])
			GEngine->AddOnScreenDebugMessage(0, 3.f, FColor::Red, TEXT("No valid shape to transform too"));
		else
			GEngine->AddOnScreenDebugMessage(0, 3.f, FColor::Red, TEXT("Transform Component not in shapes constructor"));
	}
}

void AShapeController::Move(const FInputActionValue& value)
{
	// Obtain the axis value of the movement input (1 or -1)
	float MovementDirection = value.Get<float>();

	if (AShape* ControlledShape = Cast<AShape>(GetPawn())) {
		if (!ControlledShape->CannotMove && !ControlledShape->InputDisabled) {
			ControlledShape->AddMovementInput(ControlledShape->GetActorForwardVector(), MovementDirection);
		}
	}
}

void AShapeController::Attack(const FInputActionValue& value)
{
	if (AShape* ControlledShape = Cast<AShape>(GetPawn())) {
		if (!ControlledShape->InputDisabled) {
			ControlledShape->Attack_Implementation();
		}
	}
}

void AShapeController::SpecialMove(const FInputActionValue& value)
{
	if (AShape* ControlledShape = Cast<AShape>(GetPawn())) {
		if (!ControlledShape->InputDisabled) {
			ControlledShape->SpecialMove_Implementation();
		}
	}
}

void AShapeController::ChangeShape(int XValue, int YValue, FVector PlayerLocation, FRotator PlayerRotation, AShapeController* LocalShapeController)
{
	// Doing all of these casts since Player variable does not validate on client controllers in network multiplayer
	if (AShape* ControlledShape = Cast<AShape>(GetPawn())) {
		// Switch the shape if X returned a value and update ShapeIndex to the one that corresponds with new shape
		switch (XValue) {
		case -1:
			if (AccessibleShapes[3]) {
				AssignPlayer(3, PlayerLocation, PlayerRotation);
			}
			break;
		case 1:
			if (AccessibleShapes[0]) {
				AssignPlayer(0, PlayerLocation, PlayerRotation);
			}
			break;
		default:
			break;
		}

		// Switch the shape if Y returned a value
		switch (YValue) {
		case -1:
			if (AccessibleShapes[1]) {
				AssignPlayer(1, PlayerLocation, PlayerRotation);
			}
			break;
		case 1:
			if (AccessibleShapes[2]) {
				AssignPlayer(2, PlayerLocation, PlayerRotation);
			}
			break;
		default:
			break;
		}
		Player->ShapeAbilityComponent->TransformInAnimationCall();
		if (HUD)
			HUD->UpdateHealthDisplay(Player->CurrentHealth, Player->MaxHealth, Player->ShapeIndex);

		ControlledShape->InputDisabled = true;
		ControlledShape->CannotMove = true;
		ControlledShape->Invincible = false;
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

	if (AShape* ControlledShape = Cast<AShape>(GetPawn())) {
		// checks if target shape exists
		for (int i = 0; i < sizeof(AccessibleShapes) / sizeof(AccessibleShapes[0]); i++) {
			if (AccessibleShapes[i] && AccessibleShapes[i]->ShapeKey == XYValue) {
				GEngine->AddOnScreenDebugMessage(i + 5, 1.f, FColor::Yellow, TEXT("True"));
				TargetShapeExists = true;
			}
		}
		// Make a request to the server to possess target shape
		PossessRequest(this, XValue, YValue, TargetShapeExists);

	}

}

void AShapeController::SpawnShapes(int FirstShapeIndex, int LastShapeIndex, AShapeController* LocalShapeController)
{
	if (HasAuthority()) {
		for (int i = FirstShapeIndex; i <= LastShapeIndex; i++) {
			// GEngine->AddOnScreenDebugMessage(i + 5, 1.f, FColor::Yellow, TEXT("SPawning"));
			// Take the argument and spawn the shape if class is assigned in blueprint
			switch (i) {
			case 0:
				if (CircleClass)
					LocalShapeController->AccessibleShapes[i] = GetWorld()->SpawnActor<ACircle>(CircleClass, CirclePoolLocation, FRotator(0, 0, 0));
				break;
			case 1:
				if (StarClass)
					LocalShapeController->AccessibleShapes[i] = GetWorld()->SpawnActor<AStar>(StarClass, StarPoolLocation, FRotator(0, 0, 0));
				break;
			case 2:
				if (SquareClass)
					LocalShapeController->AccessibleShapes[i] = GetWorld()->SpawnActor<ASquare>(SquareClass, SquarePoolLocation, FRotator(0, 0, 0));
				break;
			case 3:
				if (TriangleClass)
					LocalShapeController->AccessibleShapes[i] = GetWorld()->SpawnActor<ATriangle>(TriangleClass, TrianglePoolLocation, FRotator(0, 0, 0));
				break;
			default:
				break;
			}
		}
	}
}
