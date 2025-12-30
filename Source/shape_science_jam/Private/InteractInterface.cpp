// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractInterface.h"

UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
void IInteractInterface::Interact()
{
}

FString IInteractInterface::ItemName()
{
    return FString();
}

float IInteractInterface::ItemValue()
{
    return 0.0f;
}

void IInteractInterface::UpdateObjective()
{
}

void IInteractInterface::PlaySoundEffect()
{
}
