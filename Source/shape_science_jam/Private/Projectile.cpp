// Fill out your copyright notice in the Description page of Project Settings.

#include "Projectile.h"
#include "CombatInterface.h"

// Sets default values
AProjectile::AProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// Projectile movement component and properties
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
	
	BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &AProjectile::OnProjectileOverlap);

}

void AProjectile::OnProjectileOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	
	if (OtherActor && OtherActor != GetInstigator()) {
		if (ICombatInterface* CombatInterface = Cast<ICombatInterface>(OtherActor)) {
			CombatInterface->DamageCharacter(ProjectileDamage);
			CombatInterface->HitReaction_Implementation(ProjectileKnockbackForce);
			DestroyProjectile();
		}	
	}
}

// Called every frame
void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProjectile::DestroyProjectile()
{	
	// change to pool
	Destroy();
}

void AProjectile::Fire()
{
	FTimerHandle LaunchTimer;
	GetWorld()->GetTimerManager().SetTimer(LaunchTimer, this, &AProjectile::DestroyProjectile, ProjectileDuration, false);
	
}

void AProjectile::PoolProjectile()
{
}

