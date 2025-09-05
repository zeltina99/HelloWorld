#include "TestMath.h"
#include <stdio.h>

// 헤더파일은 왠만하면 cpp 파일에 넣는다.

void PrintHelloWorld()	// void면 상관 없는데, void가 아닐시 안에 return이 꼭 있어야함. , void에 return을 넣고 싶으면 return; 이렇게 하면 됨
{
	printf("Hello World!\n");
}

int Sum(int Test1, int Test2)	// int Sum(int, int); 이 선언을 정의했다.
{
	//if (Test1 == -1)
	//{
	//	return 0;				// return이 이렇게 2개 있을 수도 있음
	//}

	int Result = Test1 + Test2;
	return Result;		// return이 마지막에 하나는 반드시 있어야함.
}

float Sum(float Test1, float Test2)
{
	float Result = Test1 + Test2;
	return Result;
}

int Multiply(int Number1, int Number2)
{
	return Number1 * Number2;
}

int Minus(int Num1, int Num2)
{
	return Num1 - Num2;
}

int Division(int Number1, int Number2)
{
	return Number1 / Number2;
}

int TestRecurcive(int Number)
{
	if (Number < 2)
	{
		return 1;
	}
	printf("Recurcive : %d\n", Number);
	return TestRecurcive(Number-1);
}
