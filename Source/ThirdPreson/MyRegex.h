// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyRegex.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class THIRDPRESON_API AMyRegex : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyRegex();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UFUNCTION(BlueprintCallable,Category = "Test")
		bool Regular(const FString str, const FString Reg);
	UFUNCTION(BlueprintCallable,Category = "Test")
		void TestFunc(const int &args);
	UPROPERTY(BlueprintReadWrite)
		int ohInt;
};
