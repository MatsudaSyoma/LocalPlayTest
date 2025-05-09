// Private/CPP_MyCharacter.cpp

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/SceneCaptureComponent2D.h"
#include "PixelStreamingStreamerComponent.h"
#include "CPP_MyCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UTextureRenderTarget2D;
class UPixelStreamingStreamerVideoInputRenderTarget;
class UWidgetComponent;
UCLASS()
class PIXELSTREAMINGCLIENT_API ACPP_MyCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;


public:

	ACPP_MyCharacter();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USceneCaptureComponent2D* PlayerSceneCapture;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pixel Streaming", meta = (AllowPrivateAccess = "true"))
	UPixelStreamingStreamerComponent* StreamerComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pixel Streaming", meta = (AllowPrivateAccess = "true"))
	UTextureRenderTarget2D* RenderTarget;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pixel Streaming", meta = (AllowPrivateAccess = "true"))
	UPixelStreamingStreamerVideoInputRenderTarget* VideoInput;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UWidgetComponent* NameWidget;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FString name;


	void StartPlayerStreaming(FString id);
	void StopPlayerStreaming();

protected:

	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
public:	

	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};