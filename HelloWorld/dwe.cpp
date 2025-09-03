#define _CRT_SECURE_NO_WARNINGS
#include <iostream> // 입출력 관련(cout)
#include <stdio.h>
#include <cstdio>
#include "header.h"

/*
	데이터 타입
	int : 정수형. 일반적으로 32bit. 범위는 (대략 -21억 ~ +21억)
	float : 실수형. 32bit. 태생적으로 오차가 있는 타입. 대략 총 7번째 자리부터 오차 발생
	ex) 3.14159 혹은 314.159 까지는 괜찮음 근데 숫자가 하나 더 늘어나면 오차가 발생
	double : 실수형. 64bit.
	bool : 불리언. true/false만 저장
	char : 캐릭터. 글자 하나를 저장하는 데이터 타입. 8bit 정수형
		char alpha = 'a';	// 글자 하나만 저장
		char alpha2 = 64;
	std::string : 스트링. 문자열을 쉽게 다룰 수 있는 자료형
		문자열 : 글자 여러개가 연결된것
		std::string str = "Hello World!";
		char* str;
		char str[32];

*/

/*
	상수(Constant)
	- 변하지 않는 수
	- 코드의 안정성과 가독성을 높여준다.
	(매직넘버 회피에 좋다)
	(매크로로와는 달리 타입체크가 가능하다)
*/

/*
	비교연산자
	-비교를 하는 연산자. 참이냐 거짓이냐가 결과
	>, <, <=, >=, ==
*/

int main() 

{

	// 간단실습 : 원의 반지름을 입력 받고 넓이 구하기
	const float Pi = 3.141592f;	// 상수를 선언하고 정의 _(실수를 못 하게 막는 방법)
	float radius = 0.0f;
	printf("원의 반지름을 입력하세요 : ");
	std::cin >> radius;
	printf("원의 넓이는 [%f]입니다.\n", radius * radius * Pi);

	//int square = 0;
	//printf("정사각형의 한변의 길이를 입력하세요 : ");
	//std::cin >> square;
	//printf("정사각형의 넓이는 [%d]입니다.", square * square);
	//// 오버플로우 발생할 수 있음



	return 0;

}