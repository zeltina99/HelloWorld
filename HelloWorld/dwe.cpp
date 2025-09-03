#define _CRT_SECURE_NO_WARNINGS
#include <iostream> // 입출력 관련(cout)
#include <stdio.h>
#include <cstdio>
#include "header.h"

int main() 

{
	// 간단실습 : 원의 반지름을 입력 받고 넓이 구하기
	float radius = 0.0f;
	printf("원의 반지름을 입력하세요 : ");
	std::cin >> radius;
	printf("원의 넓이는 [%f]입니다.\n", radius * radius * 3.141592f);

	return 0;

}