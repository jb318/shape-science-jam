// Fill out your copyright notice in the Description page of Project Settings.

#include "Star.h"

AStar::AStar()
{
	// Starting point for star's projectiles
	FireComponent1 = CreateDefaultSubobject<UArrowComponent>(TEXT("Fire Point 1"));
	FireComponent2 = CreateDefaultSubobject<UArrowComponent>(TEXT("Fire Point 2"));
	FireComponent3 = CreateDefaultSubobject<UArrowComponent>(TEXT("Fire Point 3"));
	FireComponent1->SetRelativeLocation(FVector(45.f, 0.f, -25.f));
	FireComponent2->SetRelativeLocation(FVector(44.5f, 0.f, 5.f));
	FireComponent3->SetRelativeLocation(FVector(44.f, 0.f, 35.f));
	FireComponent1->SetupAttachment(RootComponent);
	FireComponent2->SetupAttachment(RootComponent);
	FireComponent3->SetupAttachment(RootComponent);

}

void AStar::Attack_Implementation()
{
	if (ProjectileClass) {
		// Spawn Params
		FActorSpawnParameters SpawnParams;
		SpawnParams.Instigator = this;

		// Get the direction the character is facing
		FRotator CurrentRotation = GetActorRotation();
		// change from spawning to object pooling
		Projectile1 = GetWorld()->SpawnActor<AProjectile>(ProjectileClass, FireComponent1->GetComponentLocation(), CurrentRotation, SpawnParams);
		Projectile2 = GetWorld()->SpawnActor<AProjectile>(ProjectileClass, FireComponent2->GetComponentLocation(), CurrentRotation, SpawnParams);
		Projectile3 = GetWorld()->SpawnActor<AProjectile>(ProjectileClass, FireComponent3->GetComponentLocation(), CurrentRotation, SpawnParams);
		Projectile1->Fire();
		Projectile2->Fire();
		Projectile3->Fire();
	}
	else {
		GEngine->AddOnScreenDebugMessage(-2, 3.f, FColor::Red, TEXT("Could not spawn star projectiles.  Please make sure star projectile class is set inside the star bp"));
	}
}

void AStar::SpecialMove_Implementation()
{
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, TEXT("Star Glide!"));
}
