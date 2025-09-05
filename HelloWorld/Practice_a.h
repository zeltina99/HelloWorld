#pragma once

// 특정 범위안의 랜덤한 수를 리턴하는 함수
int Rand(int Number1, int Number2);

// 나이를 리턴하는 함수
int AgeA(int Number1);

// 원의 넓이를 구해서 리턴하는 함수
float CircleArea(float Number1);

// 홀수인지 짝수인지 판단하는 함수
int ParityCheck(int Number1);

// 성적 분류 함수
int ScoreClass(int Number1);

// 아이템 설정 함수
int ItemSet(int Inventory, int ItemFlag);

// 아이템 해제 함수
int ItemClear(int Inventory, int ItemFlag);

// 아이템 토글용 함수
int ItemToggle(int Inventory, int ItemFlag);

// 피라미드 출력 함수
int Pyramid(int Number1);

// Min 템플릿 함수
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

// Max 템플릿 함수
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

// Clamp 템플릿 함수
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

// 팩토리얼 함수
int Factorial(int Number1);