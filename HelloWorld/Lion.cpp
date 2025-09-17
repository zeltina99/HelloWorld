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

void Lion::MakeSound()
{
	printf("으르렁!\n");
	Animal::MakeSound();
}

void Lion::Attack(ICanBattle* InTarget)
{
	InTarget->TakeDamage(AttackPower);
}

void Lion::TakeDamage(float InDamage)
{
	printf("[%.0f]의 피해를 입었다.", InDamage);
}
