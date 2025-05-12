// ファイル名: CPP_MyGameInstance.cpp
// 作成日: 2025-05-02 
// 更新日: 2025-05-12 
// 更新者: 松田 祥眞
// 概要:   プレイヤーのスポーンと、WebSocketのメッセージを取得するクラス。

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
        UE_LOG(LogTemp, Log, TEXT("WebSocket server started at ws://localhost:8080"));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to start WebSocket server"));
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

// プレイヤーをスポーン
void UCPP_MyGameInstance::SpawnPlayer(FString id, FString name)
{
    UE_LOG(LogTemp, Log, TEXT("--------SpawnPlayer"));

    FString outerror;
    ULocalPlayer* LocalPlayer = CreateLocalPlayer(-1, outerror, true);

    if (!LocalPlayer)
    {
        UE_LOG(LogTemp, Error, TEXT("LocalPlayer 作成に失敗: %s"), *outerror);
        return;
    }

    UWorld* World = GetWorld();
    if (!World)
    {
        UE_LOG(LogTemp, Error, TEXT("World が無効"));
        return;
    }

    APlayerController* PC = LocalPlayer->PlayerController;
    if (!PC)
    {
        UE_LOG(LogTemp, Error, TEXT("PlayerController が無効"));
        return;
    }

    APawn* Pawn = PC->GetPawn();
    if (!Pawn)
    {
        UE_LOG(LogTemp, Warning, TEXT("まだ Pawn が存在しない"));
        return;
    }

    ACPP_MyCharacter* PlayerChar = Cast<ACPP_MyCharacter>(Pawn);
    if (!PlayerChar)
    {
        //UE_LOG(LogTemp, Error, TEXT("Pawn は ACPP_MyCharacter ではありません"));
        return;
    }

    // プレイヤーにnameとidを渡してStartStreamingをする
    PlayerChar->name = name;
    PlayerChar->StartPlayerStreaming(id);
}

// WebSocketのメッセージを受け取る処理
void UCPP_MyGameInstance::OnMessageReceived(const FString& Message)
{
    UE_LOG(LogTemp, Log, TEXT("Received Message: %s"), *Message);
    FString message = Message.RightChop(19);
    FString id = message.Left(12);
    FString name = message.RightChop(13);
    SpawnPlayer(id, name);
}
