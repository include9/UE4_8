// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyPC.generated.h"

/**
 * 
 */
UCLASS()
class THIRDPRESON_API AMyPC : public APlayerController
{
	GENERATED_BODY()
	
protected: 
	URPOPERTY(EditAnywhere,BlueprintReadWrite)
		int32 index;
		
	URPOPERTY(EditAnywhere,BlueprintReadWrite)
		FText Name;
		
	URPOPERTY(EditAnywhere,BlueprintReadWrite)
		int32 kill;
		
	URPOPERTY(EditAnywhere,BlueprintReadWrite)
		int32 death;
		
	URPOPERTY(EditAnywhere,BlueprintReadWrite)
		Tarray<FMyStruct> FPlayerMessages;
		
public:
	UFUNCTION(Client)
	void setIndex(int32 _index);
	
	UFUNCTION(Client)
	void setPlayerInfo(Tarray<FMyStruct>& GameInfos); 
	
	UFUNCTION(Server)
	void setInfoByIndex(int32 index,FMyStruct& GameInfo);
	
	UFUNCTION(BlueprintImplementableEvent,Client) 
	void init();
	
	UFUNCTION(BlueprintImplementableEvent,Client) 
	void updateKDA();
 
 	UFUNCTION(BlueprintImplementableEvent,Client) 
 	void beenKilled();
 	
 	UFUNCTION(BlueprintImplementableEvent,Client) 
 	void killAnEnemy();
 	
 	UFUNCTION(BlueprintImplementableEvent,Client)
 	void EVELeave();
 	
 	UFUNCTION(BlueprintImplementableEvent,Client)
 	void LeaveRoom();
 	
 	UFUNCTION(BlueprintImplementableEvent,Client)
 	void LeaveRoomOwner();
};
