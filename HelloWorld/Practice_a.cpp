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
	if (Number1 > Number2)	//1번이 2번보다 크면
	{
		Cha = Number1 - Number2 + 1;
		int RandomNumber = (rand() % Cha) + Number2;
		return 0;
	}
	else if (Number2 > Number1)	//2번이 1번보다 크면
	{
		Cha = Number2 - Number1 + 1;
		int RandomNumber = (rand() % Cha) + Number1;
		return 0;
	}
	else                        // 같으면
	{
		int RandomNumber = (rand() % 1);
		return 0;
	}
	return RandomNumber;
}
