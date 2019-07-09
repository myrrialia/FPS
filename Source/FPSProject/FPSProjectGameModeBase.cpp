// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSProjectGameModeBase.h"
#include "FPSProject.h"
#include "Engine/Engine.h"

void AFPSProjectGameModeBase::StartPlay()
{
	Super::StartPlay();

	if (GEngine)
	{
		// Display a debug message for five seconds 
		// The -1 "Key" value in the first argument indicates that we will never need to update or refresh this message.
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Hello World, this is FPSGameMode!"));
	}
}