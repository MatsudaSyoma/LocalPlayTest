/*  このcppは GameMode が生成されたときに MyGameInstance の
    SpawnPlayer を呼び出したあと、プレイヤーの情報を配列で取得、
    プレイヤーの StartPlayerStreaming を呼ぶ。*/

#include "CPP_GameMode.h"
#include "CPP_MyCharacter.h"
#include "CPP_PlayerView.h"
#include "CPP_MyGameInstance.h"
#include "CPP_MyPlayerController.h"
#include "Kismet/GameplayStatics.h"

ACPP_GameMode::ACPP_GameMode()
{
    // BPのプレイヤーを取得、DefaultPawnClass に設定
    FString CharacterPath = "/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter.BP_ThirdPersonCharacter_c";
    static ConstructorHelpers::FObjectFinder<UClass> CharacterBP(*CharacterPath);
    ThirdPersonCharacter = CharacterBP.Object;
    if (ThirdPersonCharacter != nullptr)
    {
        DefaultPawnClass = ThirdPersonCharacter;
    }


    PlayerControllerClass = ACPP_MyPlayerController::StaticClass();
}

void ACPP_GameMode::BeginPlay()
{
    // プレイヤーをスポーン
    UCPP_MyGameInstance* gameinstance = Cast<UCPP_MyGameInstance>(GetWorld()->GetGameInstance());
    gameinstance->SpawnPlayer(1);

    // ワールドにいるプレイヤーを配列で取得
    TArray<AActor*> FoundCharacters;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACharacter::StaticClass(), FoundCharacters);

    // プレイヤー配列のfor文
    for (int i = 0;i < FoundCharacters.Num(); i++)
    {
        AActor* Actor = FoundCharacters[i];
        ACPP_MyCharacter* PlayerChar = Cast<ACPP_MyCharacter>(Actor);
        if (PlayerChar)
        {
            // PlayerCharにアタッチされているSceneCapture2Dを取得
            USceneCaptureComponent2D* CaptureComp = PlayerChar->PlayerSceneCapture;
            // PixelStreamingでストリーミング開始
            PlayerChar->StartPlayerStreaming(i);
        }
    }


}