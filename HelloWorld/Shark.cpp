#include "Shark.h"

void Shark::Swim()
{
	printf("[%s]가 헤엄을 칩니다.\n", Name.c_str());
	SetEnergy(Energy - 0.2f);
	printf("[%s]의 에너지가 20%% 소모하였습니다.\n", Name.c_str());
}

void Shark::Move()
{
	printf("[%s]가 고속수영을 합니다.\n", Name.c_str());
	Animal::Move();
}

void Shark::MakeSound()
{
	printf("[%s]가 입을 벌려 소리를 지릅니다.\n", Name.c_str());
	Animal::MakeSound();
}
