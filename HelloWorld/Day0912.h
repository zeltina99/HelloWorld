#pragma once
#include <string>

// 구조체는 헤더에 선언한다.
struct Enemy
{
	//멤버 변수
	std::string Name = "고블린";
	float Health = 100.0f;
	float AttackPower = 10.0f;
	int DropGold = 100;
};

void Day0912_Struct();
