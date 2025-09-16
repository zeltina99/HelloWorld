#pragma once
#include "Monster.h"

class Orc : public Monster
{
public:
	void Berserk();	// 오크 고유의 광폭화 스킬
public:	
	Orc() = default;
	Orc(std::string InName)
		: Monster(InName)
	{

	}

};

