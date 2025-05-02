// UCPP_PlayerView.cpp

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CPP_PlayerView.generated.h"

class UTextureRenderTarget2D;
class UImage;
class UHorizontalBox;

UCLASS()
class PIXELSTREAMINGCLIENT_API UCPP_PlayerView : public UUserWidget
{
    GENERATED_BODY()

public:
    // �����т̃R���e�i
    UPROPERTY(meta = (BindWidget))
    UHorizontalBox* HorizontalBox;

    // RenderTarget��UI�ɃZ�b�g����֐�
    void SetRenderTargetTexture(UTextureRenderTarget2D* InRenderTarget);
};
