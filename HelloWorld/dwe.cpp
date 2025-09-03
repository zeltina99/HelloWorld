#define _CRT_SECURE_NO_WARNINGS
#include <iostream> // 입출력 관련(cout)
#include <stdio.h>
#include <cstdio>
#include "header.h"

/*
데이터 타입
int : 정수형. 일반적으로 32bit. 범위는 (대략 -21억~+21억)
float : 실수형. 32bit. 태생적으로 오차가 있는 타입. 대략 총7자리부터 오차 발생
double : 실수형. 64bit.
bool : 불리언. true/false만 저장.
char : 캐릭터. 글자하나를 저장하는 데이터 타입. 8bit 정수형
	char alpha = 'a';	// 글자 하나만 저장
	char alpha2 = 64;
std::string : 스트링. 문자열을 쉽게 다룰 수 있는 자료형.
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
 - 비교를 하는 연산자. 참이냐 거짓이냐가 결과로 나온다.
 - >, <, >=, <=, ==

 int a = 10;
 int b = 20;
 bool result = a > b;		// 결과는 거짓이니까 result = false;

 int a = 100;
 int b = 20;
 bool result = a > b;		// 결과는 참이니까 result = true;

 int a = 50;
 int b = 50;
 bool result = a == b;	// 결과는 참이니까 result = true;

 // ‘실수형 자료형은 비교 연산자를 사용하면 안 된다’ 가 맞을까요?
 // 정확하게 이야기하면
	"값이 같은지를 비교하는 ==, <=, >=를 조심해서 사용해야 한다." 입니다.
*/

/*
제어문
 - 프로그램의 흐름을 제어하는 문(Statement)
  - 조건문 : 조건에 따라 프로그램의 흐름을 변경하는 문
	- if, else if, else
	- switch
	- 삼항연산자
  - 반복문 : 일정 조건에 따라 코드를 반복하는 문
*/

/*
논리 연산자
 - bool값을 받아 bool로 된 결과를 낸다.
&&	(And)	&&의 양쪽이 둘 다 true면 true. 그 외는 false
||	(Or)	||의 양쪽에 하나라도 true가 있으면 true, 아니면 false
!	(Not)	! 뒤의 bool이 true면 false, false면 true.
*/

#include <iostream>	// 입출력 관련(cout)
#include <stdio.h>
#include <cstdio>	// stdio.h에 네임스페이스 추가한 래퍼
#include "header.h"

//using namespace std;

