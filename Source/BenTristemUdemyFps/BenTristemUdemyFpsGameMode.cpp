// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "BenTristemUdemyFpsGameMode.h"
#include "BenTristemUdemyFpsHUD.h"
#include "BenTristemUdemyFpsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABenTristemUdemyFpsGameMode::ABenTristemUdemyFpsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ABenTristemUdemyFpsHUD::StaticClass();
}
