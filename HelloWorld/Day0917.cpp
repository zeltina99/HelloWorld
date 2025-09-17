#include "Day0917.h"
#include "Lion.h"
#include "Hawk.h"
#include "Eagle.h"
#include "Shark.h"
#include "Monkey.h"
#include "TestSample.h"
#include "Shape.h"
#include <stdint.h>

void Day0917::TestPolymorphism()
{
	Lion* pLion = new Lion("사자");
	Hawk* pHawk = new Hawk("매");

	printf("사자 이동\n");
	pLion->Move();
	printf("매 이동\n");
	pHawk->Move();

	printf("동물 이동\n");
	Animal* pAnimal = pHawk;
	pAnimal->Move();	// Animal의 Move가 실행됨 -> 가상함수가 된 후에는 원래 클래스의 Move가 실행된다.
	pAnimal = pLion;
	pAnimal->Move();

	// C 스타일 캐스팅(위험)
	//Lion* pTempLion = (Lion*)pAnimal;
	//pTempLion->Hunt();
	//((Lion*)pAnimal)->Hunt();
	
	// C++ 스타일 캐스팅 중 하나
	//dynamic_cast : 런타임(실행중)에 이 주소가 실제 어떤 자식 클래스의 객체를 가리키고 있는지 안전하게 확인해주는 cast

	Lion* pTempLion = dynamic_cast<Lion*>(pAnimal);
	if (pTempLion == nullptr)
	{
		// pAnimal은 Lion*가 아니다.
	}
	else
	{
		// pAnimal에 저장된 주소는 Lion의 주소가 맞다.
		pTempLion->Hunt();
	}

	// pAnimal->Hunt();	// 사용 불가능

	delete pLion;
	pLion = nullptr;

	delete pHawk;
	pHawk = nullptr;
}

void Day0917::TestVirtualFuction()
{
	Parent* pParent = new Child();	// 가능
	delete pParent;
	pParent = nullptr;
}

void Day0917::TestPractice1()
{
	// 간단 실습
	// Animal*의 배열 만들기
	// 여러 종류의 동물을 넣기
	// 배열에 들어있는 모든 동물의 MakeSound 실행하기

	const int Size = 5;
	Animal* Zoo[Size];
	Zoo[0] = new Eagle("독수리");
	Zoo[1] = new Shark("상어");
	Zoo[2] = new Monkey("원숭이");
	Zoo[3] = new Lion("사자");
	Zoo[4] = new Hawk("매");

	for (int i = 0; i < Size; i++)
	{
		Zoo[i]->MakeSound();
		//Zoo[i]->Move();
	}

	for (int i = 0; i < Size; i++)
	{
		delete Zoo[i];
		Zoo[i] = nullptr;
	}
}

void Day0917::TestAbstractClass()
{
	//Shape* pShape = new Shape();

	// 간단 실습
	// Animal의 Move함수를 순수 가상 함수로 만들어서 Animal을 추상클래스로 만들기
	// 각 동물들의 Move는 별도로 다 구현하기

	const int Size = 5;
	Animal* Zoo[Size];
	Zoo[0] = new Eagle("독수리");
	Zoo[1] = new Shark("상어");
	Zoo[2] = new Monkey("원숭이");
	Zoo[3] = new Lion("사자");
	Zoo[4] = new Hawk("매");

	for (int i = 0; i < Size; i++)
	{
		//Zoo[i]->MakeSound();
		Zoo[i]->Move();
	}

	for (int i = 0; i < Size; i++)
	{
		delete Zoo[i];
		Zoo[i] = nullptr;
	}

}



void Day0917::TestEnumClass()
{
	enum Color
	{
		Red = 0,
		Green,
		Blue
	};
	enum Fruit
	{
		Apple = 0,
		Orange,
		Banana
	};
	/*enum TrafficLight
	{
		Red, Yellow, Green
	};*/	// 기존 enum은 범위가 전역이기 때문에 이름이 겹치면 안됨

	Color myColor = Green;
	Fruit myFruit = Orange;
	if (myColor == myFruit)
	{
		// 논리적으로는 말이 안되지만 문법적으로 허용이 됨
	}

	enum class Color2
	{
		Red = 0,
		Green,
		Blue
	};

	enum class Fruit2
	{
		Apple = 0,
		Orange,
		Banana
	};
	
	enum class TrafficLight2	// TrafficLight2 안에 있는 Red기 때문에 이름이 겹치지 않는다.
	{
		Red = 0, 
		Yellow, 
		Green
	};

	Color2 myColor2 = Color2::Red;
	Fruit2 myFruit2 = Fruit2::Apple;
	//if (myColor2 == myFruit2)
	//{
	//	// 문법적으로 금지.
	//}
	//int Number = myColor2;					// 암시적 캐스팅은 금지
	int Number = static_cast<int>(myColor2);	// 명시적 캐스팅이 필수

	PlayerState state = PlayerState::None;
	state = static_cast<PlayerState>(static_cast<int>(state) | static_cast<int>(PlayerState::OnGround));
	state = state | PlayerState::OnGround;	// 명령어 오버로딩을 해야 가능

	// &, ~, |=, &=

}

// 간단 실습
// 수영 인터페이스 만들기
// 전투 인터페이스 만들기