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
	
protected:
	URPOPERTY(EditAnywhere,BlueprintReadWrite)
		Tarray<FMyStruct> FPlayerMessages;
	URPOPERTY(EditAnywhere,BlueprintReadWrite)
		Tarray<AMyPC> FPlayerControllers;
	
public:
	AMyGameMode();
	
	//UFUNCTION(BlueprintImplementableEvent) 
	//void OnPostLogin(APlayerController newPlayer);
	
	UFUNCTION(Server)
	void SetInfoByIndex(int32 index,FMyStruct& PlayerInfo);
	
	UFUNCTION(Server)
	void DistributePlayerInfo(); 
	
	UFUNCTION(Server)
	void DestroyRoom();
	
	UFUNCTION(BlueprintImplementableEvent)
	void PawnPlayer(AMyPC& PC,int32 index);
};
