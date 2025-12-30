// Fill out your copyright notice in the Description page of Project Settings.


#include "Item.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AItem::AItem()
{
	// 2d item components
	Flipbook = CreateDefaultSubobject<UPaperFlipbookComponent>("Flipbook");
	Flipbook->SetupAttachment(RootComponent);

	BoxComponent = CreateDefaultSubobject<UBoxComponent>("Interact Box");
	BoxComponent->SetGenerateOverlapEvents(true);
	BoxComponent->SetupAttachment(Flipbook);

	// Multiplayer functionality
	bReplicates = true;
}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();
	
}

void AItem::Interact()
{
	Destroy();
}

FString AItem::ItemName()
{
	return Name;
}

float AItem::ItemValue()
{
	return ItemVal;
}

void AItem::UpdateObjective()
{
}

void AItem::PlaySoundEffect()
{
	if (ItemCollectedSFX)
		UGameplayStatics::PlaySound2D(this, ItemCollectedSFX);
}

