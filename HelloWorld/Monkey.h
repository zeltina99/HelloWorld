#pragma once
#include "Animal.h"

class Monkey : public Animal
{
public:
	void Climb();	// 원숭이만 쓰는 함수
	virtual void Move() override;
	virtual void MakeSound() override;
public:
	Monkey() = default;
	Monkey(std::string InName)
		: Animal(InName)
	{

	}
	virtual ~Monkey() {};

};

