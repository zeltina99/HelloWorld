#pragma once
#include "Animal.h"

class Shark : public Animal
{
public:
	void Swim();	// 상어만 하는 함수
	virtual void Move() override;		
	virtual void MakeSound() override;
public:
	Shark() = default;
	Shark(std::string InName)
		: Animal(InName)
	{

	}
	virtual ~Shark() {};


};

