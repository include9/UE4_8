// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameMode.h"

AMyGameMode::AMyGameMode()
{
	
}
void AMyGameMode::SetInfoByIndex(int32 index,FMyStruct& PlayerInfo)
{
	FPlayerMessages.Insert(PlayerInfo,index);
	DistributePlayerInfo();
}

void AMyGameMode::DistributePlayerInfo()
{
	for(AMyPC APC:FPlayerControllers)
	{
		if(APC)
		{
			APC.SetPlayerInfo(FPlayerMessages);
		}
	}
}

void AMyGameMode::DestroyRoom()
{
	for(int32 i=1;i<FPlayerControllers.Num();i++){
		FPlayerControllers[i].EVELeave();
	}
	FPlatformProcess::Sleep(1.0f);
	FPlayerControllers[0].EVELeave();
}

