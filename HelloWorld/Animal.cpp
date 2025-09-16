#include "Animal.h"

//Animal::Animal(const char* InName)
//	:Name(InName)
//{
//	printf("[%s] 동물이 생성되었습니다.\n", Name.c_str());
//}
//
//Animal::~Animal()
//{
//	printf("[%s] 동물이 삭제되었습니다.\n", Name.c_str());
//}

void Animal::Move()
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
	
	
}

void Animal::MakeSound()
{
	printf("[%s] 동물이 소리를 지릅니다.\n", Name.c_str());
}

void Animal::Eat()
{
	printf("[%s] 동물이 먹이를 먹습니다.\n", Name.c_str());
	SetEnergy(Energy + 0.1f);
	printf("0.1의 에너지를 회복하여 현재[%.2f]에너지가 남아 있습니다.\n", Energy);
	
}

void Animal::Sleep()
{
	printf("[%s] 동물이 잠을 잡니다.\n", Name.c_str());
	SetEnergy(1.0f);
	Age++;
	printf("에너지를 완전 회복하여 현재[%.2f]에너지가 있습니다.\n", Energy);
	printf("나이가 한살 늘어 났습니다 [%d]살.\n", Age);
}

void Animal::ShowInfo()
{
	printf("이름\t: %s\n", Name.c_str());
	printf("나이\t: %d\n", Age);
	printf("에너지\t: %.0f%%\n", Energy*100);
}
