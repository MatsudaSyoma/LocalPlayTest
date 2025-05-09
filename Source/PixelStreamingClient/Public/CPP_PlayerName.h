// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CPP_PlayerName.generated.h"
class UTextBlock;
/**
 * 
 */
UCLASS()
class PIXELSTREAMINGCLIENT_API UCPP_PlayerName : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget))
	UTextBlock* Name;
	
};
