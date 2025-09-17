#pragma once
#include <string>

class Animal
{
public:
	virtual void Move() = 0;		// Move는 가상함수다
	virtual void MakeSound();	// MakeSound는 가상함수다
	void Eat();			//먹으면->에너지가 증가
	void Sleep();		//잠을 자면->나이가 증가, 에너지가 완전 회복
	
	void ShowInfo();		//동물의 모든 정보를 출력
	
	// Getter/Setter
	// Energy는 외부에서는 읽기 전용이다.
	inline const float GetEnergy() const { return Energy; }
	
	inline const int GetAge() const { return Age; }

	inline const std::string& GetName() const { return Name; }
	
public:
	/*Animal(const char* InName);
	//~Animal();*/

	Animal() = default;
	Animal(std::string InName)
		: Name(InName)
	{
	}	// 짧은 경우는 함수의 구현이 헤더에 있어도 된다(자동 Inline 처리)
	virtual ~Animal() {};

protected:
	inline void SetEnergy(float InEnergy)
	{
		// Energy의 범위는 0.0f ~ 1.0f이다.
		if (InEnergy < 0)
		{
			Energy = 0.0f;
		}
		else if (InEnergy > 1.0f)
		{
			Energy = 1.0f;
		}
		else
		{
			Energy = InEnergy;
		}
	}
	inline void SetAge(int InAge)
	{
		Age = InAge;
	}
	inline void SetName(std::string InName)
	{
		Name = InName;
	}


	float Energy = 1.0f;	// 0.0f ~ 1.0f : 1.0f 일 때 100 %에너지
	std::string Name = "동물";
	int Age = 0;	// 나이

};

