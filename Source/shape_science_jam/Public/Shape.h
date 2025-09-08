// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/BoxComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Projectile.h"
#include "CombatInterface.h"
#include "InteractInterface.h"
#include "Kismet/GameplayStatics.h"
#include "GameHUD.h"
#include "ShapeAbilityComponent.h"
#include "Shape.generated.h"

/**
 * 
 */

UCLASS()
class SHAPE_SCIENCE_JAM_API AShape : public APaperCharacter, public ICombatInterface
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
	float SpecialMoveAnimationDuration = 0.125f;

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
	// Using ReplicatedUsing tag with corresponding function to transfer this value to other clients?
	UPROPERTY(EditDefaultsOnly, Category = "Stats")
	float CurrentHealth;

	UPROPERTY(EditDefaultsOnly, Category = "Stats")
	float MaxHealth = 4.f;

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

	// Functions of shapes
	// The first is for the childs to base class and derived classes to use inside the UE5 editor
	// and should only be declared in base class! Also, do not create definition in the cpp file 
	// The second function is for the cpp functionality of the function and should be overriden 
	// in derived classes
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Shape Moves")
	void Attack();
	virtual void Attack_Implementation();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Shape Moves")
	void SpecialMove();
	virtual void SpecialMove_Implementation();

	// Name of the item that was overlapped
	FString ItemName;

	// Functions to be called in conjunction with interfaces
	void LevelUp();

	virtual void SetHealth(float amount);

	// Members from the combat interface
	UFUNCTION(BlueprintCallable)
	virtual void DamageCharacter(float amount, bool IsProjectile) override;

	virtual void HitReaction(FVector LaunchVelocity) override;

	// Shapes flipbook animations
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Animations")
	UPaperFlipbook* IdleAnimation;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Animations")
	UPaperFlipbook* MoveAnimation;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Animations")
	UPaperFlipbook* SpecialMoveAnimation;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Animations")
	UPaperFlipbook* HurtAnimation;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Animations")
	UPaperFlipbook* TransformOutAnimation;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Animations")
	UPaperFlipbook* TransformInAnimation;

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
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Components")
	UShapeAbilityComponent* ShapeAbilityComponent;

	// AI controller will call attack on members that have this set to true
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly , Category = "AI")
	bool UseControllerForAttacking = true;

	// How close the AI needs to be to attack player
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AI")
	float AttackRange;

	// Destroys character
	virtual void CharacterDefeat();

	// Checks player invincibility status
	UPROPERTY(BlueprintReadOnly)
	bool Invincible;

	int ShapeIndex;

private:
	// reference to HUD
	AGameHUD* HUD;
};
