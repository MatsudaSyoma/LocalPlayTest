// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InputMappingContext.h"
#include "InputAction.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "CPP_MyPlayerController.generated.h"

class UInputMappingContext;
/**
 * 
 */
UCLASS()
class PIXELSTREAMINGCLIENT_API ACPP_MyPlayerController : public APlayerController
{
	GENERATED_BODY()
private:
	TObjectPtr<UInputMappingContext> DefaultMappingContext;

	UPROPERTY()
	TObjectPtr<UInputAction> ChangeAction;
	TObjectPtr<UInputAction> LeftClickAction;
	TObjectPtr<UInputAction> MouseWheelAction;
	
	int changeNum = 0;
	// èàóùÅiîCà”Åj
	UFUNCTION()
	void HandleChangePlayer(const FInputActionValue& Value);
	void HandlePressLeftClick(const FInputActionValue& Value);
	void HandleReleaseLeftClick(const FInputActionValue& Value);
	void HandleMouseWheel(const FInputActionValue& Value);
protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;
	virtual void Tick(float DeltaSeconds) override;
};
