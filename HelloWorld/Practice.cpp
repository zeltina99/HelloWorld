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

	/*int Number001;
	printf("팩토리얼을 할 숫자를 입력해주세요. : ");
	std::cin >> Number001;
	printf("%d팩토리얼은 %d입니다.\n", Number001, Factorial(Number001));*/


}

// 템플릿 함수로 Clamp 함수 구현하기
void Practice0905_01_05()
{
	/*int Value = -120;
	int Min = 10;
	int Max = 50;
	Value = Clamp(Value, Min, Max);

	float ValueF = 10.0f;
	float MinF = 10.0f;
	float MaxF = 50.0f;
	ValueF = Clamp(ValueF, MinF, MaxF);

	Clamp(10.0, 50.0, 90.0);*/

}

/*
	도둑 잡기 만들기
	시작 금액 10000
	한판에 무조건 최소 100 배팅해야 함. 만약 소지금액이 100 이하일 경우 게임 종료.
	딜러는 A~K까지의 트럼프 카드 중 2장을 중복없이 선택하고 조커 카드가 추가된다.
	플레이어는 딜러의 카드 중 한장을 선택한다.
	만약 플레이어가 조커를 뽑있다면 플레이어의 승리. 배팅 금액의 2배를 받는다.
	플레이어가 조커를 뽑지 못했다면 다음 게임을 시작하거나 배팅 금액의 2배를 추가로 지불하고 한번 더 선택할 수 있다.
*/
void Practice0905_02_05()
{
	enum Card 
	{
		CardA = 0,
		Card2,
		Card3,
		Card4,
		Card5,
		Card6,
		Card7,
		Card8,
		Card9,
		Card1,
		CardJ,
		CardQ,
		CardK,
		CardJoker,
		NumofCards
	};


	int Money = 10000;			//시작 금액 10000
	const int MinimumBet = 100;	//최소 100 배팅
	while(Money >= MinimumBet)
	{
		int CurrentBet = MinimumBet;
		
		printf("배팅을 해주세요 (100~%d) : ", Money);
		std::cin >> CurrentBet;
		printf("%d원을 배팅했습니다.\n", CurrentBet);

		Money -= CurrentBet;

		// 배팅을 안하고 있다.

		int Dealer1 = rand() % CardJoker;
		int Dealer2 = -1;
		do
		{
			Dealer2 = rand() % CardJoker;
		} while (Dealer2 == Dealer1);
		int Dealer3 = -1;
		do
		{
			Dealer3 = rand() % CardJoker;
		} while (Dealer3 == Dealer1 || Dealer3 == Dealer2);

		int JokerIndex = rand() % 3;	//조커 카드 위치
		switch (JokerIndex)
		{
		case 0:
			Dealer1 = CardJoker;
			break;
		case 1:
			Dealer2 = CardJoker;
			break;
		case 2:
			Dealer3 = CardJoker;
			break;
		default:
			// ERROR!!!
			break;
		}

		printf("카드를 선택하세요 (0, 1, 2) : ");
		int PlayerInput = 0;
		std::cin >> PlayerInput;

		bool PlayerWin = false;
		printf("플레이어는 %d를 선택했습니다.\n", PlayerInput);
		switch (PlayerInput)
		{
		case 0:
			if (Dealer1 == CardJoker)
			{
				// 발견함
				PlayerWin = true;
			}
			break;
		case 1:
			if (Dealer2 == CardJoker)
			{
				// 발견함
				PlayerWin = true;
			}
		case 2:
			if (Dealer3 == CardJoker)
			{
				// 발견함
				PlayerWin = true;
			}
			break;
		default:
			// ERROR!!!
			break;
		}

		if (PlayerWin)
		{
			Money += CurrentBet * 2;
			printf("조커를 뽑았습니다. 당신의 현재 금액은 %d입니다.\n", Money);
		}
		else
		{
			printf("당신이 뽑은 카드는 조커가 아닙니다.\n");

			if(Money >= CurrentBet * 2)
			{
				printf("추가 도전 하시겠습니까?(0:YES, 1:NO) : ");
				int Select = -1;
				std::cin >> Select;
				if (Select == 0)
				{
					Money -= CurrentBet * 2;
					CurrentBet *= 3;
					int PlayerSecondInput = -1;
					switch (PlayerInput)
					{
					case 0:
					{
						do
						{
							printf("남은 카드 중 하나를 선택하세요 (1,2): ");
							std::cin >> PlayerSecondInput;
						} //while (!(PlayerSecondInput == 1 || PlayerSecondInput == 2));
						while (PlayerSecondInput != 1 && PlayerSecondInput != 2);
					}
					break;
					case 1:
					{
						do
						{
							printf("남은 카드 중 하나를 선택하세요 (0,2): ");
							std::cin >> PlayerSecondInput;
						} //while (!(PlayerSecondInput == 0 || PlayerSecondInput == 2));
						while (PlayerSecondInput != 0 && PlayerSecondInput != 2);
					}
					break;
					case 2:
					{
						do
						{
							printf("남은 카드 중 하나를 선택하세요 (0,1): ");
							std::cin >> PlayerSecondInput;
						} //while (!(PlayerSecondInput == 0 || PlayerSecondInput == 1));
						while (PlayerSecondInput != 0 && PlayerSecondInput != 1);
					}
					break;
					default:
						// ERROR!!!
						break;
					}
					printf("플레이어는 두번째로 %d를 선택했습니다.\n", PlayerSecondInput);
					switch (PlayerSecondInput)
					{
					case 0:
						if (Dealer1 == CardJoker)
						{
							// 발견함
							PlayerWin = true;
						}
						break;
					case 1:
						if (Dealer2 == CardJoker)
						{
							// 발견함
							PlayerWin = true;
						}
					case 2:
						if (Dealer3 == CardJoker)
						{
							// 발견함
							PlayerWin = true;
						}
						break;
					default:
						// ERROR!!!
						break;
					}

				}
				if (PlayerWin)
				{
					printf("당신의 승리입니다.\n");
				}
				else
				{
					printf("당신의 패배입니다.\n");
				}
			}
			else
			{
				printf("당신의 패배입니다.\n");
			}
		}
	}
}