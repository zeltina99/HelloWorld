#include "Practice_a.h"
#include <stdio.h>
#include <random>
#include <time.h>
#include <iostream>	
#include <cstdio>

int Rand(int Number1, int Number2)
{
	int RandomNumber = 0;
	int Cha = 0; // ���� ���� �� ����
	
	Cha = Number1 - Number2 + 1;
	RandomNumber = (rand() % Cha) + Number2;

	return RandomNumber;
}

// ���� �Լ�
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
		printf("¦�� �Դϴ�.\n");
	}
	else
	{
		bool Number1 = false;
		printf("Ȧ�� �Դϴ�.\n");
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

int ItemSet(int Number1, int Number2)
{
	return Number1 |= (1 << Number2);
}

int ItemClear(int Number1, int Number2)
{
	return Number1 &= (~(1 << Number2));
}

int ItemToggle(int Number1, int Number2)
{
	return Number1 ^= Number2;
}
