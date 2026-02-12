// Copyright Epic Games, Inc. All Rights Reserved.

#include "CppAIGameMode.h"
#include "CppAICharacter.h"
#include "UObject/ConstructorHelpers.h"

ACppAIGameMode::ACppAIGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
