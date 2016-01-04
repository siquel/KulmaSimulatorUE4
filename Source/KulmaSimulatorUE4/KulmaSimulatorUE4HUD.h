// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "KulmaSimulatorUE4HUD.generated.h"

UCLASS()
class AKulmaSimulatorUE4HUD : public AHUD
{
	GENERATED_BODY()

public:
	AKulmaSimulatorUE4HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

