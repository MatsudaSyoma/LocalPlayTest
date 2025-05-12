// ファイル名: CPP_GameMode.cpp
// 作成日: 2025-05-02 
// 更新日: 2025-05-12 
// 更新者: 松田 祥眞
// 概要:   GameMode での初期設定をするクラス。
    

#include "CPP_GameMode.h"
#include "CPP_MyCharacter.h"
#include "CPP_PlayerView.h"
#include "CPP_MyPlayerController.h"

ACPP_GameMode::ACPP_GameMode()
{
    // BPのプレイヤーを取得、DefaultPawnClass に設定
    FString CharacterPath = "/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter.BP_ThirdPersonCharacter_c";
    static ConstructorHelpers::FObjectFinder<UClass> CharacterBP(*CharacterPath);
    ThirdPersonCharacter = CharacterBP.Object;

    PlayerControllerClass = ACPP_MyPlayerController::StaticClass();
    if (ThirdPersonCharacter != nullptr)
    {
        //DefaultPawnClass = ThirdPersonCharacter;
    }
}

void ACPP_GameMode::BeginPlay()
{
    if (ThirdPersonCharacter != nullptr)
    {
        DefaultPawnClass = ThirdPersonCharacter;
    }
}