#include "Skeleton.h"
#include <random>

void Skeleton::Reconstitution()
{
	printf("[%s]의 고유 스킬 [재구성]을 사용합니다.\n", Name.c_str());
	int EventAttackPower = (rand() % 30) + 1;	// 1 ~ 30 사이
	int EventHealth = (rand() % 51) + 50;		// 50 ~ 100 사이
	SetAttackPower(AttackPower = EventAttackPower);
	SetHealth(Health = EventHealth);
	printf("[재구성]의 의해서 공격력[%d] 체력[%d]가 되었습니다.\n", AttackPower, static_cast<int>(Health));

}
