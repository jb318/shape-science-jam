// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/BoxComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Projectile.h"
#include "CombatInterface.h"
#include "Shape.generated.h"

/**
 * 
 */

USTRUCT()
struct FShapeLevelData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Shape Stats")
	int Level;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Shape Stats")
	float MaxHealth;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Shape Stats")
	float MaxExperience;

};

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

	// Data table reference
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Shape Level Data")
	UDataTable* ShapeDT;

	// Individual row from the data table reference
	FShapeLevelData* row;

	// Level of the shape, change the starting level in editor
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Shape Level Data")
	int ShapeLevelIndex = 0;

	// Array of the rows inside datatable
	TArray<FName> RowNames;

	// Cooldowns for each of the shapes attack moves
	virtual void CoolDown();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Shape Moves")
	float AttackCoolDown;

	// Bool to check if cooldown is active
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CoolDownActive = false;

	// Jump delay interval
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Shape Moves")
	float SpecialMoveDelay = 0.125f;

	// Determine the direction shape is facing for sprite orientation
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool FacingRight = true;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool FacingLeft = false;

	// Checks player invincibility status
	bool CanBeDamaged;

	void MakeInvincibleTimer();

	void AddExperience(float amount);

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UCameraComponent* CameraComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UBoxComponent* BoxComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	USpringArmComponent* SpringArmComponent;

	// Player overlaps item
	UFUNCTION()
	void OnOverlapItemBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// Functions for player and AI controller to call
	// The first is for the childs to base class and derived classes to use inside the UE5 editor
	// and should only be declared in base class! Also, do not create definition in the cpp file 
	// The second function is for the cpp functionality of the function and should be overriden 
	// in derived classes
	UFUNCTION(BlueprintNativeEvent, Category = "Shape Moves")
	void Attack();
	virtual void Attack_Implementation();

	UFUNCTION(BlueprintNativeEvent, Category = "Shape Moves")
	void SpecialMove();
	virtual void SpecialMove_Implementation();

	/*UFUNCTION(BlueprintNativeEvent, Category = "Shape Moves")
	void ChangeShape();
	virtual void ChangeShape_Implementation();*/

	// Name of the item that was overlapped
	FString ItemName;

	// Functions to be called in conjunction with interfaces
	void LevelUp();

	virtual void SetHealth(float amount);

	// Members from the combat interface
	UFUNCTION(BlueprintCallable)
	virtual void DamageCharacter(float amount) override;

	virtual void HitReaction_Implementation(FVector LaunchVelocity) override;

	// Checks if shape can be changed
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animations")
	bool CanChangeShape = true;

private:
	// The actual values of stats
	float CurrentHealth;
	float CurrentExperience;

};
