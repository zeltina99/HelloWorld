#pragma once
#include <string>

class Monster
{
public:
	void Attack();	// 공격하는 함수
	void MonsterInfo();	// 몬스터의 정보
	inline const float GetHealth() const { return Health; }
	inline const std::string& GetName() const { return Name; }
	inline const int GetAttackPower() const { return AttackPower; }
public:
	Monster() = default;
	Monster(std::string InName)
		: Name(InName)
	{

	}

protected:
	inline void SetHealth(float InHealth)
	{
		if (InHealth < 0)
		{
			Health = 0.0f;
		}
		else if (InHealth > 100.0f)
		{
			Health = 100.0f;
		}
		else
		{
			Health = InHealth;
		}
	}
	inline void SetName(std::string InName)
	{
		Name = InName;
	}
	inline void SetAttackPower(int InAttackPower)
	{
		if (InAttackPower < 5)
		{
			AttackPower = 5;
		}
		else if (InAttackPower > 30)
		{
			AttackPower = 30;
		}
		else
		{
			AttackPower = InAttackPower;
		}
	}



	std::string Name = "몬스터";
	float Health = 100.0f;	// 0.0f ~ 100.0f : 100.0f 일 때 100% 체력
	int AttackPower = 15;

};

