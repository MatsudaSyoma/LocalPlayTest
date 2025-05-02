/*  このcppは GameMode が生成されたときに MyGameInstance の
    SpawnPlayer を呼び出したあと、プレイヤーの情報を配列で取得、
    Widget を生成し、 GameMode で AddToViewport を行う。
    取得されたプレイヤーに UTextureRenderTarget2D を生成して、
    プレイヤーが持つ USceneCaptureComponent2D の情報を生成した UTextureRenderTarget2D に代入。
    そして、 UCPP_PlayerView というWidgetを生成し、それが持つ関数 SetRenderTargetTexture(RenderTarget)を
    呼び出して、WidgetのImageに UTextureRenderTarget2D の情報を送る。*/

#include "CPP_GameMode.h"
#include "CPP_MyCharacter.h"
#include "CPP_PlayerView.h"
#include "CPP_MyGameInstance.h"
#include "Components/HorizontalBox.h"
#include "Components/HorizontalBoxSlot.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Blueprint/UserWidget.h"
#include "Components/Widget.h"


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

    // このクラスに関連するウィジェットをエディタで設定できるようにする
    static ConstructorHelpers::FClassFinder<UUserWidget> PlayerWidget(TEXT("/Game/ThirdPerson/WBP/WBP_PlayerView"));
    if (PlayerWidget.Succeeded())
    {
        PlayerWidgetClass = PlayerWidget.Class;
    }
}

void ACPP_GameMode::BeginPlay()
{
    // プレイヤーをスポーン
    UCPP_MyGameInstance* gameinstance = Cast<UCPP_MyGameInstance>(GetWorld()->GetGameInstance());
    gameinstance->SpawnPlayer(1);

    // ワールドにいるプレイヤーを配列で取得
    TArray<AActor*> FoundCharacters;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACharacter::StaticClass(), FoundCharacters);

    // ウィジェット作成
    UCPP_PlayerView* PlayerWidget = CreateWidget<UCPP_PlayerView>(GetWorld(), PlayerWidgetClass);
    if (PlayerWidget)
    {
        PlayerWidget->AddToViewport();

        // プレイヤー配列のfor文
        for (AActor* Actor : FoundCharacters)
        {
            ACPP_MyCharacter* PlayerChar = Cast<ACPP_MyCharacter>(Actor);
            if (PlayerChar)
            {
                // PlayerCharにアタッチされているSceneCapture2Dを取得
                USceneCaptureComponent2D* CaptureComp = PlayerChar->PlayerSceneCapture;
                if (CaptureComp)
                {
                    // RenderTargetを生成
                    UTextureRenderTarget2D* RenderTarget = NewObject<UTextureRenderTarget2D>(this);
                    RenderTarget->RenderTargetFormat = RTF_RGBA8;
                    RenderTarget->InitAutoFormat(512, 512);
                    RenderTarget->UpdateResourceImmediate(true);

                    // SceneCaptureにRenderTargetを割り当て
                    CaptureComp->TextureTarget = RenderTarget;

                    // PlayerWidgetにRenderTargetを渡す
                    PlayerWidget->SetRenderTargetTexture(RenderTarget);
                }
            }
        }
    }
}
