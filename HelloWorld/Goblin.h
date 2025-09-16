#pragma once
#include "Monster.h"

class Goblin : public Monster
{
public:
	void Hide();	// 고블린은 교활하게 숨는다.


public:
	Goblin() = default;
	Goblin(std::string InName)
		: Monster(InName)
	{

	}





};

