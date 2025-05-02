// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_MyGameInstance.h"

UCPP_MyGameInstance::UCPP_MyGameInstance()
{
}

void UCPP_MyGameInstance::Init()
{

}

void UCPP_MyGameInstance::OnStart()
{
	//UE_LOG(LogTemp, Log, TEXT("--------LogMessage"));
	//FString outerror;
	//CreateLocalPlayer(-1, outerror, true);
}

void UCPP_MyGameInstance::SpawnPlayer(int num)
{
	UE_LOG(LogTemp, Log, TEXT("--------LogMessage"));
	FString outerror;
	CreateLocalPlayer(-1, outerror, true);
}
