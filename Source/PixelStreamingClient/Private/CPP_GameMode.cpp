/*  ����cpp�� GameMode ���������ꂽ�Ƃ��� MyGameInstance ��
    SpawnPlayer ���Ăяo�������ƁA�v���C���[�̏���z��Ŏ擾�A
    �v���C���[�� StartPlayerStreaming ���ĂԁB*/

#include "CPP_GameMode.h"
#include "CPP_MyCharacter.h"
#include "CPP_PlayerView.h"
#include "CPP_MyGameInstance.h"
#include "CPP_MyPlayerController.h"
#include "Kismet/GameplayStatics.h"

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


    PlayerControllerClass = ACPP_MyPlayerController::StaticClass();
}

void ACPP_GameMode::BeginPlay()
{
    // �v���C���[���X�|�[��
    UCPP_MyGameInstance* gameinstance = Cast<UCPP_MyGameInstance>(GetWorld()->GetGameInstance());
    gameinstance->SpawnPlayer(1);

    // ���[���h�ɂ���v���C���[��z��Ŏ擾
    TArray<AActor*> FoundCharacters;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACharacter::StaticClass(), FoundCharacters);

    // �v���C���[�z���for��
    for (int i = 0;i < FoundCharacters.Num(); i++)
    {
        AActor* Actor = FoundCharacters[i];
        ACPP_MyCharacter* PlayerChar = Cast<ACPP_MyCharacter>(Actor);
        if (PlayerChar)
        {
            // PlayerChar�ɃA�^�b�`����Ă���SceneCapture2D���擾
            USceneCaptureComponent2D* CaptureComp = PlayerChar->PlayerSceneCapture;
            // PixelStreaming�ŃX�g���[�~���O�J�n
            PlayerChar->StartPlayerStreaming(i);
        }
    }


}