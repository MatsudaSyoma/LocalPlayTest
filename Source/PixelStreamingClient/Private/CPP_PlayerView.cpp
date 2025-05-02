/*����cpp�́A xSetRenderTargetTexture �֐�������A
  ���� UTextureRenderTarget2D �� RenderImage �ŕ`�悷��*/

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
        // �V����Image���쐬
        UImage* NewImage = NewObject<UImage>(this);
        if (NewImage)
        {
            // �摜�̃u���V���쐬
            FSlateBrush NewBrush;
            NewBrush.SetResourceObject(InRenderTarget);
            NewBrush.ImageSize = FVector2D(512, 512); // �T�C�Y�͓K�X�ύX
            NewBrush.DrawAs = ESlateBrushDrawType::Image;

            // �摜UI�ɐݒ�
            NewImage->SetBrush(NewBrush);

            // �����т̃{�b�N�X�ɒǉ�
            UHorizontalBoxSlot* NewSlot = Cast<UHorizontalBoxSlot>(NewImage->Slot);
            HorizontalBox->AddChild(NewImage);
        }
    }
}
