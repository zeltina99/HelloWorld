#include "Monkey.h"

void Monkey::Climb()
{
	printf("[%s]가 나무에 올라갑니다.\n", Name.c_str());
	SetEnergy(Energy - 0.1f);
	printf("[%s]의 에너지가 10%% 소모하였습니다.\n", Name.c_str());
}

void Monkey::Move()
{
	printf("[%s]가 춤을 추며 움직입니다,\n", Name.c_str());
	Animal::Move();
}

void Monkey::MakeSound()
{
	printf("우끼끼!\n");
	Animal::MakeSound();
}
