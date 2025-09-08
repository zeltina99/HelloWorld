#include "Day0908.h"
#include "Practice_a.h"
#include <iostream>
#include <stdio.h>
#include <random>





void Practice0908_01()
{
	// 1. 배열 만들고 초기화 해보기

	/*int Array[1];
	Array[0] = { 1 };*/

}

void Practice0908_02()
{
	// 2. 배열의 모든 요소의 값을 더하고 평균 구하기
	/*const int Size = 5;
	int Array[Size] = { 0,1,2,3,4 };
	int Sum = 0;
	for (int i = 0; i < 5; i++)
	{
		Sum += (Array[i]);
	}
	Sum = Sum / Size;
	printf("%d가 평균입니다.\n", Sum);*/



}

void Practice0908_03()
{
	// 3. 배열의 모든 요소 중 최대값과 최소값 구하기
	/*const int Size = 5;
	int Array[Size] = { 3,5,1,7,9 };
	int Max = 0;
	int Min = 0;*/

	

}
int Shuffle(int Array[], int Length)
{
	/*	피셔-예이츠 알고리즘
		- 배열의 내용을 랜덤하게 섞는 셔플 알고리즘
		- 동일한 확률로 섞이도록 증명 완료된 알고리즘
	 
	1. 배열의 마지막 요소에서 첫 요소까지 순회.
	2. 현재 요소의 인덱스(i)와 , 0~i 중 임의의 인덱스(j)를 선택한다.
	3. i번째 요소와 j번째 요소를 서로 교환
	4. i가 0이 될때까지 반복
	*/

	int Temp = 0;

	for (int i = Length - 1; i > 0; i--)
	{
		int j = rand() % (i + 1);
		Temp = Array[i];
		Array[i] = Array[j];
		Array[j] = Temp;
	}

	return Temp;
}

//void TestRef(int& OutData, const int& ReadData)
//{
//	OutData *= 2;
//
//}


void Day0908_Ref()
{
	//int Number = 10;
	//int Number2 = 2;
	//int& Ref = Number;	// Number의 참조는 Ref다.

	//TestRef(Number, Number2);

	//int i = 0;

}

/*
	① 6면체 주사위를 100만번 던져서 각 눈의 수가 몇번 나왔는지 카운팅하기
		- 6면체 주사위를 돌리는 함수 만들기
*/
void Practice0908_04()
{
	//int DiceArray[6] = { 1,2,3,4,5,6 };
	//int Dice = 0;
	//int Dice1 = 0;
	//int Dice2 = 0;
	//int Dice3 = 0;
	//int Dice4 = 0;
	//int Dice5 = 0;
	//int Dice6 = 0;


	//for (int i = 0; i < 1000000; i++)
	//{
	//	Dice = Shuffle(DiceArray, 6);

	//	switch (Dice)
	//	{
	//	case 1:
	//		Dice1 += Dice;
	//		break;
	//	case 2:
	//		Dice2 += (Dice / 2);
	//		break;
	//	case 3:
	//		Dice3 += (Dice / 3);
	//		break;
	//	case 4:
	//		Dice4 += (Dice / 4);
	//		break;
	//	case 5:
	//		Dice5 += (Dice / 5);
	//		break;
	//	case 6:
	//		Dice6 += (Dice / 6);
	//		break;
	//	default:
	//		//ERROR !!!
	//		break;
	//	}

	//}
	//printf("1은 [%d번] 2는 [%d]번 3은[%d번] 4는[%d]번 5는[%d번] 6은[%d]번 나왔음.\n", Dice1, Dice2, Dice3, Dice4, Dice5, Dice6);

}

/*
	② 배열에 저장된 값을 거꾸로 뒤집는 함수 만들기
		- 파라매터 int Array[], int Size
*/

void Practice0908_05()
{
	/*int Array[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int Size = sizeof(Array) / sizeof(Array[0]);
	
	printf("배열에 저장된 값 : ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", Array[i]);
	}
	printf("\n\n");

	Reverse(Array, Size);

	printf("거꾸로 뒤집는 함수를 만듬 : ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", Array[i]);
	}
	printf("\n\n");*/
	
}


/*
	③ 로또 번호 생성기
		- 전체 숫자 범위: 1번부터 45번까지.
		- 6개 랜덤으로 뽑기.
*/

void Practice0908_06()
{
	/*int Lotto = 0;
	int LottoArray[45] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45 };

	Shuffle(LottoArray, 45);
	
	printf("로또는[%d][%d][%d][%d][%d][%d]입니다.\n\n", LottoArray[0], LottoArray[1], LottoArray[2], LottoArray[3], LottoArray[4], LottoArray[5]);*/
}


