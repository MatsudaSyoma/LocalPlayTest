// ファイル名: CPP_GameMode.h
// 作成日: 2025-05-02 
// 更新日: 2025-05-12 
// 更新者: 松田 祥眞
// 概要:   GameMode での初期設定をするクラス。

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CPP_GameMode.generated.h"

class UPixelStreamingStreamerVideoInputRenderTarget;
/**
 * 
 */
UCLASS()
class PIXELSTREAMINGCLIENT_API ACPP_GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ACPP_GameMode();

protected:
	virtual void BeginPlay() override;

private:

	TSubclassOf<AActor> ThirdPersonCharacter;

};
