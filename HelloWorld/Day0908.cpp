#include "Day0908.h"
#include "Practice_a.h"
#include <iostream>
#include <stdio.h>





void Practice0908_01()
{
	// 1. 배열 만들고 초기화 해보기

	int Array[1];
	Array[0] = { 1 };

}

void Practice0908_02()
{
	// 2. 배열의 모든 요소의 값을 더하고 평균 구하기
	const int Size = 5;
	int Array[Size] = { 0,1,2,3,4 };
	int Sum = 0;
	for (int i = 0; i < 5; i++)
	{
		Sum += (Array[i]);
	}
	Sum = Sum / Size;
	printf("%d가 평균입니다.\n", Sum);



}

void Practice0908_03()
{
	// 3. 배열의 모든 요소 중 최대값과 최소값 구하기
	const int Size = 5;
	int Array[Size] = { 3,5,1,7,9 };
	int Max = 0;
	int Min = 0;

	

}