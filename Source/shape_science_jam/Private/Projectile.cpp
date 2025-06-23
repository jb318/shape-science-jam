// Fill out your copyright notice in the Description page of Project Settings.

#include "Projectile.h"

// Sets default values
AProjectile::AProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// Projectile movement component and properties
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement"));
	ProjectileMovement->InitialSpeed = 400.f; 
	ProjectileMovement->MaxSpeed = 400.f;
	ProjectileMovement->ProjectileGravityScale = 0.f;
}

// Called when the game starts or when spawned
void AProjectile::BeginPlay()
{
	Super::BeginPlay();
	
	// Destroy later as we don't need em
}

// Called every frame
void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProjectile::SetProjectileSpeed()
{
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Black, TEXT("Set Projectile Speed Called"));
	ProjectileMovement->InitialSpeed = 0.f;
	ProjectileMovement->MaxSpeed = 0.f;
	// change to pool
	Destroy();
}

void AProjectile::Fire()
{
	ProjectileMovement->InitialSpeed = 2000000.f;
	ProjectileMovement->MaxSpeed = 2000000.f;
	FTimerHandle LaunchTimer;
	GetWorld()->GetTimerManager().SetTimer(LaunchTimer, this, &AProjectile::SetProjectileSpeed, 1.f, false);
	
}

void AProjectile::PoolProjectile()
{
}

