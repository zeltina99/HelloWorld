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
	if (Number1 > Number2)	//1���� 2������ ũ��
	{
		Cha = Number1 - Number2 + 1;
		int RandomNumber = (rand() % Cha) + Number2;
		return 0;
	}
	else if (Number2 > Number1)	//2���� 1������ ũ��
	{
		Cha = Number2 - Number1 + 1;
		int RandomNumber = (rand() % Cha) + Number1;
		return 0;
	}
	else                        // ������
	{
		int RandomNumber = (rand() % 1);
		return 0;
	}
	return RandomNumber;
}
