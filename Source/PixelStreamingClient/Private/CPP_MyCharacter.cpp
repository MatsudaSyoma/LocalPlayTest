/*このcppはデフォルトの Character に UTextureRenderTarget2D を生成して、
    プレイヤーが持つ USceneCaptureComponent2D の情報を生成した UTextureRenderTarget2D に代入。
    そして、 UPixelStreamingStreamerVideoInputRenderTarget を生成し、
	UTextureRenderTarget2D を UPixelStreamingStreamerComponent に割り当て、
	StartStreaming をする。*/
#include "CPP_MyCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/WidgetInteractionComponent.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Engine/TextureRenderTarget2D.h"
#include "PixelStreamingStreamerVideoInputRenderTarget.h"
#include "Components/WidgetComponent.h"
#include "Blueprint/UserWidget.h"
#include "CPP_PlayerName.h"
#include "Components/TextBlock.h"

// Sets default values
ACPP_MyCharacter::ACPP_MyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	PlayerSceneCapture = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("PlayerSceneCapture"));
	PlayerSceneCapture->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); 

	WidgetInteraction = CreateDefaultSubobject<UWidgetInteractionComponent>(TEXT("WidgetInteraction"));
	WidgetInteraction->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	WidgetInteraction->InteractionSource = EWidgetInteractionSource::Custom; // Camera does not rotate relative to arm

	StreamerComponent = CreateDefaultSubobject<UPixelStreamingStreamerComponent>(TEXT("PixelStreamer"));

	NameWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("NameWidget"));
	NameWidget->SetupAttachment(RootComponent);
	NameWidget->SetWidgetSpace(EWidgetSpace::World); // 3D空間に表示
	NameWidget->SetDrawSize(FVector2D(500.0f, 500.0f)); // ウィジェットのサイズ
	static ConstructorHelpers::FClassFinder<UUserWidget> WidgetClass(TEXT("/Game/ThirdPerson/WBP/WBP_PlayerName")); // パスは自分のUMGに合わせて
	if (WidgetClass.Succeeded())
	{
		NameWidget->SetWidgetClass(WidgetClass.Class);
	}
}

void ACPP_MyCharacter::StartPlayerStreaming(FString id)
{
    // PlayerCharにアタッチされているSceneCapture2Dを取得
    if (PlayerSceneCapture)
    {
        // RenderTargetを生成
		RenderTarget = NewObject<UTextureRenderTarget2D>(this);
		RenderTarget->RenderTargetFormat = RTF_RGBA8;
		RenderTarget->InitAutoFormat(1920, 1080);
		RenderTarget->UpdateResourceImmediate(true);

		if (RenderTarget)
		{
            // SceneCaptureにRenderTargetを割り当て
            PlayerSceneCapture->TextureTarget = RenderTarget;

            if (StreamerComponent)
            {
                VideoInput = NewObject<UPixelStreamingStreamerVideoInputRenderTarget>(this);

				if (VideoInput)
				{
					VideoInput->Target = RenderTarget;
					StreamerComponent->StreamerId = id;
					StreamerComponent->VideoInput = VideoInput;
					StreamerComponent->StartStreaming();	
				}
            }
		}
    }
}

void ACPP_MyCharacter::StopPlayerStreaming()
{
	StreamerComponent->StopStreaming();
}

// Called when the game starts or when spawned
void ACPP_MyCharacter::BeginPlay()
{
	Super::BeginPlay();	
}

void ACPP_MyCharacter::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	StopPlayerStreaming();
}

// Called every frame
void ACPP_MyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ACPP_MyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void ACPP_MyCharacter::SetWidgetInteractionHit(FHitResult hit)
{
	WidgetInteraction->SetCustomHitResult(hit);
}

void ACPP_MyCharacter::PressPointer(FKey key)
{
	WidgetInteraction->PressPointerKey(key);
}

void ACPP_MyCharacter::ReleasePointer(FKey key)
{
	WidgetInteraction->ReleasePointerKey(key);
}

void ACPP_MyCharacter::ScrollWheel(float val)
{
	WidgetInteraction->ScrollWheel(val);
}