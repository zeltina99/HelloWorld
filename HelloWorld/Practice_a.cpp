#include "Practice_a.h"
#include <stdio.h>
#include <random>
#include <time.h>
#include <iostream>	
#include <cstdio>

int Rand(int Number1, int Number2)
{
	int RandomNumber = 0;
	int Cha = 0; // 빼고 남은 차 선언
	
	Cha = Number1 - Number2 + 1;
	RandomNumber = (rand() % Cha) + Number2;

	return RandomNumber;
}

// 나이 함수
int AgeA(int Number1)
{	
	return Number1;
}

float CircleArea(float Number1)
{
	float PI = 3.141592f;
	float Area = 0.0f;

	Area = PI * Number1 * Number1;

	return Area;
}

int ParityCheck(int Number1)
{
	if ((Number1 % 2) == 0)
	{
		bool Number1 = true;
		printf("짝수 입니다.\n");
	}
	else
	{
		bool Number1 = false;
		printf("홀수 입니다.\n");
	}
	return Number1;
}

int ScoreClass(int Number1)
{
	enum Class
	{
		A = 90,
		B = 80,
		C = 70,
		D = 60,
	
	};

	if (Number1 < D) 
	{
		printf("F\n");
	}
	else if (Number1 < C)
	{
		printf("D\n");
	}
	else if (Number1 < B)
	{
		printf("C\n");
	}
	else if (Number1 < A)
	{
		printf("B\n");
	}
	else
	{
		printf("A\n");
	}

	return Number1;
}

int ItemSet(int Inventory, int ItemFlag)
{
	int Result = 0;
	Inventory |= (1 << ItemFlag);
	Result = Inventory;
	return Result;
}

int ItemClear(int Inventory, int ItemFlag)
{
	int Result = 0;
	Inventory &= (~(1 << ItemFlag));
	Result = Inventory;
	return Result;
}

int ItemToggle(int Inventory, int ItemFlag)
{
	int Result = 0;
	Inventory ^= ItemFlag;
	Result = Inventory;
	return Result;
}

int Pyramid(int Number1)
{
	for (int i = 0; i < Number1; i++) 
	{
		for (int j = 0; j < Number1 - (i + 1); j++)
		{
			printf(" ");
		}
		for (int k = 0; k < (i * 2 + 1); k++)
		{
			printf("*");
		}
		printf("\n");

	}
	return Number1;
}

int Factorial(int Number1)
{
	int Result = 1;

	while (true)
	{
		if (Number1 > 0)
		{
			Result *= Number1;
			Number1--;
		}

		if (Number1 == 0)
		{
			break;
		}
	}
	return Result;
}
