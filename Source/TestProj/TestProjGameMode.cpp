// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "TestProj.h"
#include "TestProjGameMode.h"
#include "TestProjPlayerController.h"
#include "TestProjCharacter.h"

ATestProjGameMode::ATestProjGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATestProjPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}