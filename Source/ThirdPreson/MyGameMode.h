// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "MyGameMode.generated.h"

/**
 * 
 */
UCLASS()
class THIRDPRESON_API AMyGameMode : public AGameMode
{
	GENERATED_BODY()
	
	URPOPERTY(EditAnywhere,BlueprintReadWrite)
		Tarray<FMyStruct> FPlayerMessages;
	URPOPERTY(EditAnywhere,BlueprintReadWrite)
		Tarray<AMyPC> FPlayerControllers;
	
public:
	AMyGameMode();
	
	//void PostLogin(APlayerController newPlayer);
	
	void SetInfoByIndex(int32 index,FMyStruct PlayerInfo);
	
	void DistributePlayerInfo(); 
	
	void DestroyRoom();
	
	//void PawnPlayer(AMyPC PC,int32 index);
};
