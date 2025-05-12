// Private/CPP_MyGameInstance.cpp

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
