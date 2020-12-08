// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPC.h"
void AMyPC::setIndex(int32 _index)
{
	index=_index;
}

void AMyPC::setPlayerInfo(Tarray<FMyStruct>& GameInfos)
{
	FPlayerMessages=GameInfos;
}

void AMyPC::setInfoByIndex(int32 index,FMyStruct& GameInfo)
{
	AMyGameMode *GM = GetWorld()->GetAuthGameMode<AMyGameMode>();
	GM->SetInfoByIndex(index,GameInfo);
}
