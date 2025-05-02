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
    // 横並びのコンテナ
    UPROPERTY(meta = (BindWidget))
    UHorizontalBox* HorizontalBox;

    // RenderTargetをUIにセットする関数
    void SetRenderTargetTexture(UTextureRenderTarget2D* InRenderTarget);
};
