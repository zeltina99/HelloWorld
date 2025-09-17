#pragma once
#include "Animal.h"
#include "ICanBattle.h"

// Lion은 Animal을 모두 상속 받았다.
class Lion : public Animal, public ICanBattle	
{
public:
	void Hunt();	// 사자 전용 함수
	virtual void Move() override;	// 사자는 Animal의 Move함수를 덮어쓸거다.
	virtual void MakeSound() override;

	virtual void Attack(ICanBattle* Target) override;
	virtual void TakeDamage(float InDamage) override;

public:
	// 생성자, 소멸자는 상속의 대상이 아니다.
	Lion() = default;
	Lion(std::string InName)
		: Animal(InName)	// 부모 클래스인 Animal에서 생성자 처리하는 것과 똑같이 해라.
	{

	}
	virtual ~Lion() {};

	float AttackPower = 10.0f;

};

