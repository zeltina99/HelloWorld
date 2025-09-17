#include "Eagle.h"

void Eagle::Fly()
{
	printf("[%s]가 하늘을 납니다.\n", Name.c_str());
	SetEnergy(Energy - 0.3f);
	printf("[%s] : 에너지가 30%% 소모하였습니다.\n", Name.c_str());
}

void Eagle::Move()
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

void Eagle::MakeSound()
{
	printf("크아악!\n");
	Animal::MakeSound();
}
