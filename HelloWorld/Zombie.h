#pragma once
#include "Monster.h"

class Zombie : public Monster
{
public:
	void Undead();
public:
	Zombie() = default;
	Zombie(std::string InName)
		: Monster(InName)
	{

	}

};

