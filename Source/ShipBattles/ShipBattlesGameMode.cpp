// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ShipBattlesGameMode.h"
#include "ShipBattlesPawn.h"

AShipBattlesGameMode::AShipBattlesGameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = AShipBattlesPawn::StaticClass();
}
