// ファイル名: CPP_MyGameInstance.h
// 作成日: 2025-05-02 
// 更新日: 2025-05-12 
// 更新者: 松田 祥眞
// 概要:   プレイヤーのスポーンと、WebSocketのメッセージを取得するクラス。

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "IWebSocket.h"
#include "CPP_MyGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class PIXELSTREAMINGCLIENT_API UCPP_MyGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	UCPP_MyGameInstance();
	virtual void Init() override;
	virtual void Shutdown() override;
	void SpawnPlayer(FString id, FString name);
	//void SpawnPlayer(FString id);

	void OnMessageReceived(const FString& Message);

    TSharedPtr<IWebSocket> WebSocket;
};
