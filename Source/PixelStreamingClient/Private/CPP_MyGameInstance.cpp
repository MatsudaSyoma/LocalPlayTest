/*����cpp�́A PlayerSpawn �֐�������B
�����Ɏw�肵����������Ƃ��̐������X�|�[������*/

#include "CPP_MyGameInstance.h"

UCPP_MyGameInstance::UCPP_MyGameInstance()
{
}

// �v���C���[���X�|�[��
void UCPP_MyGameInstance::SpawnPlayer(int num)
{
	for (int i = 0; i < num; i++)
	{
		UE_LOG(LogTemp, Log, TEXT("--------SpawnPlayer"));
		FString outerror;
		CreateLocalPlayer(-1, outerror, true);
	}
}
