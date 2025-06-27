// Fill out your copyright notice in the Description page of Project Settings.

#include "Square.h"
#include "GameFramework/CharacterMovementComponent.h"

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

}

void ASquare::OnOverlapProjectile(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (InAttackAnimation) {
		if (OtherActor) {
			if (AProjectile* IncomingProjectile = Cast<AProjectile>(OtherActor)) {
				FRotator ProjectileRotation = OtherActor->GetActorRotation();
				// Check if the projectile class is set to something and if so spawn and fire triangle bp
				if (ProjectileClass) {
					// Spawn Params
					FActorSpawnParameters SpawnParams;
					SpawnParams.Instigator = this;

					// change from spawning to object pooling
					//Projectile = GetWorld()->SpawnActor<AProjectile>(ProjectileClass, OtherActor->GetActorLocation(), FRotator(ProjectileRotation.Roll, ProjectileRotation.Pitch, (-1 * ProjectileRotation.Yaw)), SpawnParams);
					//Projectile->Fire();
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
