/*����cpp�́A PlayerSpawn �֐�������B
�����Ɏw�肵����������Ƃ��̐������X�|�[������*/

#include "CPP_MyGameInstance.h"
#include "WebSocketsModule.h"
#include "PixelStreamingInputComponent.h"
#include "Kismet/GameplayStatics.h"

UCPP_MyGameInstance::UCPP_MyGameInstance()
{
}

void UCPP_MyGameInstance::Init()
{
    Super::Init();

    WebSocket = FWebSocketsModule::Get().CreateWebSocket(TEXT("ws://localhost:8080"));

    WebSocket->OnMessage().AddUObject(this, &UCPP_MyGameInstance::OnMessageReceived);
    if (WebSocket.IsValid())
    {
        WebSocket->Connect();
        UE_LOG(LogTemp, Log, TEXT("------------------------------WebSocket server started at ws://localhost:8080"));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("------------------------------Failed to start WebSocket server"));
    }
}

void UCPP_MyGameInstance::Shutdown()
{
    Super::Shutdown();
    if (WebSocket.IsValid())
    {
        WebSocket->Close();
    }
}

// �v���C���[���X�|�[��
void UCPP_MyGameInstance::SpawnPlayer(int num)
{
	for (int i = 0; i < num; i++)
	{
		UE_LOG(LogTemp, Log, TEXT("--------SpawnPlayer"));
		FString outerror;
		CreateLocalPlayer(-1, outerror, true);
	}
}

void UCPP_MyGameInstance::OnMessageReceived(const FString& Message)
{
    UE_LOG(LogTemp, Log, TEXT("Received Message: %s"), *Message);
}
