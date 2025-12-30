// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/BoxComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Projectile.h"
#include "InteractInterface.h"
#include "Kismet/GameplayStatics.h"
#include "GameHUD.h"
#include "ShapeAbilityComponent.h"
#include "Shape.generated.h"

/**
 * 
 */

UCLASS()
class SHAPE_SCIENCE_JAM_API AShape : public APaperCharacter
{
	GENERATED_BODY()
	
public: 
	// Sets default values for this character's properties
	AShape();

protected: 
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Cooldowns for each of the shapes attack moves
	virtual void CoolDown();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Shape Moves")
	float AttackCoolDown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CoolDownActive = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Shape Moves")
	float SpecialMoveDelay = 0.125f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Shape Moves")
	float SpecialMoveAnimationDuration = 0.25f;

	// Determine the direction shape is facing for sprite orientation
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool FacingRight = true;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool FacingLeft = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shape Moves")
	bool ImmuneToProjectile;

	// Timer that resets invincibility state
	void MakeInvincibleTimer();

	// Adds amount of experience passed through to shapes experience 
	void IncrementDiamondCountOnHUD(float amount);

	// Controls animation to be played when a hit is successful
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void PlayDamageAnimation();

	// How long shape change lasts for timer
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float ShapeChangeDuration = 1.f;

public:
	float CurrentHealth;

	float MaxHealth = 8.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UCameraComponent* CameraComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UBoxComponent* BoxComponent;

	// Index of shape so it doesn't transform into itself
	UPROPERTY(EditDefaultsOnly)
	FVector2D ShapeKey = FVector2D(0.f,0.f);

	// Objective points needed to beat the game
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int ObjectiveCounter = 0;

	// Player overlaps item
	UFUNCTION()
	void OnOverlapItemBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Shape Moves")
	void SpecialMove();
	virtual void SpecialMove_Implementation();

	// Name of the item that was overlapped
	FString ItemName;

	virtual void SetHealth(float amount);

	UFUNCTION(BlueprintCallable)
	void DamageShape(float amount, bool InstantDeath);

	// Shapes flipbook animations
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Animations")
	UPaperFlipbook* IdleAnimation;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Animations")
	UPaperFlipbook* SpecialMoveAnimation;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Animations")
	UPaperFlipbook* HurtAnimation;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Animations")
	UPaperFlipbook* TransformOutAnimation;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Animations")
	UPaperFlipbook* TransformInAnimation;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UI")
	UTexture* Full_Health_Icon;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UI")
	UTexture* Half_Health_Icon;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UI")
	UTexture* Empty_Health_Icon;

	// Bools to control input and movement
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animations")
	bool InputDisabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animations")
	bool CannotMove;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool SpecialMoveClicked;

	bool CanChangeShape = true;

	// Start change shape animation
	UFUNCTION(BlueprintImplementableEvent)
	void ChangeShapeStart();

	// Start change shape end animation
	UFUNCTION(BlueprintImplementableEvent)
	void ChangeShapeEnd();	

	// Transform Actor Component class reference
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UShapeAbilityComponent* ShapeAbilityComponent;

	// AI controller will call attack on members that have this set to true
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly , Category = "AI")
	bool UseControllerForAttacking = true;

	// Destroys character
	virtual void CharacterDefeat();

	// Checks player invincibility status
	UPROPERTY(BlueprintReadOnly)
	bool Invincible;

	int ShapeIndex;

	UFUNCTION(BlueprintCallable)
	float GetShapeHealthPercent();

private:
	// reference to HUD
	AGameHUD* HUD;
};