int main() // 엔트리 포인트(코드가 시작되는 곳)
{
	//printf("Hello\tWorld!\n");		// C언어의 출력 방법
	//printf("\"고병조\"\t");			// ""안에 \n이 있으면 줄을 바꾸라는 의미(
	//printf("82년생입니다.┌─┐▣□\n");

	//// 이스케이프 시퀀스
	//// \n : 줄바꾸기(개행문자)
	//// \t : 탭 넣기
	//// \" : 쌍따옴표 한개
	//// \\ : \찍기
	//// \r : 캐리지 리턴(윈도우에서는 중요하지 않음. 리눅스에서는 중요함)
	//	
	////std::cout << "Hello World!\n";	// C++ 출력 방법

	//// number라는 이름을 가진 int(인티저)변수를 선언하고 거기에 0을 대입한다.
	//int number;	// 변수 선언.
	//number = 0;	// 변수에 값을 대입.

	//// int : 정수형(소수점이 없는 숫자, 5, 10, -2, 0, 66 ...)
	//number = 5.3; // number에는 5가 저장된다.
	//number = 5 / 2;	// number에는 2가 저장된다.

	////

	//scanf("%d", &number);	// 숫자를 하나 입력 받기(C)
	//printf("입력한 숫자는(C) : %d\n", number);

	//std::cin >> number;		// 숫자를 하나 입력 받기(C++)
	//printf("입력한 숫자는(C++) : %d\n", number);

	// 프로그램을 실행했을 때 나이를 물어보고 입력받은 숫자를 그대로 출력해보기

	// 추가추가추가추가추가추가추가추가추가

	// 추가추가추가추가추가추가추가추가추가2

	// 실습실습
	//  실습실습

	//int number1 = 0;
	//int number2 = 0;
	//printf("숫자 1을 입력하시오 : ");
	//std::cin >> number1;
	//printf("숫자 2를 입력하시오 : ");
	//std::cin >> number2;
	//int number3 = number1 + number2;
	//printf("두 숫자의 합은 %d입니다.", number3);

	//float number1 = 10.0f;	// 10이라는 float 타입의 값을 float인 numnber1에 넣기
	//float number2 = 15.0;	// 15라는 double 타입의 값을 float인 number2에 넣기

	//std::cin >> number1 >> number2;
	//printf("number1 : %f\nnumber2 : %.2f", number1, number2);

	//// 간단실습 : 원의 반지름을 입력 받고 넓이 구하기
	//const float Pi = 3.141592f;	// 상수를 선언하고 정의
	//float radius = 0.0f;
	//printf("원의 반지름을 입력하세요 : ");
	//std::cin >> radius;
	//printf("원의 넓이는 [%f]입니다.\n", radius * radius * Pi);


	//int square = 0;
	//printf("정사각형의 한변의 길이를 입력하세요 : ");
	//std::cin >> square;
	//printf("정사각형의 넓이는 [%d]입니다.", square * square);
	//// 오버플로우 발생할 수 있음

	//float a = 123.0f;
	//float b = 0.0f;
	//std::cin >> b;
	//b = b * 123.0f;

	//bool result = a == b;	// F9 : 브레이크 포인트 설정/해제

	//float 타입을 ==로 비교할 때 반드시 아래와 같이 진행해야함.
	//float epsilon = 0.001f;
	//a < (b + epsilon);
	//a > (b - epsilon);

	// if : 소괄호 안이 true면 중괄호 안의 코드를 실행하라.
	//		내가 특정 조건을 만족할 때만 어떤 코드를 실행하고 싶을 때 사용.

	//int a = 10;
	//int b = 0;
	//printf("a는 10\nb를 입력하세요 : ");
	//std::cin >> b;

	//if (a > b)
	//{
	//	printf("if가 성공했다.\n");
	//	printf("b가 %d라서 a가 더 크다\n", b);
	//}

	//if (a <= b)
	//{
	//	printf("b가 %d라서 a가 더 작거나같다\n", b);
	//}

	//// if-else : 이거 아니면 저거일때 사용.
	//if (a > b)
	//{
	//	printf("a가 b보다 크다.\n");
	//}
	//else
	//{
	//	printf("a가 b보다 작거나 같다.\n");
	//}

	//if (b < 60)
	//{
	//	//F
	//}
	//else if (b < 70)
	//{
	//	//D
	//}
	//else if(b < 80)
	//{
	//	//C
	//}
	//else if (b < 90)
	//{
	//	//B
	//}
	//else
	//{
	//	//A
	//}

	//int a = 0;
	//std::cin >> a;
	//switch (a)
	//{
	//case 1:
	//	printf("1이다.\n");
	//	break;
	//case 3:
	//	printf("3이다.\n");
	//	break;
	//case 5:
	//	printf("5이다.\n");
	//	break;
	//default:
	//	printf("1,3,5가 아니다.\n");
	//	break;
	//}

	//int a = 10;
	//int b = 20;
	//int c = 0;
	//if (a > b)
	//{
	//	c = a * 2 + b;
	//}
	//else
	//{
	//	c = a + b * 2;
	//}
	//c = (a > b) ? (a * 2 + b) : (a + b * 2); // 삼항연산자

	int a = 10;
	if (a > 5 && !(10 > a))
	{
		// 성공
	}
	else
	{
		// 실패
	}


	return 0;
}