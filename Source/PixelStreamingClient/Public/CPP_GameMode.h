// Private/CPP_GameMode.cpp

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Blueprint/UserWidget.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "CPP_GameMode.generated.h"

/**
 * 
 */
UCLASS()
class PIXELSTREAMINGCLIENT_API ACPP_GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ACPP_GameMode();

	// Widget�N���X���Z�b�g�ł���悤�ɂ���
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI")
	TSubclassOf<class UUserWidget> PlayerWidgetClass;

protected:
	virtual void BeginPlay() override;

	UPROPERTY()
	TArray<UTextureRenderTarget2D*> PlayerRenderTargets;


private:

	TSubclassOf<AActor> ThirdPersonCharacter;

};
