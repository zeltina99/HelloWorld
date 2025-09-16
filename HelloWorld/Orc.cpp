#include "Orc.h"
#include <random>

void Orc::Berserk()
{
	printf("[%s]가 일정 확률로 고유스킬 [광폭화]를 시전합니다.\n", Name.c_str());
	int EventNumber = (rand() % 2) + 1;
	switch (EventNumber)
	{
	case 1:
	{
		printf("[%s] : [광폭화]를 시전하여 공격력이 2배가 되었습니다.\n", Name.c_str());
		SetAttackPower(AttackPower + AttackPower);
		printf("공격력 : [%d]\n", AttackPower);
	}
		break;
	case 2:
		printf("[%s] : [광폭화]를 시전하였지만 실패했습니다.\n", Name.c_str());
		break;
	default:
		//ERROR!!!
		break;
	}
}
