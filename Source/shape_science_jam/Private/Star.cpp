// Fill out your copyright notice in the Description page of Project Settings.

#include "Star.h"

void AStar::Attack_Implementation()
{
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, TEXT("And this is where we shoot projectile"));
}

void AStar::SpecialMove_Implementation()
{
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, TEXT("Star Glide!"));
}
