// Fill out your copyright notice in the Description page of Project Settings.

#include "Star.h"

AStar::AStar()
{
	// Starting point for star's projectiles
	FireComponent1 = CreateDefaultSubobject<UArrowComponent>(TEXT("Fire Point 1"));
	FireComponent2 = CreateDefaultSubobject<UArrowComponent>(TEXT("Fire Point 2"));
	FireComponent3 = CreateDefaultSubobject<UArrowComponent>(TEXT("Fire Point 3"));
	FireComponent1->SetRelativeLocation(FVector(31.f, 0.f, -25.f));
	FireComponent2->SetRelativeLocation(FVector(30.5f, 0.f, 5.f));
	FireComponent3->SetRelativeLocation(FVector(30.f, 0.f, 35.f));

	// Attaches the arrow components to the sprite for better animation handling
	FireComponent1->SetupAttachment(GetSprite());
	FireComponent2->SetupAttachment(GetSprite());
	FireComponent3->SetupAttachment(GetSprite());

}

void AStar::Attack_Implementation()
{
	if (!CoolDownActive && !InputDisabled) {
		InputDisabled = true;
		CoolDownActive = true;
		// Timers for both the attack delay and attack cool down
		FTimerHandle CoolDownTimer;
		FTimerHandle AttackTimer;
		GetWorld()->GetTimerManager().SetTimer(CoolDownTimer, this, &AStar::CoolDown, AttackCoolDown, false);
		GetWorld()->GetTimerManager().SetTimer(AttackTimer, this, &AStar::FireProjectile, AttackDelay, false);

	}
}

void AStar::SpecialMove_Implementation()
{
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, TEXT("Star Glide!"));
}

void AStar::BeginPlay()
{
	Super::BeginPlay();

	// Spawn the projectiles for pooling
	if (ProjectileClass) {
		// Spawn Params
		FActorSpawnParameters SpawnParams;
		SpawnParams.Instigator = this;

		// Get the direction the character is facing
		FRotator CurrentRotation = GetSprite()->GetComponentRotation();

		// Spawn and pool projectiles
		Projectile1 = GetWorld()->SpawnActor<AProjectile>(ProjectileClass, PoolProjectileLocation1, CurrentRotation, SpawnParams);
		Projectile2 = GetWorld()->SpawnActor<AProjectile>(ProjectileClass, PoolProjectileLocation2, CurrentRotation, SpawnParams);
		Projectile3 = GetWorld()->SpawnActor<AProjectile>(ProjectileClass, PoolProjectileLocation3, CurrentRotation, SpawnParams);

		// Assign the pool location for the projectiles
		Projectile1->PoolLocation = PoolProjectileLocation1;
		Projectile2->PoolLocation = PoolProjectileLocation2;
		Projectile3->PoolLocation = PoolProjectileLocation3;
	}
	else
		GEngine->AddOnScreenDebugMessage(-3, 3.f, FColor::Red, TEXT("Projectile class not set to anything in bp star"));

}

void AStar::CoolDown()
{
	Super::CoolDown();
}

void AStar::FireProjectile()
{
	// Checks the projectile if projectile exists/is valid
	if (ProjectileClass) {
		
		// Get the direction the character is facing
		FRotator CurrentRotation = GetSprite()->GetComponentRotation();
		Projectile1->SetActorRotation(CurrentRotation);
		Projectile2->SetActorRotation(CurrentRotation);
		Projectile3->SetActorRotation(CurrentRotation);

		// Attach projectile to arrow component
		Projectile1->SetActorLocation(FireComponent1->GetComponentLocation());
		Projectile2->SetActorLocation(FireComponent2->GetComponentLocation());
		Projectile3->SetActorLocation(FireComponent3->GetComponentLocation());

		// Launch projectile
		Projectile1->Fire(FacingRight);
		Projectile2->Fire(FacingRight);
		Projectile3->Fire(FacingRight);
	}
	else {
		GEngine->AddOnScreenDebugMessage(-2, 3.f, FColor::Red, TEXT("Could not spawn star projectiles.  Please make sure star projectile class is set inside the star bp"));
	}
}
