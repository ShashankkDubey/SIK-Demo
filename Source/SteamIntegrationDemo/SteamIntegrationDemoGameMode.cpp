// Copyright Epic Games, Inc. All Rights Reserved.

#include "SteamIntegrationDemoGameMode.h"
#include "SteamIntegrationDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASteamIntegrationDemoGameMode::ASteamIntegrationDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
