/*このcppは、SetRenderTargetTexture 関数があり、
  引数 UTextureRenderTarget2D を RenderImage で描画する*/

#include "CPP_PlayerView.h"
#include "Components/Image.h"

// UTextureRenderTarget2D を RenderImage で描画
void UCPP_PlayerView::SetRenderTargetTexture(UTextureRenderTarget2D* InRenderTarget)
{
    if (RenderImage && InRenderTarget)
    {
        // ブラシの作成
        FSlateBrush NewBrush;
        NewBrush.SetResourceObject(InRenderTarget);
        NewBrush.ImageSize = FVector2D(512, 512); // サイズは適宜変更

        // 明示的に DrawAs を Image に（重要）
        NewBrush.DrawAs = ESlateBrushDrawType::Image;

        // 画像UIに描画
        RenderImage->SetBrush(NewBrush);
    }

}