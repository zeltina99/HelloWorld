#include "Day0912.h"
#include <stdio.h>
#include <fstream>

void Day0912_Struct()
{
	Enemy Goblin;
	printf("이름 : %s\n", Goblin.Name.c_str());
	printf("생명력 : %.1f\n", Goblin.Health);
	printf("공격력 : %.1f\n", Goblin.AttackPower);
	printf("보상 : %d Gold\n", Goblin.DropGold);
	printf("\n");
	
	// 1. 고블린 동적할당 받아보기(멤버 변수 4개도 조절하기)
	Enemy* pGoblin = new Enemy();
	printf("이름 : %s\n", pGoblin->Name.c_str());
	printf("생명력 : %.1f\n", pGoblin->Health = 50.0f);
	printf("공격력 : %.1f\n", pGoblin->AttackPower = 15.0f);
	printf("보상 : %d Gold\n", pGoblin->DropGold = 200);
	printf("\n");
	delete pGoblin;
	pGoblin = nullptr;
	
	// 2. 다른 구조체 만들어보기(ex:아이템, 무기, 방어구 등등)
	Item Sword;
	printf("이름 : %s\n", Sword.Name.c_str());
	printf("공격력 :%1.f\n", Sword.AttackPower);
	printf("가격 : %d\n", Sword.PriceGold);
	printf("\n");

	Item* pArmor = new Item();
	printf("이름 : %s\n", pArmor->Name1.c_str());
	printf("체력 : %.1f\n", pArmor->Health = 200.0f);
	printf("가격 : %d\n", pArmor->PriceGold = 300);

	delete pArmor;
	pArmor = nullptr;
}