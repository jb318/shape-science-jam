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
	UPaperFlipbookComponent* Flipbook;

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



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	// Projectile movement component
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UProjectileMovementComponent* ProjectileMovement;

	// fires a projectile
	void Fire();

private:
	void PoolProjectile();

	// sets the speed of projectile for firing
	void DestroyProjectile();

	// Reference to player character
	APawn* Insigator;
};
