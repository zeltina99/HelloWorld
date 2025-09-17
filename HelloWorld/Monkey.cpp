#include "Monkey.h"

void Monkey::Climb()
{
	printf("[%s]가 나무에 올라갑니다.\n", Name.c_str());
	SetEnergy(Energy - 0.1f);
	printf("[%s]의 에너지가 10%% 소모하였습니다.\n", Name.c_str());
}

void Monkey::Move()
{
	if (Energy < 0.1f)
	{
		printf("[%s] 동물이 힘이 없어서 움직일 수 없습니다.\n", Name.c_str());
	}
	else
	{
		printf("[%s] 동물이 움직입니다.\n", Name.c_str());
		SetEnergy(Energy - 0.1f);
		printf("0.1의 에너지를 소모하여 현재[%.2f]에너지가 남아 있습니다.\n", Energy);
	}

	//Animal::Move();
}

void Monkey::MakeSound()
{
	printf("우끼끼!\n");
	Animal::MakeSound();
}
