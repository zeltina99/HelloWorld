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

void Shuffle(int Array[], int Length)
{
	/*	피셔-예이츠 알고리즘
		- 배열의 내용을 랜덤하게 섞는 셔플 알고리즘
		- 동일한 확률로 섞이도록 증명 완료된 알고리즘
	 
	1. 배열의 마지막 요소에서 첫 요소까지 순회.
	2. 현재 요소의 인덱스(i)와 , 0~i 중 임의의 인덱스(j)를 선택한다.
	3. i번째 요소와 j번째 요소를 서로 교환
	4. i가 0이 될때까지 반복
	*/


	for (int i = Length - 1; i > 0; i--)
	{
		int j = rand() % (i + 1);
		int Temp = Array[i];
		Array[i] = Array[j];
		Array[j] = Temp;
	}
}

void TestRef(int& OutData, const int& ReadData)
{
	OutData *= 2;

}


void Day0908_Ref()
{
	int Number = 10;
	int Number2 = 2;
	int& Ref = Number;	// Number의 참조는 Ref다.

	TestRef(Number, Number2);

	int i = 0;

}
