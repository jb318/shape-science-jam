// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "PaperFlipbookComponent.h"
#include "Components/BoxComponent.h"
#include "Projectile.generated.h"

UCLASS()
class SHAPE_SCIENCE_JAM_API AProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Speed of the projectile
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float ProjectileDuration = 1.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UBoxComponent* BoxComponent;

	// Projectile overlaps combat interface actor
	UFUNCTION()
	void OnProjectileOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// Projectile damage amount
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float ProjectileDamage;

	// Whether to knock player back or not
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FVector ProjectileKnockbackForce;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool CanRotate;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UPaperFlipbookComponent* Flipbook;

	// Projectile movement component
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UProjectileMovementComponent* ProjectileMovement;

	// Fires a projectile, exposed to UE5 for better testing
	UFUNCTION(BlueprintCallable)
	void Fire(bool FacingRight);

	// Location of projectile pool
	FVector PoolLocation = FVector(-1000.f, 0.f, -1000.f);

	// Determines if the projectile should pool when hitting a character
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool PoolOnHit;

	// Projectile can be reflected
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool IsReflectable;

	// Projectile can be overwhelmed by other projectiles
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool IsDestructable;

	bool FiredOnRightside = true;

private:
	// Pools the projectile when duration is up or when character is hit
	void PoolProjectile();

	// Reference to player character
	APawn* Insigator;
};
