#include "Eagle.h"

void Eagle::Fly()
{
	printf("[%s]가 하늘을 납니다.\n", Name.c_str());
	SetEnergy(Energy - 0.3f);
	printf("[%s] : 에너지가 30%% 소모하였습니다.\n", Name.c_str());
}

void Eagle::Move()
{
	printf("[%s]가 공중제비를 돕니다.\n", Name.c_str());
	Animal::Move();
}

void Eagle::MakeSound()
{
	printf("크아악!\n");
	Animal::MakeSound();
}
