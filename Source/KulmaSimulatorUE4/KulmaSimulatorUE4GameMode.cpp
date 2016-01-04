// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "KulmaSimulatorUE4.h"
#include "KulmaSimulatorUE4GameMode.h"
#include "KulmaSimulatorUE4HUD.h"
#include "KulmaSimulatorUE4Character.h"

AKulmaSimulatorUE4GameMode::AKulmaSimulatorUE4GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AKulmaSimulatorUE4HUD::StaticClass();
}
