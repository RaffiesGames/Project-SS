// Copyright Epic Games, Inc. All Rights Reserved.

#include "Project_SSGameMode.h"
#include "Project_SSCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProject_SSGameMode::AProject_SSGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
