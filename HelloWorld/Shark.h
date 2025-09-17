#pragma once
#include "Animal.h"
#include "ISwim.h"
#include "IBattle.h"

class Shark : public Animal, public ISwim, public IBattle
{
public:
	//void Swim();	// 상어만 하는 함수
	virtual void Move() override;		
	virtual void MakeSound() override;
	virtual void Swim() override;
	virtual void Battle() override;
public:
	Shark() = default;
	Shark(std::string InName)
		: Animal(InName)
	{

	}
	virtual ~Shark() {};


};

