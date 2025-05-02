/*このcppは、 PlayerSpawn 関数がある。
引数に指定した数を入れるとその数だけスポーンする*/

#include "CPP_MyGameInstance.h"

UCPP_MyGameInstance::UCPP_MyGameInstance()
{
}

// プレイヤーをスポーン
void UCPP_MyGameInstance::SpawnPlayer(int num)
{
	for (int i = 0; i < num; i++)
	{
		UE_LOG(LogTemp, Log, TEXT("--------SpawnPlayer"));
		FString outerror;
		CreateLocalPlayer(-1, outerror, true);
	}
}
