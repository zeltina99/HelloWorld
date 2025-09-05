#pragma once

// Ư�� �������� ������ ���� �����ϴ� �Լ�
int Rand(int Number1, int Number2);

// ���̸� �����ϴ� �Լ�
int AgeA(int Number1);

// ���� ���̸� ���ؼ� �����ϴ� �Լ�
float CircleArea(float Number1);

// Ȧ������ ¦������ �Ǵ��ϴ� �Լ�
int ParityCheck(int Number1);

// ���� �з� �Լ�
int ScoreClass(int Number1);

// ������ ���� �Լ�
int ItemSet(int Inventory, int ItemFlag);

// ������ ���� �Լ�
int ItemClear(int Inventory, int ItemFlag);

// ������ ��ۿ� �Լ�
int ItemToggle(int Inventory, int ItemFlag);

// �Ƕ�̵� ��� �Լ�
int Pyramid(int Number1);

// Min ���ø� �Լ�
template <typename A>
A Min(A Number1, A Number2)
{
	float Result = 0;
	if (Number1 < Number2)
	{
		Result = Number1;
	}
	else if (Number1 > Number2)
	{
		Result = Number2;
	}
	else
	{
		Result = Number1;
	}

	return Result;
};

// Max ���ø� �Լ�
template <typename B>
B Max(B Number1, B Number2)
{
	float Result = 0;
	if (Number1 < Number2)
	{
		Result = Number2;
	}
	else if (Number1 > Number2)
	{
		Result = Number1;
	}
	else
	{
		Result = Number1;
	}

	return Result;
};

// Clamp ���ø� �Լ�
template <typename C>
C Clamp(C value, C min, C max)
{
	float Result = 0;
	if (value < min)
	{
		Result = min;
	}
	else if (value > max)
	{
		Result = max;
	}
	else if (min <= value <= max)
	{
		Result = value;
	}

	return Result;
};

// ���丮�� �Լ�
int Factorial(int Number1);