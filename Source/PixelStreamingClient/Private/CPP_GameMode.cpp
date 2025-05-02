// Fill out your copyright notice in the Description page of Project Settings.


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
	FString CharacterPath = "/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter.BP_ThirdPersonCharacter_c";
	static ConstructorHelpers::FObjectFinder<UClass> CharacterBP(*CharacterPath);
	ThirdPersonCharacter = CharacterBP.Object;
	if (ThirdPersonCharacter != nullptr)
	{
		DefaultPawnClass = ThirdPersonCharacter;
	}

	// ���̃N���X�Ɋ֘A����E�B�W�F�b�g���G�f�B�^�Őݒ�ł���悤�ɂ���
	static ConstructorHelpers::FClassFinder<UUserWidget> PlayerWidget(TEXT("/Game/ThirdPerson/WBP/WBP_PlayerView"));
	if (PlayerWidget.Succeeded())
	{
		PlayerWidgetClass = PlayerWidget.Class;
	}
}

void ACPP_GameMode::BeginPlay()
{
	UCPP_MyGameInstance* gameinstance = Cast<UCPP_MyGameInstance>(GetWorld()->GetGameInstance());

	gameinstance->SpawnPlayer(1);
	
    // �v���C���[��Controller���擾
    APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
    if (PlayerController)
    {
        ACPP_MyCharacter* PlayerChar = Cast<ACPP_MyCharacter>(PlayerController->GetPawn());
        if (PlayerChar)
        {
            // PlayerChar�ɃA�^�b�`����Ă���SceneCapture2D���擾
            USceneCaptureComponent2D* CaptureComp = PlayerChar->PlayerSceneCapture;
            if (CaptureComp)
            {
                // RenderTarget�𐶐�
                UTextureRenderTarget2D* RenderTarget = NewObject<UTextureRenderTarget2D>(this);
                RenderTarget->AddToRoot(); // �ꎞ�I�ȃe�X�g�p�r
                RenderTarget->RenderTargetFormat = RTF_RGBA8;
                RenderTarget->InitAutoFormat(512, 512);
                RenderTarget->UpdateResourceImmediate(true);

                // SceneCapture��RenderTarget�����蓖��
                CaptureComp->TextureTarget = RenderTarget;

                // ��������RenderTarget��UI�ɓn������
                UCPP_PlayerView* PlayerWidget = CreateWidget<UCPP_PlayerView>(GetWorld(), PlayerWidgetClass);
                if (PlayerWidget)
                {
                    UCPP_PlayerView* PlayerView = Cast<UCPP_PlayerView>(PlayerWidget);
                    if (PlayerView)
                    {

                        PlayerView->SetRenderTargetTexture(RenderTarget);  // Blueprint�֐����Ăяo��
                        PlayerWidget->AddToViewport();
                    }
                }
            }
        }
    }
}

void ACPP_GameMode::PlayerSetup(APlayerController pcontroller)
{
}
