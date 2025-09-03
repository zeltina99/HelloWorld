#define _CRT_SECURE_NO_WARNINGS
#include <iostream> // 입출력 관련(cout)
#include <stdio.h>
#include <cstdio>
#include "header.h"

int main() 

{
	float ban = 0.0f; // 반지름 선언
	float area = 0.0f; // 넓이 선언
	float PI = 3.14f; // 파이 선언

	printf("원의 반지름을 입력 하시오: ");
	std::cin >> ban;
	area = PI * (ban * ban);
	printf("원의 넓이는: %f\n", area);

	return 0;

}