// Copyright Epic Games, Inc. All Rights Reserved.

#include "Project_8GameMode.h"
#include "Project_8Character.h"
#include "UObject/ConstructorHelpers.h"

AProject_8GameMode::AProject_8GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
