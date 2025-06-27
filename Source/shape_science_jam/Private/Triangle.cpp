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

void ATriangle::CoolDown()
{
	Super::CoolDown();
}

void ATriangle::FireProjectile()
{
	if (ProjectileClass) {
		// Spawn Params
		FActorSpawnParameters SpawnParams;
		SpawnParams.Instigator = this;

		// Get the direction the character is facing
		FRotator CurrentRotation = GetSprite()->GetComponentRotation();
		// change from spawning to object pooling
		Projectile = GetWorld()->SpawnActor<AProjectile>(ProjectileClass, FireComponent->GetComponentLocation(), CurrentRotation, SpawnParams);
		Projectile->Fire(FacingRight);
	}
	else {
		GEngine->AddOnScreenDebugMessage(-2, 3.f, FColor::Red, TEXT("Could not spawn triangle projectile.  Please make sure triangle projectile class is set inside the triange bp"));
	}
}
