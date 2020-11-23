// Fill out your copyright notice in the Description page of Project Settings.


#include "MyRegex.h"

// Sets default values
AMyRegex::AMyRegex()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyRegex::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyRegex::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool AMyRegex::Regular(const FString str, const FString Reg)
{
	FRegexPattern Pattern(Reg);
	FRegexMatcher regMatcher(Pattern, str);
	regMatcher.SetLimits(0, str.Len());
	return regMatcher.FindNext();
}
void AMyRegex::TestFunc(const int &args) {
	//输入Log
	UE_LOG(LogTemp, Warning, TEXT("This is a CPP Function"));
	//在屏幕输出调试信息
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Ttex%d"),args));
}