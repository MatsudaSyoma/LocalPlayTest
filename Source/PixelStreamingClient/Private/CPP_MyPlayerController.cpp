// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_MyPlayerController.h"
#include "CPP_MyCharacter.h"
#include "CPP_GameMode.h"
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

    UInputAction* LoadedAction = Cast<UInputAction>(
        StaticLoadObject(UInputAction::StaticClass(), nullptr,
            TEXT("/Game/ThirdPerson/Input/Actions/IA_ChangePlayer.IA_ChangePlayer")));

    if (LoadedAction)
    {
        ChangeAction = LoadedAction;
    }

    LoadedAction = Cast<UInputAction>(
        StaticLoadObject(UInputAction::StaticClass(), nullptr,
            TEXT("/Game/ThirdPerson/Input/Actions/IA_LeftClick.IA_LeftClick")));
    if (LoadedAction)
    {
        LeftClickAction = LoadedAction;
    }

    LoadedAction = Cast<UInputAction>(
        StaticLoadObject(UInputAction::StaticClass(), nullptr,
            TEXT("/Game/ThirdPerson/Input/Actions/IA_MouseWheel.IA_MouseWheel")));
    if (LoadedAction)
    {
        MouseWheelAction = LoadedAction;
    }
    SetupInputComponent();
}

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
    if (GetHitResultUnderCursor(ECC_Visibility, false, Hit))
    {
       
        ACPP_MyCharacter* PlayerChar = Cast<ACPP_MyCharacter>(GetPawn());
        PlayerChar->SetWidgetInteractionHit(Hit);
    }


}

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
    Possess(PlayerChar);

}

void ACPP_MyPlayerController::HandlePressLeftClick(const FInputActionValue& Value)
{
    ACPP_MyCharacter* PlayerChar = Cast<ACPP_MyCharacter>(GetPawn());
    PlayerChar->PressPointer(EKeys::LeftMouseButton);
}

void ACPP_MyPlayerController::HandleReleaseLeftClick(const FInputActionValue& Value)
{
    ACPP_MyCharacter* PlayerChar = Cast<ACPP_MyCharacter>(GetPawn());
    PlayerChar->ReleasePointer(EKeys::LeftMouseButton);
}

void ACPP_MyPlayerController::HandleMouseWheel(const FInputActionValue& Value)
{
    float val = Value.Get<float>();
    ACPP_MyCharacter* PlayerChar = Cast<ACPP_MyCharacter>(GetPawn());
    PlayerChar->ScrollWheel(val);
}
