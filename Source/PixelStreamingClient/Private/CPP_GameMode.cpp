/*  ����cpp�� GameMode ���������ꂽ�Ƃ��� MyGameInstance ��
    SpawnPlayer ���Ăяo�������ƁA�v���C���[�̏���z��Ŏ擾�A
    Widget �𐶐����A GameMode �� AddToViewport ���s���B
    �擾���ꂽ�v���C���[�� UTextureRenderTarget2D �𐶐����āA
    �v���C���[������ USceneCaptureComponent2D �̏��𐶐����� UTextureRenderTarget2D �ɑ���B
    �����āA UCPP_PlayerView �Ƃ���Widget�𐶐����A���ꂪ���֐� SetRenderTargetTexture(RenderTarget)��
    �Ăяo���āAWidget��Image�� UTextureRenderTarget2D �̏��𑗂�B*/

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
    // BP�̃v���C���[���擾�ADefaultPawnClass �ɐݒ�
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
    // �v���C���[���X�|�[��
    UCPP_MyGameInstance* gameinstance = Cast<UCPP_MyGameInstance>(GetWorld()->GetGameInstance());
    gameinstance->SpawnPlayer(1);

    // ���[���h�ɂ���v���C���[��z��Ŏ擾
    TArray<AActor*> FoundCharacters;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACharacter::StaticClass(), FoundCharacters);

    // �E�B�W�F�b�g�쐬
    UCPP_PlayerView* PlayerWidget = CreateWidget<UCPP_PlayerView>(GetWorld(), PlayerWidgetClass);
    if (PlayerWidget)
    {
        PlayerWidget->AddToViewport();

        // �v���C���[�z���for��
        for (AActor* Actor : FoundCharacters)
        {
            ACPP_MyCharacter* PlayerChar = Cast<ACPP_MyCharacter>(Actor);
            if (PlayerChar)
            {
                // PlayerChar�ɃA�^�b�`����Ă���SceneCapture2D���擾
                USceneCaptureComponent2D* CaptureComp = PlayerChar->PlayerSceneCapture;
                if (CaptureComp)
                {
                    // RenderTarget�𐶐�
                    UTextureRenderTarget2D* RenderTarget = NewObject<UTextureRenderTarget2D>(this);
                    RenderTarget->RenderTargetFormat = RTF_RGBA8;
                    RenderTarget->InitAutoFormat(512, 512);
                    RenderTarget->UpdateResourceImmediate(true);

                    // SceneCapture��RenderTarget�����蓖��
                    CaptureComp->TextureTarget = RenderTarget;

                    // PlayerWidget��RenderTarget��n��
                    PlayerWidget->SetRenderTargetTexture(RenderTarget);
                }
            }
        }
    }
}
