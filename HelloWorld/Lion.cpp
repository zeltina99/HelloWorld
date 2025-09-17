#include "Lion.h"
#include <stdio.h>

void Lion::Hunt()
{
	printf("[%s]가 사냥을 합니다.\n", Name.c_str());
	SetEnergy(Energy - 0.5f);
	printf("[%s] : 에너지가 50%% 감소합니다.\n", Name.c_str());
}

void Lion::Move()
{
	printf("[%s]가 뛰어갑니다,\n", Name.c_str());
	Animal::Move();
}

void Lion::MakeSound()
{
	printf("으르렁!\n");
	Animal::MakeSound();
}