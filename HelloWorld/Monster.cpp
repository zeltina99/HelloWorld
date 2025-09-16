#include "Monster.h"

void Monster::Attack()
{
	printf("[%s]가 공격합니다.\n", Name.c_str());
	printf("[%d]의 데미지가 들어왔습니다.\n", AttackPower);
}

void Monster::MonsterInfo()
{
	printf("이름\t: %s\n", Name.c_str());
	printf("공격력\t: %d\n", AttackPower);
	printf("체력\t: %.0f%%\n", Health);
}
