// ファイル名: CPP_PlayerName.h
// 作成日: 2025-05-09 
// 更新日: 2025-05-12 
// 更新者: 松田 祥眞
// 概要:   プレイヤー名前を描画するクラス。

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CPP_PlayerName.generated.h"
class UTextBlock;
/**
 * 
 */
UCLASS()
class PIXELSTREAMINGCLIENT_API UCPP_PlayerName : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget))
	UTextBlock* Name;
	
};
