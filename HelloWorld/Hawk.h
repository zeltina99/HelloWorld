#pragma once
#include "Animal.h"
class Hawk : public Animal
{
public:
	virtual void Move() override;

public:
	Hawk() = default;
	Hawk(std::string InName)
		: Animal(InName)
	{
	}
	virtual ~Hawk() {};
};