/*
	④ 미로 게임
*/

void Practice0908_07()
{
	const int MazeHeight = 10;
	const int MazeWidth = 20;
	char Key = 0;
	int PlayerX = 1;
	int PlayerY = 1;

	// 미로 배열
	int Maze[MazeHeight][MazeWidth] =
	{
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,2,0,0,0,1,0,0,0,0,1,0,0,1,0,0,0,1,0,1},
		{1,1,1,1,0,1,0,1,1,0,1,0,1,1,0,1,0,1,0,1},
		{1,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1},
		{1,0,1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1},
		{1,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,1},
		{1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1},
		{1,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,3,1},
		{1,0,1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1},
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
	};
	printf("=== 텍스트 미로 탈출 게임 ===\n");
	while(true)
	{
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 20; j++)
			{
				if (Maze[i][j] == 0)
				{
					printf(". ");
				}
				else if (Maze[i][j] == 1)
				{
					printf("# ");
				}
				else if (Maze[i][j] == 2)
				{
					printf("P ");
				}
				else if (Maze[i][j] == 3)
				{
					printf("E ");
				}
				else if (Maze[i][j] == 4)
				{
					printf("S ");
				}
			}
			printf("\n");
		}
		printf("이동할 수 있는 방향을 선택하세요 (w: 위, s: 아래, a: 왼쪽, d: 오른쪽):\n");
		if (Maze[PlayerX - 1][PlayerY] == 0 || Maze[PlayerX - 1][PlayerY] == 3)		// ex) [0][1]이 0(길) 또는 [0][1]이 3(골)이면 실행
		{
			printf("w(↑) ");
		}
		if (Maze[PlayerX + 1][PlayerY] == 0 || Maze[PlayerX + 1][PlayerY] == 3)		// ex) [2][1]이 0(길) 또는 [2][1]이 3(골)이면 실행
		{
			printf("s(↓) ");
		}
		if (Maze[PlayerX][PlayerY - 1] == 0 || Maze[PlayerX][PlayerY - 1] == 3)		// ex) [1][0]이 0(길) 또는 [1][0]이 3(골)이면 실행
		{
			printf("a(←) ");
		}
		if (Maze[PlayerX][PlayerY + 1] == 0 || Maze[PlayerX][PlayerY + 1] == 3)		// ex) [0][2]이 0(길) 또는 [0][2]이 3(골)이면 실행
		{
			printf("d(→) ");
		}
		printf("\n");
		while(true)
		{
			printf("방향 입력: ");
			std::cin >> Key;
			int NextX = PlayerX;		// P만을 위한 세로배열 요소를 새로 선언
			int NextY = PlayerY;		// P만을 위한 가로배열 요소를 새로 선언

			if (Key == 'w' || Key == 'W')	//W키를 눌렀으면 [1][1]이었으면 [0][1]로 위로 올라감
			{
				NextX--;
			}
			else if (Key == 's' || Key == 'S')	//S키를 눌렀으면 [1][1]이었으면 [2][1]로 아래로 내려감
			{ 
				NextX++;
			}
			else if (Key == 'a' || Key == 'A')	//A키를 눌렀으면 [1][1]이었으면 [1][0]로 왼쪽으로감
			{
				NextY--;
			}
			else if (Key == 'd' || Key == 'D')	//D키를 눌렀으면 [1][1]이었으면 [1][2]로 오른쪽으로감
			{
				NextY++;
			}
			
			if (Maze[NextX][NextY] == 0 || Maze[NextX][NextY] == 3)
			{
				if (Maze[NextX][NextY] == 3)	// 3에 도착한거니까 끝
				{
					return;
				}
				if (PlayerX == 1 && PlayerY == 1)	//Maze[1][1]이면
				{
					Maze[PlayerX][PlayerY] = 4;		// S를 출력
				}
				else
				{
					Maze[PlayerX][PlayerY] = 0;		// 그냥 빈칸
				}
				PlayerX = NextX;				// 키 입력 받은 값을 그대로
				PlayerY = NextY;				// 넣는다.
				Maze[PlayerX][PlayerY] = 2;		// 그리고 그 요소가 2로 넣어서 다시 P를 유지한다.
				break;
			}
			else
			{
				printf("잘못된 입력입니다. 이동할 수 있는 방향 중에서 선택하세요.\n");
			}
		}
	}
	
}
