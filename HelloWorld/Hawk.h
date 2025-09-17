#pragma once
#include "Animal.h"
#include "IFlyable.h"
#include "IBattle.h"
class Hawk : public Animal, public IFlyable, public IBattle
{
public:
	virtual void Move() override;
	virtual void MakeSound() override;
	virtual void Fly() override;
	virtual void Battle() override;
	
public:
	Hawk() = default;
	Hawk(std::string InName)
		: Animal(InName)
	{
	}
	virtual ~Hawk() {};
};

