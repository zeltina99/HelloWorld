#include "Hawk.h"

void Hawk::Move()
{
	//Animal::Move();	// 부모인 Animal의 Move 실행하기
	if (Energy < 0.1f)
	{
		printf("[%s] 동물이 힘이 없어서 움직일 수 없습니다.\n", Name.c_str());
	}
	else
	{
		printf("[%s] : 날아다닙니다.\n", Name.c_str());
		SetEnergy(Energy - 0.1f);
		printf("0.1의 에너지를 소모하여 현재[%.2f]에너지가 남아 있습니다.\n", Energy);
	}
}

void Hawk::MakeSound()
{
	printf("빼액!\n");
	Animal::MakeSound();
}

void Hawk::Fly()
{
	printf("[%s]가 난다요.\n", Name.c_str());
}

void Hawk::Battle()
{
	printf("[%s]가 부리로 공격한다.", Name.c_str());
}
