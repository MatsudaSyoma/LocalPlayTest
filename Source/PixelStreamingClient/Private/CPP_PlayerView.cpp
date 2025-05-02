/*����cpp�́ASetRenderTargetTexture �֐�������A
  ���� UTextureRenderTarget2D �� RenderImage �ŕ`�悷��*/

#include "CPP_PlayerView.h"
#include "Components/Image.h"

// UTextureRenderTarget2D �� RenderImage �ŕ`��
void UCPP_PlayerView::SetRenderTargetTexture(UTextureRenderTarget2D* InRenderTarget)
{
    if (RenderImage && InRenderTarget)
    {
        // �u���V�̍쐬
        FSlateBrush NewBrush;
        NewBrush.SetResourceObject(InRenderTarget);
        NewBrush.ImageSize = FVector2D(512, 512); // �T�C�Y�͓K�X�ύX

        // �����I�� DrawAs �� Image �Ɂi�d�v�j
        NewBrush.DrawAs = ESlateBrushDrawType::Image;

        // �摜UI�ɕ`��
        RenderImage->SetBrush(NewBrush);
    }

}