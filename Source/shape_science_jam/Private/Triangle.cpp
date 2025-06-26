// Fill out your copyright notice in the Description page of Project Settings.

#include "Triangle.h"

ATriangle::ATriangle()
{
	// Starting point for triangle's projectiles
	FireComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("Fire Point"));
	FireComponent->SetupAttachment(RootComponent);
	FireComponent->SetRelativeLocation(FVector(40.f, 0.f, 0.f));
}

void ATriangle::Attack_Implementation()
{
	if (ProjectileClass) {
		// Spawn Params
		FActorSpawnParameters SpawnParams;
		SpawnParams.Instigator = this;

		// Get the direction the character is facing
		FRotator CurrentRotation = GetActorRotation();
		// change from spawning to object pooling
		Projectile = GetWorld()->SpawnActor<AProjectile>(ProjectileClass, FireComponent->GetComponentLocation(), CurrentRotation, SpawnParams);
		Projectile->Fire();
	}
	else {
		GEngine->AddOnScreenDebugMessage(-2, 3.f, FColor::Red, TEXT("Could not spawn triangle projectile.  Please make sure triangle projectile class is set inside the triange bp"));
	}
}

void ATriangle::SpecialMove_Implementation()
{
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, TEXT("Triangle Destroy!"));
}