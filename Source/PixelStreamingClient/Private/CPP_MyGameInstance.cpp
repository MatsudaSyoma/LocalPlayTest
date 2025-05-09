/*����cpp�́A PlayerSpawn �֐�������B
�����Ɏw�肵����������Ƃ��̐������X�|�[������*/

#include "CPP_MyGameInstance.h"
#include "WebSocketsModule.h"
#include "PixelStreamingInputComponent.h"
#include "Kismet/GameplayStatics.h"
#include "CPP_MyCharacter.h"

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
void UCPP_MyGameInstance::SpawnPlayer(FString id, FString name)
{
    UE_LOG(LogTemp, Log, TEXT("--------SpawnPlayer"));

    FString outerror;
    ULocalPlayer* LocalPlayer = CreateLocalPlayer(-1, outerror, true);
    if (!LocalPlayer)
    {
        UE_LOG(LogTemp, Error, TEXT("LocalPlayer �쐬�Ɏ��s: %s"), *outerror);
        return;
    }

    UWorld* World = GetWorld();
    if (!World)
    {
        UE_LOG(LogTemp, Error, TEXT("World ������"));
        return;
    }

    APlayerController* PC = LocalPlayer->PlayerController;
    if (!PC)
    {
        UE_LOG(LogTemp, Error, TEXT("PlayerController ������"));
        return;
    }

    APawn* Pawn = PC->GetPawn();
    if (!Pawn)
    {
        UE_LOG(LogTemp, Warning, TEXT("�܂� Pawn �����݂��Ȃ�"));
        return;
    }

    ACPP_MyCharacter* PlayerChar = Cast<ACPP_MyCharacter>(Pawn);
    if (!PlayerChar)
    {
        //UE_LOG(LogTemp, Error, TEXT("Pawn �� ACPP_MyCharacter �ł͂���܂���"));
        return;
    }
    PlayerChar->name = name;
    PlayerChar->StartPlayerStreaming(id);
}


void UCPP_MyGameInstance::OnMessageReceived(const FString& Message)
{
    UE_LOG(LogTemp, Log, TEXT("Received Message: %s"), *Message);
    FString message = Message.RightChop(19);
    FString id = message.Left(12);
    FString name = message.RightChop(13);
    SpawnPlayer(id, name);
}
