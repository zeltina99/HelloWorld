#include "Practice.h"
#include "Practice_a.h"
#include <iostream>	// 입출력 관련(cout)
#include <stdio.h>
#include <time.h>
#include <cstdio>	// stdio.h에 네임스페이스 추가한 래퍼
#include <random>

void Practice0905_01()	
{
	/*
	1. 특정 범위안의 랜덤한 수를 리턴하는 함수
		- int 파라메터가 2개
		- int 리턴
	*/

	/*int Number1 = 0;
	int Number2 = 0;
	int RandomNumber = 0;

	printf("큰 수를 적어주세요. : ");
	std::cin >> Number1;
	printf("작은 수를 적어주세요. : ");
	std::cin >> Number2;

	RandomNumber = Rand(Number1, Number2);
	printf("랜덤으로 %d가 나왔습니다.\n", RandomNumber);

	return;*/
}

void Practice0905_02()
{
	/*
	2. "당신의 나이를 입력해 주세요 : " -> "당신은 00살 입니다"
		- int 파라메터가 1개
	*/
	/*int Age = 0;
	printf("당신의 나이를 입력해 주세요 : ");
	std::cin >> Age;
	Age = AgeA(Age);
	printf("당신은 %d 살입니다.\n", Age);

	return;*/
}

void Practice0905_03()
{
	/*
	3. 원의 반지름을 입력 받고 넓이 구하기
		- float 파라메터가 1개
		- float 리턴
	*/

	/*float Radius = 0.0f;
	float Area = 0.0f;
	printf("원의 반지름을 입력하세요. : ");
	std::cin >> Radius;
	Area = CircleArea(Radius);

	printf("원의 넓이는 %.3f입니다.\n", Area);

	return;*/
}

void Practice0905_04()
{
	/*
	4. 숫자를 입력받아 홀수인지 짝수인지 판단하는 함수
		- int 파라메터가 1개
		- bool 리턴(true면 홀수, false면 짝수)
	*/
	/*int Test_Number1 = 0;
	printf("숫자를 입력해주세요. : ");
	std::cin >> Test_Number1;
	ParityCheck(Test_Number1);

	return;*/
}

void Practice0905_05()
{
	/*
	5. 성적 분류 함수(A~F)
		- int 파라메터가 1개
		- int 리턴(enum값)
	*/

	/*int Score = 0;
	printf("점수를 입력하시오. : ");
	std::cin >> Score;
	ScoreClass(Score);

	return;*/
}

void Practice0905_06()
{
	/*
	6. 아이템 설정, 아이템 해제, 아이템 토글용 함수 총 3개
		ItemSet(Inventory, enum), ItemClear, ItemToggle
		- 비트 플래그 인벤토리 수정
		- int 파라메터 두개(Inventory, 비트플래그용 enum)
		- int 리턴(Inventory)
	*/

	//enum Item
	//{
	//	Key = 1 << 0,		//열쇠
	//	Lighter = 1 << 1,	//라이터
	//	Book = 1 << 2,		//책
	//	Letter = 1 << 3		//편지
	//};

	//const int ItemCount = 4;
	//int Inventory = 0;
	//int PlayerSelcet = -1;

	//while (PlayerSelcet != ItemCount)
	//{
	//	printf("어떤 일을 할까요? \n[1.아이템 설정, 2.아이템 해제, 3.아이템 토글, 4.종료]: ");
	//	std::cin >> PlayerSelcet;

	//	switch (PlayerSelcet)
	//	{
	//	case 1:
	//		{
	//			int AddItem = 0;
	//			printf("어떤 아이템을 추가할까요? [0:열쇠, 1:라이터, 2:책, 3:편지]: ");
	//			std::cin >> AddItem;
	//			Inventory = ItemSet(Inventory, AddItem);
	//		}
	//		break;
	//	case 2:
	//		{
	//			int RemoveItem = 0;
	//			printf("어떤 아이템을 해제할까요? [0:열쇠, 1:라이터, 2:책, 3:편지]: ");
	//			std::cin >> RemoveItem;
	//			Inventory = ItemClear(Inventory, RemoveItem);
	//		}
	//		break;
	//	case 3:
	//		{
	//			int Item = 0;
	//			printf("어떤 아이템을 토글할까요? [0:열쇠, 1:라이터, 2:책, 3:편지]: ");
	//			std::cin >> Item;
	//			Inventory = ItemToggle(Inventory, Item);
	//		}
	//		break;
	//	case 4:
	//		continue;
	//	default:
	//		printf("ERROR!!!\n");
	//		break;
	//	}
	//	printf("인벤토리 : ");
	//		if ((Inventory & Key) != 0)
	//		{
	//			printf("열쇠 ");
	//		}
	//		if ((Inventory & Lighter) != 0)
	//		{
	//			printf("라이터 ");
	//		}
	//		if ((Inventory & Book) != 0)
	//		{
	//			printf("책 ");
	//		}
	//		if ((Inventory & Letter) != 0)
	//		{
	//			printf("편지 ");
	//		}
	//		printf("\n");

	//}

	//return;
}

void Practice0905_07()
{
	/*
	7. 피라미드 출력 함수
		- int 파라메터가 1개
	*/

	/*int Star = 0;
	printf("피라미드 층수를 입력하시오. : ");
	std::cin >> Star;

	Pyramid(Star);

	return;*/
}

/*
	탬플릿 함수 만들기
	① Min
		- 파라메터 2개
		- 리턴 : 파라메터 중 작은 수 리턴
	② Max
		- 파라메터 2개
		- 리턴 : 파라메터 중 큰 수 리턴
	③ Clamp
		- 파라메터 3개(value, min, max)
		- 리턴  
			value값이 min보다 작으면 min
			value값이 max보다 크면 max
			value값이 min과 max 사이면 value

	재귀함수를 이용해서 팩토리얼 값을 만드는 함수 만들기
		ex) 5! = 5 * 4 * 3 * 2 * 1
		
*/

void Practice0905_08()
{
	//① Min
	//	-파라메터 2개
	//	- 리턴 : 파라메터 중 작은 수 리턴

	
	/*int Number01 = Min(8, 2);
	float Number02 = Min(2.3f, 5.3f);

	printf("%d와 %.1f\n\n", Number01, Number02);*/

	/*
	② Max
		- 파라메터 2개
		- 리턴 : 파라메터 중 큰 수 리턴
	*/

	/*int Number03 = Max(8, 2);
	float Number04 = Max(2.3f, 5.3f);

	printf("%d와 %.1f\n\n", Number03, Number04);*/

	/*
	③ Clamp
		- 파라메터 3개(value, min, max)
		- 리턴  
			value값이 min보다 작으면 min
			value값이 max보다 크면 max
			value값이 min과 max 사이면 value
	*/

	/*int Number05 = Clamp(17, 2, 15);
	int Number06 = Clamp(7, 17, 23);
	float Number07 = Clamp(12.3f, 4.7f, 19.7f);

	printf("%d와 %d와 %.1f\n\n", Number05, Number06, Number07);*/

}

void Practice0905_09()
{
	/*
	재귀함수를 이용해서 팩토리얼 값을 만드는 함수 만들기
		ex) 5! = 5 * 4 * 3 * 2 * 1
	*/

	int Number001;
	printf("팩토리얼을 할 숫자를 입력해주세요. : ");
	std::cin >> Number001;
	printf("%d팩토리얼은 %d입니다.\n", Number001, Factorial(Number001));


}