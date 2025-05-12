// ファイル名: CPP_MyPlayerController.cpp
// 作成日: 2025-05-02 
// 更新日: 2025-05-12 
// 更新者: 松田 祥眞
// 概要:   プレイヤーの操作を取得、保存するクラス。

#include "CPP_MyPlayerController.h"
#include "CPP_MyCharacter.h"
#include "CPP_GameMode.h"
#include "Kismet/GameplayStatics.h"

void ACPP_MyPlayerController::BeginPlay()
{
    Super::BeginPlay();
    PrimaryActorTick.bCanEverTick = true;

    UInputMappingContext* LoadedIMC = Cast<UInputMappingContext>(
        StaticLoadObject(UInputMappingContext::StaticClass(), nullptr,
            TEXT("/Game/ThirdPerson/Input/IMC_Default.IMC_Default")));

    if (LoadedIMC)
    {
        DefaultMappingContext = LoadedIMC;

        if (ULocalPlayer* LocalPlayer = GetLocalPlayer())
        {
            if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
                ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(LocalPlayer))
            {
                Subsystem->AddMappingContext(DefaultMappingContext, 0);
            }
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to load IMC from path: /Game/ThirdPerson/Input/IMC_Default"));
    }

    // ChangeActionの取得
    UInputAction* LoadedAction = Cast<UInputAction>(
        StaticLoadObject(UInputAction::StaticClass(), nullptr,
            TEXT("/Game/ThirdPerson/Input/Actions/IA_ChangePlayer.IA_ChangePlayer")));

    if (LoadedAction)
    {
        ChangeAction = LoadedAction;
    }

    // LeftClickActionの取得
    LoadedAction = Cast<UInputAction>(
        StaticLoadObject(UInputAction::StaticClass(), nullptr,
            TEXT("/Game/ThirdPerson/Input/Actions/IA_LeftClick.IA_LeftClick")));
    if (LoadedAction)
    {
        LeftClickAction = LoadedAction;
    }

    // MouseWheelActionの取得
    LoadedAction = Cast<UInputAction>(
        StaticLoadObject(UInputAction::StaticClass(), nullptr,
            TEXT("/Game/ThirdPerson/Input/Actions/IA_MouseWheel.IA_MouseWheel")));
    if (LoadedAction)
    {
        MouseWheelAction = LoadedAction;
    }
    SetupInputComponent();
}

// Action値の割り当て
void ACPP_MyPlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();

    if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(InputComponent))
    {
        if (ChangeAction)
        {
            EnhancedInput->BindAction(ChangeAction, ETriggerEvent::Started, this, &ACPP_MyPlayerController::HandleChangePlayer);
        }

        if (LeftClickAction)
        {
            EnhancedInput->BindAction(LeftClickAction, ETriggerEvent::Started, this, &ACPP_MyPlayerController::HandlePressLeftClick);
            EnhancedInput->BindAction(LeftClickAction, ETriggerEvent::Completed, this, &ACPP_MyPlayerController::HandleReleaseLeftClick);
        }

        if (MouseWheelAction)
        {
            EnhancedInput->BindAction(MouseWheelAction, ETriggerEvent::Triggered, this, &ACPP_MyPlayerController::HandleMouseWheel);
        }
    }
}

void ACPP_MyPlayerController::Tick(float DeltaSeconds)
{
    FHitResult Hit;
    // マウスカーソルの位置取得
    if (GetHitResultUnderCursor(ECC_Visibility, false, Hit))
    {
       
        ACPP_MyCharacter* PlayerChar = Cast<ACPP_MyCharacter>(GetPawn());
        if (PlayerChar)
        {
            // プレイヤーに割り当て
            PlayerChar->SetWidgetInteractionHit(Hit);
        }

    }


}

// キャラチェンジキーを押したときの処理
// 順番にキャラを取得し、コントローラーを切り替える
void ACPP_MyPlayerController::HandleChangePlayer(const FInputActionValue& Value)
{
    changeNum++;
    // ワールドにいるプレイヤーを配列で取得
    TArray<AActor*> FoundCharacters;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACharacter::StaticClass(), FoundCharacters);

    if (changeNum >= FoundCharacters.Num())
    {
        changeNum = 0;
    }

    ACPP_MyCharacter* PlayerChar = Cast<ACPP_MyCharacter>(FoundCharacters[changeNum]);
    if (PlayerChar)
    {
        // コントローラーをキャラに割り当て
        Possess(PlayerChar);
    }

}

// 左マウスボタンを押したときの処理
void ACPP_MyPlayerController::HandlePressLeftClick(const FInputActionValue& Value)
{
    ACPP_MyCharacter* PlayerChar = Cast<ACPP_MyCharacter>(GetPawn());
    if (PlayerChar)
    {
        PlayerChar->PressPointer(EKeys::LeftMouseButton);
    }
}

// 左マウスボタンを離したときの処理
void ACPP_MyPlayerController::HandleReleaseLeftClick(const FInputActionValue& Value)
{
    ACPP_MyCharacter* PlayerChar = Cast<ACPP_MyCharacter>(GetPawn());
    if (PlayerChar)
    {
        PlayerChar->ReleasePointer(EKeys::LeftMouseButton);
    }
}

// マウスホイールを転がしたときの処理
void ACPP_MyPlayerController::HandleMouseWheel(const FInputActionValue& Value)
{
    float val = Value.Get<float>();
    ACPP_MyCharacter* PlayerChar = Cast<ACPP_MyCharacter>(GetPawn());
    if (PlayerChar)
    {
        PlayerChar->ScrollWheel(val);
    }
}
