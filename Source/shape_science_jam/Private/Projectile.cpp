// Fill out your copyright notice in the Description page of Project Settings.

#include "Projectile.h"
#include "CombatInterface.h"

// Sets default values
AProjectile::AProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// Projectile movement component and other properties
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement"));
	ProjectileMovement->InitialSpeed = 600.f; 
	ProjectileMovement->MaxSpeed = 1200.f;
	ProjectileMovement->ProjectileGravityScale = 0.f;

	Flipbook = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("Projectile Flipbook"));
	Flipbook->SetupAttachment(RootComponent);
	
	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Damage Box"));
	BoxComponent->SetupAttachment(Flipbook);
	BoxComponent->SetGenerateOverlapEvents(true);
}

// Called when the game starts or when spawned
void AProjectile::BeginPlay()
{
	Super::BeginPlay();
	
	// Binds overlap event to box component
	BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &AProjectile::OnProjectileOverlap);

	// Set the velocity to 0
	ProjectileMovement->Velocity = FVector(0.f, 0.f, 0.f);

}

void AProjectile::OnProjectileOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor != GetInstigator()) {
		// Filters overlapped Actors with those that implement combat interface
		if (ICombatInterface* CombatInterface = Cast<ICombatInterface>(OtherActor)) {
			CombatInterface->DamageCharacter(ProjectileDamage, true);
			CombatInterface->HitReaction(ProjectileKnockbackForce);
			// If projectile should pool on hit then pool it and set speed to 0
			if (PoolOnHit) {
				SetActorLocation(PoolLocation);
				ProjectileMovement->Velocity = FVector(0.f, 0.f, 0.f);
			}
		}
		// If the projectile overlaps with another projectile that is destructable unlike itself, pool the hit projectile
		if (AProjectile* OtherProjectile = Cast<AProjectile>(OtherActor)) {
			if (OtherProjectile->IsDestructable && !IsDestructable) {
				OtherProjectile->SetActorLocation(OtherProjectile->PoolLocation);
			}
		}
	}
}

// Called every frame
void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProjectile::Fire(bool FacingRight)
{
	// Enable rotation of the projectile
	CanRotate = true;
	if (FacingRight) {
		FiredOnRightside = true;
		// Sets a timer for that controls how long projectile lasts in level
		FTimerHandle LaunchTimer;
		ProjectileMovement->Velocity = FVector(ProjectileMovement->InitialSpeed, 0.f, 0.f);
		GetWorld()->GetTimerManager().SetTimer(LaunchTimer, this, &AProjectile::PoolProjectile, ProjectileDuration, false);
	}
	else {
		FiredOnRightside = false;
		// Sets a timer for that controls how long projectile lasts in level
		FTimerHandle LaunchTimer;
		ProjectileMovement->Velocity = FVector(-1 * ProjectileMovement->InitialSpeed, 0.f, 0.f);
		GetWorld()->GetTimerManager().SetTimer(LaunchTimer, this, &AProjectile::PoolProjectile, ProjectileDuration, false);
	}
	
}

void AProjectile::PoolProjectile()
{
	// Disable rotation of projectile
	CanRotate = false;
	SetActorLocation(PoolLocation);
	ProjectileMovement->Velocity = FVector(0.f,0.f,0.f);

	//GEngine->AddOnScreenDebugMessage(-2, 5.f, FColor::Purple, FString::Printf(TEXT("Speed of star: %.1f"), ProjectileMovement->MaxSpeed));
}

