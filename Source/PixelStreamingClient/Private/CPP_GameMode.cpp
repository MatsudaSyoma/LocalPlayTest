/*  このcppは GameMode が生成されたときに MyGameInstance の
    SpawnPlayerを呼び出したあと、プレイヤーの情報を取得(まだ1体のみしか取得しない)、
    取得されたプレイヤーに UTextureRenderTarget2D を生成して、
    プレイヤーが持つ USceneCaptureComponent2D の情報を生成した UTextureRenderTarget2D に代入。
    そして、 UCPP_PlayerView というWidgetを生成し、それが持つ関数 SetRenderTargetTexture(RenderTarget)を
    呼び出して、WidgetのImageに UTextureRenderTarget2D の情報を送り、プレイヤーで AddToViewport を行う。*/

#include "CPP_GameMode.h"
#include "CPP_MyGameInstance.h"
#include "CPP_MyCharacter.h"
#include "CPP_PlayerView.h"
#include "EngineUtils.h"
#include "Camera/CameraComponent.h"
#include "Engine/SceneCapture2D.h"
#include "Components/SceneCaptureComponent2D.h"


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
    TArray<AActor*> FoundCharacters;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACharacter::StaticClass(), FoundCharacters);
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

                // 生成したRenderTargetをUIに渡す処理
                UCPP_PlayerView* PlayerWidget = CreateWidget<UCPP_PlayerView>(GetWorld(), PlayerWidgetClass);
                if (PlayerWidget)
                {
                    UCPP_PlayerView* PlayerView = Cast<UCPP_PlayerView>(PlayerWidget);
                    if (PlayerView)
                    {
                        // Widgetの関数を呼び出す
                        PlayerView->SetRenderTargetTexture(RenderTarget);
                        PlayerWidget->AddToViewport();

                    }
                }
            }
        }
    }
    //// プレイヤーのControllerを取得
    //APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
    //if (PlayerController)
    //{
    //    ACPP_MyCharacter* PlayerChar = Cast<ACPP_MyCharacter>(PlayerController->GetPawn());
    //    if (PlayerChar)
    //    {
    //        // PlayerCharにアタッチされているSceneCapture2Dを取得
    //        USceneCaptureComponent2D* CaptureComp = PlayerChar->PlayerSceneCapture;
    //        if (CaptureComp)
    //        {
    //            // RenderTargetを生成
    //            UTextureRenderTarget2D* RenderTarget = NewObject<UTextureRenderTarget2D>(this);
    //            RenderTarget->RenderTargetFormat = RTF_RGBA8;
    //            RenderTarget->InitAutoFormat(512, 512);
    //            RenderTarget->UpdateResourceImmediate(true);

    //            // SceneCaptureにRenderTargetを割り当て
    //            CaptureComp->TextureTarget = RenderTarget;

    //            // 生成したRenderTargetをUIに渡す処理
    //            UCPP_PlayerView* PlayerWidget = CreateWidget<UCPP_PlayerView>(GetWorld(), PlayerWidgetClass);
    //            if (PlayerWidget)
    //            {
    //                UCPP_PlayerView* PlayerView = Cast<UCPP_PlayerView>(PlayerWidget);
    //                if (PlayerView)
    //                {
    //                    // Widgetの関数を呼び出す
    //                    PlayerView->SetRenderTargetTexture(RenderTarget);
    //                    PlayerWidget->AddToViewport();
    //                }
    //            }
    //        }
    //    }
    //}
}

void ACPP_GameMode::PlayerSetup(APlayerController pcontroller)
{
}
