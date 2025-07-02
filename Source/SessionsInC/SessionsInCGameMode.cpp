// Copyright Epic Games, Inc. All Rights Reserved.

#include "SessionsInCGameMode.h"
#include "SessionsInCCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASessionsInCGameMode::ASessionsInCGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
