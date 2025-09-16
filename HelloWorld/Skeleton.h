#pragma once
#include "Monster.h"

class Skeleton : public Monster
{
public:
	void Reconstitution();	// 스켈레톤의 고유 스킬 재구성
public:
	Skeleton() = default;
	Skeleton(std::string InName)
		: Monster(InName)
	{

	}

};

