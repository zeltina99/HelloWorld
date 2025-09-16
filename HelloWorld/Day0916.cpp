#include "Day0916.h"
#include "Car.h"
#include "Animal.h"
#include "Lion.h"
#include "Eagle.h"
#include "Shark.h"
#include "Monkey.h"
#include <string>
#include <stdio.h>

//Day0916::Day0916()
//{
//	// 객체가 생성될 때 호출
//}
//
//Day0916::~Day0916()
//{
//	// 객체가 해제될 때 호출
//}

void Day0916::ClassInstance()
{
	Car myCar = Car("지역변수");	// 인스턴스 생성. 사라지는 타이밍은 함수가 종료되었을 때 사라짐
	myCar.Accel();


	Car* pCar = new Car("동적할당");
	pCar->HandleTurn();
	delete pCar;
	pCar = nullptr;
	
}


/*
	- 간단 실습 -
	동물 클래스 만들어보기
		Name : std::string
		Energy : float
		Age : int

		동물은 움직이면(Move) 에너지를 소비한다.
		동물은 소리를 지를 수 있다.(MakeSound)
		동물은 먹으면(Eat) 에너지가 증가한다.
		동물은 잠을 자면(Sleep) 나이가 증가하고
		에너지가 완전 회복된다.
		동물의 모든 정보를 출력할 수 있다.(ShoInfo)


*/

void Practice0916_01::ClassAnimalInstace()
{
	Animal Tiger = Animal("호랑이");
	Tiger.MakeSound();
	Tiger.Move();
	Tiger.Move();
	Tiger.Move();
	Tiger.Eat();
	Tiger.Move();
	Tiger.Move();
	Tiger.Move();
	Tiger.Sleep();
	Tiger.ShowInfo();
	
	int Age = Tiger.GetAge();
	const std::string& Name = Tiger.GetName();
}

void Practice0916_01::TestLion()
{
	Lion lion = Lion("사자");
	lion.Move();
	lion.Hunt();
	lion.ShowInfo();

	Animal* pAnimal = new Lion("사자");
	delete pAnimal;
	pAnimal = nullptr;
}

void Practice0916_01::TestEagle()
{
	Eagle eagle = Eagle("독수리");
	eagle.Move();
	eagle.Fly();
	eagle.Eat();
	eagle.ShowInfo();
}

void Practice0916_01::TestShark()
{
	Shark shark = Shark("상어");
	shark.Move();
	shark.Swim();
	shark.Sleep();
	shark.ShowInfo();
}

void Practice0916_01::TestMonkey()
{
	Monkey monkey = Monkey("원숭이");
	monkey.Move();
	monkey.Climb();
	monkey.MakeSound();
	monkey.ShowInfo();
}

// 간단 실습
// 다른 동물 만들어보기(3종류)
// 다른 동물 전용 함수 구현하기
