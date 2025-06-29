// Fill out your copyright notice in the Description page of Project Settings.

#include "Square.h"
#include "GameFramework/CharacterMovementComponent.h"

void ASquare::Attack_Implementation()
{
	GEngine->AddOnScreenDebugMessage(-5, 5.f, FColor::Red, TEXT("2 Attack or not"));
}

void ASquare::SpecialMove_Implementation()
{
	// Call switch gravity with the user defined delay
	FTimerHandle SwitchGravityTimer;
	// Check if player is in attack animation
	if (!InAttackAnimation) 
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
}

void ASquare::OnOverlapProjectile(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
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

void ASquare::SwitchGravity()
{
	
	// Switch gravity on player
	if (!UsingAntiGravity) {
		GetCharacterMovement()->SetGravityDirection(GetActorUpVector());
		UsingAntiGravity = true;
		CanChangeShape = false;
	}
	else {
		GetCharacterMovement()->SetGravityDirection(-1 * GetActorUpVector());
		UsingAntiGravity = false;
		CanChangeShape = true;
	}
}
