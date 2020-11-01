// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThirdPresonGameMode.h"
#include "ThirdPresonCharacter.h"
#include "UObject/ConstructorHelpers.h"

AThirdPresonGameMode::AThirdPresonGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
