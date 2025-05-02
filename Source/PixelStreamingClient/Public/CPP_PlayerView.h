// Private/CPP_PlayerView.cpp

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Engine/TextureRenderTarget2D.h"
#include "CPP_PlayerView.generated.h"

/**
 * 
 */
UCLASS()
class PIXELSTREAMINGCLIENT_API UCPP_PlayerView : public UUserWidget
{
	GENERATED_BODY()
	
public:
    UFUNCTION(BlueprintCallable)
    void SetRenderTargetTexture(UTextureRenderTarget2D* InRenderTarget);

protected:
    UPROPERTY(meta = (BindWidget))
    class UImage* RenderImage;
};
