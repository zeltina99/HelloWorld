#include "TestMath.h"
#include <stdio.h>

// ��������� �ظ��ϸ� cpp ���Ͽ� �ִ´�.

void PrintHelloWorld()	// void�� ��� ���µ�, void�� �ƴҽ� �ȿ� return�� �� �־����. , void�� return�� �ְ� ������ return; �̷��� �ϸ� ��
{
	printf("Hello World!\n");
}

int Sum(int Test1, int Test2)	// int Sum(int, int); �� ������ �����ߴ�.
{
	if (Test1 == -1)
	{
		return 0;				// return�� �̷��� 2�� ���� ���� ����
	}

	return Test1 + Test2;		// return�� �������� �ϳ��� �ݵ�� �־����.
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
