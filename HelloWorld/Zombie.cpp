#include "Zombie.h"

void Zombie::Undead()
{
	printf("[%s]의 고유 스킬 [불사]를 사용했습니다.\n", Name.c_str());
	SetHealth(Health + 100);
	SetAttackPower(AttackPower - 5);
	printf("[불사]를 사용했기에 체력을 완전히 회복하는 대신 공격력을 5 잃습니다.\n");
}


