#pragma once
#include "Animal.h"

class Eagle : public Animal
{
public:
	void Fly();	//독수리 전용 함수
public:
	Eagle() = default;
	Eagle(std::string InName)
		: Animal(InName)
	{

	}

};

