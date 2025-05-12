// Private/CPP_GameMode.cpp

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CPP_GameMode.generated.h"

class UPixelStreamingStreamerVideoInputRenderTarget;
/**
 * 
 */
UCLASS()
class PIXELSTREAMINGCLIENT_API ACPP_GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ACPP_GameMode();

protected:
	virtual void BeginPlay() override;

private:

	TSubclassOf<AActor> ThirdPersonCharacter;

};
