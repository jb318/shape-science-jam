// Fill out your copyright notice in the Description page of Project Settings.

#include "Triangle.h"

ATriangle::ATriangle()
{
	// Starting point for triangle's projectiles
	FireComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("Fire Point"));
	FireComponent->SetupAttachment(GetSprite());
	FireComponent->SetRelativeLocation(FVector(45.f, 0.f, 0.f));
}

void ATriangle::Attack_Implementation()
{
	if (!CoolDownActive) {
		CoolDownActive = true;
		// Timers for both the attack delay and attack cool down
		FTimerHandle CoolDownTimer;
		FTimerHandle AttackTimer;
		GetWorld()->GetTimerManager().SetTimer(CoolDownTimer, this, &ATriangle::CoolDown, AttackCoolDown, false);
		GetWorld()->GetTimerManager().SetTimer(AttackTimer, this, &ATriangle::FireProjectile, AttackDelay, false);

	}
	
}

void ATriangle::SpecialMove_Implementation()
{
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, TEXT("Triangle Destroy!"));
}

void ATriangle::BeginPlay()
{
	Super::BeginPlay();

	// Spawn the projectile in 
	if (ProjectileClass) {
		FActorSpawnParameters SpawnParams;
		SpawnParams.Instigator = this;

		// Get the direction the character is facing
		FRotator CurrentRotation = GetSprite()->GetComponentRotation();
		
		// Spawns the projectiles into level
		Projectile1 = GetWorld()->SpawnActor<AProjectile>(ProjectileClass, PoolProjectileLocation1, CurrentRotation, SpawnParams);
		Projectile2 = GetWorld()->SpawnActor<AProjectile>(ProjectileClass, PoolProjectileLocation2, CurrentRotation, SpawnParams);

		// Sets the necessary properties of and pool locations for the projectiles
		Projectile1->PoolLocation = PoolProjectileLocation1;
		Projectile2->PoolLocation = PoolProjectileLocation2;

		Projectile1->IsReflectable = true;
		Projectile2->IsReflectable = true;
	}
}


void ATriangle::CoolDown()
{
	Super::CoolDown();
}

void ATriangle::FireProjectile()
{
	if (FacingRight) {
		if (Projectile1 && Projectile2) {
			Projectile1->FiredOnRightside = true;
			Projectile2->FiredOnRightside = true;
		}
	}
	else {
		if (Projectile1 && Projectile2) {
			Projectile1->FiredOnRightside = false;
			Projectile2->FiredOnRightside = false;
		}
	}
	if (ProjectileClass) {
		// Get the direction the character is facing
		FRotator CurrentRotation = GetSprite()->GetComponentRotation();

		// Control the attaching and firing of the different projectile instances that were spawned on begin play
		switch (ProjectileIndex) {
		case 0:
			Projectile1->SetActorRotation(CurrentRotation);
			Projectile1->SetActorLocation(FireComponent->GetComponentLocation());
			Projectile1->Fire(FacingRight);
			ProjectileIndex++;
			break;
		case 1: 
			Projectile2->SetActorRotation(CurrentRotation);
			Projectile2->SetActorLocation(FireComponent->GetComponentLocation());
			Projectile2->Fire(FacingRight);
			ProjectileIndex = 0;
			break;
		default:
			GEngine->AddOnScreenDebugMessage(-5, 5.f, FColor::Red, TEXT("Projectile index in triangle class is not within the correct set of integers 0-2"));
			ProjectileIndex = 0;
			break;
		}
	}
	else {
		GEngine->AddOnScreenDebugMessage(-2, 3.f, FColor::Red, TEXT("Could not spawn triangle projectile.  Please make sure triangle projectile class is set inside the triange bp"));
	}
}
