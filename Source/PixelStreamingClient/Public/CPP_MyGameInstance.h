// Private/CPP_MyGameInstance.cpp

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "CPP_MyGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class PIXELSTREAMINGCLIENT_API UCPP_MyGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	UCPP_MyGameInstance();
	void SpawnPlayer(int num);

};
