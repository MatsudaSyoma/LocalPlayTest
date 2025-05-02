// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_PlayerView.h"
#include "Components/Image.h"

void UCPP_PlayerView::SetRenderTargetTexture(UTextureRenderTarget2D* InRenderTarget)
{
    if (RenderImage && InRenderTarget)
    {
        FSlateBrush NewBrush;
        NewBrush.SetResourceObject(InRenderTarget);
        NewBrush.ImageSize = FVector2D(512, 512); // �T�C�Y�͓K�X�ύX

        // �����I�� DrawAs �� Image �Ɂi�d�v�j
        NewBrush.DrawAs = ESlateBrushDrawType::Image;

        RenderImage->SetBrush(NewBrush);
    }

}