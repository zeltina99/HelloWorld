#include "Goblin.h"

void Goblin::Hide()
{
	printf("[%s] : 고유 스킬 [은신]을 사용했다.\n", Name.c_str());
	SetHealth(Health - 10.0f);
	printf("[은신]을 사용했기에 체력 10%%를 잃었다.\n");
}
