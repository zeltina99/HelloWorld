#pragma once
#include "Animal.h"

class Shark : public Animal
{
public:
	void Swim();	// 상어만 하는 함수
public:
	Shark() = default;
	Shark(std::string InName)
		: Animal(InName)
	{

	}


};

