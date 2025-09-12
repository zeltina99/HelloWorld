#define _CRT_SECURE_NO_WARNINGS
#include <fstream>
#include <stdio.h>
#include <string>
#include <random>
#include <iostream>
#include "Day0909.h"
#include "Day0910.h"
#include "Day0911.h"
#include "Day0912.h"

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
	pGoblin->Name = "고블린 2호";
	pGoblin->Health = static_cast<float>(rand() % 100 + 50);	// 50~150
	pGoblin->AttackPower = static_cast<float>(rand() % 10 + 5);	// 5~15
	pGoblin->DropGold = static_cast<int>(pGoblin->Health * pGoblin->AttackPower);
	PrintEnemy(pGoblin);
	delete pGoblin;
	pGoblin = nullptr;
	
	// 2. 다른 구조체 만들어보기(ex:아이템, 무기, 방어구 등등)
	Weapon Sword;
	Sword.Name = "강철검";
	Sword.Desc = "튼튼하다.";
	Sword.AttackPower = 15.0f;
	Sword.Price = 200;

	//Enemy Goblins[3];
	Enemy* Goblins = nullptr;
	Goblins = new Enemy[3];
	for (int i = 0; i < 3; i++)
	{
		Goblins[i].Name = "고블린" + std::to_string(i + 1) + "호";	// std::to_string : 문자열이 아닌것을 string으로 변경해주는 함수
		PrintEnemy(&Goblins[i]);
	}
	delete[] Goblins;
	Goblins = nullptr;

	Enemy NamedGoblin("보스 고블린");
	PrintEnemy(&NamedGoblin);

	Enemy* pModiGoblin = new Enemy("모디 고블린", 5.0f);
	PrintEnemy(pModiGoblin);

	delete pModiGoblin;
	pModiGoblin = nullptr;

	Enemy CopyGoblin(NamedGoblin);	// 복사 생성자
	PrintEnemy(&CopyGoblin);


}

void Day0912_OperatorOverloading()
{
	Enemy Goblin1("고블린1호");
	Enemy Goblin2("고블린2호");
	Enemy Goblin3("고블린3호");
	Enemy Goblin4("고블린4호");
	

	Enemy FusionGoblin = Goblin1 + Goblin2;
	PrintEnemy(&FusionGoblin);

	Enemy DivisionGoblin = Goblin1 - Goblin2;
	PrintEnemy(&DivisionGoblin);

	Goblin4 = Goblin3 * 5.0f;
	PrintEnemy(&Goblin4);
	printf("\n");
}

void Practice0912_01()
{
/*
	- 위치 표현용 구조체 Position 만들기
		 ## 요구사항
		① 구조체 이름은 Position으로 한다.
		② 멤버 변수로 int x, int y를 가진다.
		③ 두 멤버 변수는 기본값이 0이어야 한다.
		④ 두 개의 정수 값을 받아서 멤버 변수에 할당하는 생성자를 만든다.
		⑤ + 연산자를 오버로딩하여 두 Position 객체를 더했을 때, 각각의 멤버끼리 더한 결과를 갖는 새로운 Position 객체가 생성되도록 한다.
		⑥ 연산자도 오버로딩하여 두 Position 객체를 뺐을 때, 각각의 멤버끼리 뺀 결과를 갖는 새로운 Position 객체가 생성되도록 한다.

*/

	Position p1(2, 3);
	Position p2(5, 1);

	Position sum = p1 + p2;
	Position diff = p1 - p2;

	printf("sum.x == %d, ", sum.X);
	printf("sum.y == %d\n", sum.Y);
	printf("diff.x == %d, ", diff.X);
	printf("diff.y == %d\n", diff.Y);

}

void Practice0912_02()
{
/*
	- 변경된 미로 탈출 게임에 기능 추가하기
		① 플레이어의 위치, HP를 저장하는 구조체 만들고 적용하기
		② 적의 HP, 공격력, 보상이 들어있는 구조체 만들고 적용하기
		③ 적 생성시 HP와 공격력과 보상을 랜덤하게 설정하기
		④ 이동시 확률로 HP 회복하던 것을 보상을 사용하여 회복하는 것으로 수정하기

*/
	ClearMaze();

	PlayerStatus Player;

	EnemyStatus Enemy;
	Enemy.EnemyHealth = static_cast<float>(rand() % 21 + 15);     // 적 체력 15 ~ 35
	Enemy.EAttackPower = static_cast<float>(rand() % 11 + 5);      // 적 공격력 5 ~ 15
	Enemy.DropGold = rand() % 51 + 50;							// 적 보상 50 ~ 100


	
}

void PrintEnemy(const Enemy* pEnemy)
{
	printf("이름 : %s\n", pEnemy->Name.c_str());
	printf("생명력 : %.1f\n", pEnemy->Health);
	printf("공격력 : %.1f\n", pEnemy->AttackPower);
	printf("보상 : %d Gold\n", pEnemy->DropGold);
}



/*
PlayerStatus* pPlayer = new PlayerStatus();
		{
			pPlayer->PAttackPower = static_cast<float>(rand() % 10 + 5);		// 5~15 정도의 플레이어의 공격력
			pPlayer->PlayerHealth = 100;
		}

		EnemyStatus* pGoblin = new EnemyStatus();
		{
			pGoblin->EnemyHealth = static_cast<float>(rand() % 10 + 20);	// 20~30 정도의 적의 체력
			pGoblin->EAttackPower = static_cast<float>(rand() % 10 + 5);		// 5~15 정도의 적의 공격력
			pGoblin->DropGold = static_cast<int>(rand() % 100 + 50);		// 50~150 정도의 골드
		}

		int EventNumber = rand() % 10;	// 0~9까지 뽑기
		if ((EventNumber >= 8) && (EventNumber <= 9))	// 20% 확률로 전투가 발생함.
		{
			printf("적을 만났습니다.\n");
			while (PlayerHealth > 0) && (EnemyHealth > 0))
			{
				printf("적의 체력은 [%d]입니다.\n", EnemyHealth);
				EnemyHealth -= PAttackPower;
				if (EnemyHealth <= 0)
				{
					printf("적이 죽었습니다.\n");
					break;
				}
				PlayerHealth -= EAttackPower;
				if (PlayerHealth <= 0)
				{
					printf("게임 패배.\n");
					delete pPlayer;
					pPlayer = nullptr;
					delete pGoblin;
					pGoblin = nullptr;
					return;
				}
			}
		}
		delete pPlayer;
			pPlayer = nullptr;
			delete pGoblin;
			pGoblin = nullptr;


*/