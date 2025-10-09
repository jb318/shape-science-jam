// Fill out your copyright notice in the Description page of Project Settings.

#include "Square.h"
#include "GameFramework/CharacterMovementComponent.h"

ASquare::ASquare()
{
	// Physical Properties
	GetCharacterMovement()->MaxWalkSpeed = 500.0;
	GetCharacterMovement()->AirControl = 0.25;
	GetCharacterMovement()->GravityScale = 0.75;
	GetCharacterMovement()->FallingLateralFriction = 1.0;

	ShapeIndex = 1;
}

void ASquare::Attack_Implementation()
{
	Attack();
	if (!InputDisabled && !CoolDownActive) {
		// Disable input after attacking.  Enable it again after animation ends in blueprints
		InputDisabled = true;
		InAttackAnimation = true;
	}
}

void ASquare::SpecialMove_Implementation()
{
	Super::SpecialMove_Implementation();

	FTimerHandle SwitchGravityTimer;

	if (!InputDisabled)
		InputDisabled = true;
		GetWorld()->GetTimerManager().SetTimer(SwitchGravityTimer, this, &ASquare::SwitchGravity, SpecialMoveDelay, false);

}

void ASquare::BeginPlay()
{
	Super::BeginPlay();

	// Binds box component to projectile overlap event
	if (BoxComponent) {
		BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &ASquare::OnOverlapProjectile);
	}

	if (ProjectileClass) {
		FActorSpawnParameters SpawnParams;
		SpawnParams.Instigator = this;

		// Get the direction the character is facing
		FRotator CurrentRotation = GetSprite()->GetComponentRotation();

		// Spawns the projectiles into level
		Projectile1 = GetWorld()->SpawnActor<AProjectile>(ProjectileClass, PoolProjectileLocation1, CurrentRotation, SpawnParams);
		Projectile2 = GetWorld()->SpawnActor<AProjectile>(ProjectileClass, PoolProjectileLocation2, CurrentRotation, SpawnParams);

		// Assign the pool location for the projectiles
		Projectile1->PoolLocation = PoolProjectileLocation1;
		Projectile2->PoolLocation = PoolProjectileLocation2;
	}
	
	InputDisabled = false;
}

void ASquare::OnOverlapProjectile(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Might need to delete this function entirely
	if (InAttackAnimation) {
		if (OtherActor) {
			if (AProjectile* IncomingProjectile = Cast<AProjectile>(OtherActor)) {
				
				if (IncomingProjectile->IsReflectable) {
					bool FromRight = IncomingProjectile->FiredOnRightside;
	
					// Fires a reflect projectile back to the left side
					if (ProjectileClass && FromRight) {
						switch (ProjectileIndex) {
						case 0:
							Projectile1->SetActorLocation(FVector(GetActorLocation().X - ReflectOffset, 0.f, 0.f));
							// Adjust z rotation in second slot (yaw rotation)
							Projectile1->SetActorRotation(FRotator(0.f, 180.f, 0.f));
							Projectile1->Fire(false);
							ProjectileIndex++;
							break;
						case 1:
							Projectile2->SetActorLocation(FVector(GetActorLocation().X - ReflectOffset, 0.f, 0.f));
							// Adjust z rotation in second slot (yaw rotation)
							Projectile2->SetActorRotation(FRotator(0.f, 180.f, 0.f));
							Projectile2->Fire(false);
							ProjectileIndex = 0;
							break;
						default:
							GEngine->AddOnScreenDebugMessage(-5, 5.f, FColor::Red, FString::Printf(TEXT("%d"), ProjectileIndex));
							ProjectileIndex = 0;
							break;
						}
					}
					// Fires a reflect projectile back to the right side
					if (ProjectileClass && !FromRight) {
						switch (ProjectileIndex) {
						case 0:
							Projectile1->SetActorLocation(FVector(GetActorLocation().X + ReflectOffset, 0.f, 0.f));
							Projectile1->SetActorRotation(FRotator(0.f, 0.f, 0.f));
							Projectile1->Fire(true);
							
							ProjectileIndex++;
							break;
						case 1:
							Projectile2->SetActorLocation(FVector(GetActorLocation().X + ReflectOffset, 0.f, 0.f));
							Projectile2->SetActorRotation((FRotator(0.f, 0.f, 0.f)));
							Projectile2->Fire(true);
							ProjectileIndex = 0;
							break;
						default:
							ProjectileIndex = 0;
							break;
						}
					}
				}
			}
		}
	}
}

void ASquare::SwitchGravityRequest_Implementation()
{
	SwitchGravityMulticast();
}

void ASquare::SwitchGravityMulticast_Implementation()
{
	// Switch gravity on player
	if (!UsingAntiGravity) {
		GetCharacterMovement()->SetGravityDirection(GetActorUpVector());
		UsingAntiGravity = true;
		CanChangeShape = false;
		FVector TransformLocation = GetSprite()->GetRelativeLocation();
		TransformLocation.Z = 4.f;
		GetSprite()->SetRelativeLocation(TransformLocation);
		GetSprite()->SetWorldRotation(FRotator(0.f, 0.f, 180.f));
		
	}
	else {
		GetCharacterMovement()->SetGravityDirection(-1 * GetActorUpVector());
		UsingAntiGravity = false;
		CanChangeShape = true;
		FVector TransformLocation = GetSprite()->GetRelativeLocation();
		TransformLocation.Z = -4.f;
		GetSprite()->SetRelativeLocation(TransformLocation);
		GetSprite()->SetWorldRotation(FRotator(0.f, 0.f, 0.f));
	}
}

void ASquare::SwitchGravity()
{
	InputDisabled = false;
	if (HasAuthority()) {
		SwitchGravityMulticast();
	}
	else {
		SwitchGravityRequest();
	}
}
