/*このcppは、 xSetRenderTargetTexture 関数があり、
  引数 UTextureRenderTarget2D を RenderImage で描画する*/

#include "CPP_PlayerView.h"
#include "Components/Image.h"
#include "Components/HorizontalBox.h"
#include "Components/HorizontalBoxSlot.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Components/SlateWrapperTypes.h"

void UCPP_PlayerView::SetRenderTargetTexture(UTextureRenderTarget2D* InRenderTarget)
{
    if (HorizontalBox && InRenderTarget)
    {
        // 新しいImageを作成
        UImage* NewImage = NewObject<UImage>(this);
        if (NewImage)
        {
            // 画像のブラシを作成
            FSlateBrush NewBrush;
            NewBrush.SetResourceObject(InRenderTarget);
            NewBrush.ImageSize = FVector2D(512, 512); // サイズは適宜変更
            NewBrush.DrawAs = ESlateBrushDrawType::Image;

            // 画像UIに設定
            NewImage->SetBrush(NewBrush);

            // 横並びのボックスに追加
            UHorizontalBoxSlot* NewSlot = Cast<UHorizontalBoxSlot>(NewImage->Slot);
            HorizontalBox->AddChild(NewImage);
        }
    }
}
