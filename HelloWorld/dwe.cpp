#define _CRT_SECURE_NO_WARNINGS
#include "dwe.h"
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
 - >, <, >=, <=, ==, !=

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

/*
	비트 연산자
	&	(And)	두 비트가 모두 1이면 1, 아니면 0
		특정 비트가 세팅이 되어 있는지 확인하는데 사용(플래그 검사)
		int a = 10;		// 0b1010
		int b = 9;		// 0b1001
		int c = a & b;	// 0b1000	0b(이진수라는 뜻)

	|	(Or)	두 비트가 하나라도 1이면 1, 둘 다 0이면 0
		특정 비트에 플래그를 세팅하고 싶을 때 사용(플래그 설정)
		int a = 10;		// 0b1010
		int b = 9;		// 0b1001
		int c = a | b;	// 0b1011

	^	(XOR)	두 비트가 서로 다르면 1, 같으면 0
		특정 비트를 토글하고 싶을 때 사용
		int a = 10;		// 0b1010
		int b = 9;		// 0b1001
		int c = a ^ b;	// 0b0011

	~	(Not)	비트값을 반전 시킨다(0 -> 1, 1 -> 0)
		int a = 10;		// 0b1010
		a = ~a;			// 0b0101

	<<	(Left Shift)	비트들을 왼쪽으로 이동
		한번 움직일 때 마다 수가 두배가 된다.
		int a = 7;		// 0b0111
		a = a << 1;		// 0b1110

	>>	(Right Shift)	비트들을 오른쪽으로 이동
		한번 움직일 때 마다 수가 절반이 된다. (양수 일 때)
		int a =	7;		// 0b0111
		a = a >> 1;		// 0b0011
*/

/*
	반복문
	- 제어문 중의 하나
	- 특정 코드 블록을 조건에 따라 여러번 반복해서 실행할 수 있게 해주는 문
	for			반복 회수가 명확할 때 좋음
	while		반복 회수가 명확하지 않고 조건에 따라 반복할 때 사용
	do-while	최소 한번은 무조건 실행해야 할 때 사용.(while과 거의 같음)
*/

/*
	제어문
	continue
		- 반복문 안에서 사용
		- continue를 만나면 그 이후의 코드는 스킵하고 다음 반복을 진행
	break
		- 반복문이나 switch문에서 반복문을 벗어나거나 case를 종료시킨다.

*/

/*
	랜덤
	- 무작위로 숫자를 선택하는 법
	- C 스타일
		- rand();			 함수 활용
		- srand(time(0));	시드값 설정
	- C++ 스타일
		- #include <random>
		- C 스타일보다 많은 기능을 제공한다.

*/

/*
	함수(Function)
	- 특정한 기능을 수행하는 코드블럭
	- 선언을 하고 사용해야 한다.
		-> 함수의 리턴타입, 함수의 이름, 함수의 파라메터를 설정해줘야 한다. 
		함수의 리턴타입 : 함수가 끝났을 때 돌려 받을 값의 종류
		함수의 이름 : 함수를 호출(사용)하고 싶을 때 부르는 이름 
		함수의 파라메터 : 함수의 입력값. 0개 이상 들어갈 수 있다.
	- 선언을 한 후에는 구현을 정의해야한다.(함수의 실제 동작을 작성)
				
*/

/*
	재귀 호출(Recurcive Call)
	- 함수 안에서 자기자신을 다시 호출하는 함수
*/

/*
	템플릿(Template) 함수
	- 데이터 타입에 관계 없이 동일한 로직을 여러 자료형에 대해 사용할 수 있게 해주는 C++의 기능
	- 컴파일 타임에 실제 사용하는 곳이 있으면 해당 타입으로 코드를 생선한다.
		-> 해더에 선언과 구현이 함께 있어야 한다.
*/

/*
	인라인(inline) 함수
	- 함수 호출문을 해당 함수의 실제 코드로 대체하는 함수
*/

/*
	스코프
	- 변수, 함수, 객체등이 유효하게 사용될 수 있는 범위
	- 일반적으로 선언된 중괄호 안쪽에서만 유효
	- 지역 변수 : 특정 함수 내에서 선언된 변수
	- 전역 변수 : 프로그램 전체에서 사용할 수 있는 변수
*/


#include <iostream>	// 입출력 관련(cout)
#include <stdio.h>
#include <time.h>
#include <cstdio>	// stdio.h에 네임스페이스 추가한 래퍼
#include <random>
#include "header.h"
#include "TestMath.h"
#include "Practice.h"
#include "Practice_a.h"

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

	////1. 숫자를 입력받아 양수인지 음수인지 0인지 출력하기
	//int InputNumber = 0;	//변수 선언은 사용하기 직전에 선언하는게 좋다.
	//printf("숫자를 입력하세요 : ");
	//std::cin >> InputNumber;
	//if (InputNumber > 0)	//if는 범위가 큰것이 먼저 체크되게 하기
	//{
	//	printf("입력한 숫자는 양수입니다.\n");
	//}
	//else if (InputNumber < 0)
	//{
	//	printf("입력한 숫자는 음수입니다.\n");
	//}
	//else
	//{
	//	printf("입력한 숫자는 0입니다.\n");
	//}

	////2. 숫자를 입력받아 홀수인지 짝수인지 출력하기
	//printf("홀짝을 판별하기 위한 숫자를 입력하세요 : ");
	//std::cin >> InputNumber;
	//if (InputNumber % 2 == 0)
	//{
	//	printf("짝수를 입력했습니다.\n");
	//}
	//else
	//{
	//	printf("홀수를 입력했습니다.\n");
	//}

	////3. 두 수를 입력 받아 더 큰 수를 출력하기. 같을 경우는 같다고 출력.
	//int Number1 = 0;
	//int Number2 = 0;
	//printf("더 큰 수를 확인하기 위해 숫자 두개를 입력하세요 : ");
	//std::cin >> Number1 >> Number2;
	//if (Number1 > Number2)
	//{
	//	printf("첫번째 숫자가 더 큽니다.\n");
	//}
	//else if (Number2 > Number1)
	//{
	//	printf("두번째 숫자가 더 큽니다.\n");
	//}
	//else
	//{
	//	printf("두 수는 같은 수입니다.\n");
	//}

	////4. 나이와 키를 입력 받아, 6세 이상, 120cm 이상일 때 
	////		롤러코스터 탑승 가능, 그 외에는 불가능으로 출력
	//const unsigned int LimitAge = 5;
	//const float LimitHeight = 120.0f;
	//unsigned int Age = 0;
	//float Height = 0;	// 암시적 변환(대충 변환해주는거, 보통 표현범위가 큰쪽으로 변경됨)
	//printf("나이를 입력하세요 : ");
	//std::cin >> Age;
	//printf("키를 입력하세요 : ");
	//std::cin >> Height;
	//if (Age > LimitAge && Height > LimitHeight)	//float일때는 =없이 해도 되긴 함
	//{
	//	printf("롤러코스터 탑승가능!\n");
	//}
	//else
	//{
	//	printf("롤러코스터 탑승 불가능!\n");
	//}

	////5. 점수를 입력 받아 90점 이상은 A, 80점 이상은 B, 70점 이상은 C, 
	////		60점 이상은 D, 그 이하는 F라고 출력하기


	////6. 세 과목의 점수를 입력받아, 세 과목 평균이 60점 이상이면 
	////		"합격", 아니면 "불합격"을 출력
	////		단, 한과목이라도 40점 미만이면 불합격 출력하기
	//int Point1 = 0;
	//int Point2 = 0;
	//int Point3 = 0;
	//printf("시험 점수를 3개 입력해 주세요 : ");
	//std::cin >> Point1 >> Point2 >> Point3;
	//const int AverageLimit = 60;
	//const int FailLimit = 40;
	//float Average = (Point1 + Point2 + Point3) / 3.0f;

	//if ((Average >= AverageLimit) && 
	//	(Point1 >= FailLimit && Point2 >= FailLimit && Point3 >= FailLimit))	// int 나누기 float는 float
	//{
	//	printf("합격\n");
	//}
	//else
	//{
	//	printf("불합격\n");
	//}


	//int Flag = 0b1010;	
	//// 0b0001 = 왼쪽 키가 눌려졌다.
	//// 0b0010 = 오른쪽 키가 눌려졌다.
	//// 0b0100 = 위쪽 키가 눌려졌다.
	//// 0b1000 = 아래쪽 키가 눌려졌다.

	//if ((Flag & 0b0010) != 0b0000)
	//{
	//	// 오른쪽 키가 눌려져 있다.
	//}
	//else
	//{
	//	// 오른쪽 키가 눌려져 있지 않다.
	//}
	//// int Flag = 0b1010;	
	//Flag = Flag | 0b0001;	// 결과는 Flag = 0b1011

	//// int Flag =		0b1010;
	//int Result = Flag ^ 0b0001;	// 결과 = 0b1011;
	//Result = 0b1011 ^ 0b0001;	// 결과 = 0b1010;

	//Flag = 0b1010;
	//int Test = 0b0001;
	//Test = ~Test;	// 왼쪽 키를 제외한 나머지 모두 세팅

	//// enum : 상수들에게 사람이 알아보기 좋은 이름을 붙여 놓은 것
	//enum Key	//c 스타일
	//{
	//	Up		= 1 << 0,	// 0b0001
	//	Down	= 1 << 1,	// 0b0010
	//	Left	= 1 << 2,	// 0b0100
	//	Right	= 1 << 3	// 0b1000
	//};

	//// Flag가 Up이랑 같아서 0이 아닐경우 : Up이 눌릴경우
	//if ((Flag & Up) != 0)
	//{
	//	// Up버튼이 눌려져있다.
	//}

	// 간단 실습 : 양수를 하나 입력받고 홀수인지 짝수인지 출력하기(%사용금지)
	/*int InputNumber = 0;
	printf("테스트할 수를 입력하세요 : ");
	std::cin >> InputNumber;
	if ((InputNumber & 1) != 0)
	{
		printf("홀수를 입력했습니다.\n");
	}
	else
	{
		printf("짝수를 입력했습니다.\n");
	}*/

	//헬로 월드 10번찍기(for)
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("Hello World For: %d\n", i);
	//}

	//int Count = 1;
	//while ((Count % 3) != 0)	//while()의 조건이 참이면 코드 블럭 실행
	//{
	//	printf("Hello World While: %d\n", Count);
	//	Count++;
	//}

	//Count = 1;
	//do
	//{
	//	printf("Hello World While: %d\n", Count);
	//	Count++;
	//} while ((Count % 3) != 0);	//while()의 조건이 참이면 코드 블럭 실행

	// 간단 실습
	// 1. 0을 입력받을 때까지 입력을 계속 받고, 0이 입력되면 입력받은 숫자의 합을 출력하기.
	//		while이랑 do-while 모두 해보기
	/*int InputNumber = -1;
	int Sum = 0;
	while (true)
	{
		std::cin >> InputNumber;
		Sum += InputNumber;

		if (InputNumber == 0)
		{
			break;
		}
	}
	printf("입력받은 숫자의 합 = %d", Sum);*/
	// 2. 입력받은 숫자의 구구단 출력해보기
	/*int InputNumber = 0;
	printf("구구단 단수를 입력하세요 : ");
	std::cin >> InputNumber;
	for (int i = 1; i < 10; i++)
	{
		printf("%d * %d = %d\n", InputNumber, i, InputNumber * i);
	}*/
	
	// 3. 숫자를 하나 입력 받고, 입력받은 수까지 있는 숫자 중, 홀수만 출력하기
	/*int InputNumber = 0;
	printf("최대치를 입력하세요 : ");
	std::cin >> InputNumber;
	for (int i = 0; i <= InputNumber; i++)
	{
		if ((i % 2) == 0)
		{
			continue;
		}
			printf("%d는 홀수입니다.\n", i);
	}*/
	
	// 4. 1~100사이의 숫자 중에 7의 배수만 출력하기
	/*const int MinNumber = 1;
	const int MaxNumber = 100;
	for (int i = MinNumber; i <= MaxNumber; i++)
	{
		if ((i % 7) == 0)
		{
			printf("%d는 7의 배수입니다.\n", i);
		}
	}*/
	
	// 5. 입력받은 숫자만큼의 층을 가진 피라미드 그리기
	//		3을 입력받았으면 아래와 같이 출력하기
	//			*
	//         ***
	//		  *****
	// 5-1. 입력을 받아야 한다. (InputNumber)
	// 5-2. *표가 첫번째 층에서는 1개 두번째 층에서는 3개.. 이런식으로 이어지니까
	//		각 층별로 (층수 * 2 +1 1)만큼의 *을 찍어야 한다.
	// 5-3. 각 층별로 " "을 (총 층수 - (현재 층수 + 1))만큼 추가해야 한다.
	/*int InputNumber = 0;
	printf("피라미드 층수를 입력하세요 : ");
	std::cin >> InputNumber;


	for (int i = 0; i < InputNumber; i++)
	{
		for (int j = 0; j < InputNumber - (i + 1); j++)
		{
			printf(" ");
		}
		for (int k = 0; k < (i * 2 + 1 ); k++)
		{
			printf("*");
		}
		printf("\n");
	}*/

	//// C 스타일의 랜덤 사용법
	////srand(time(0));
	//srand(0);
	//for (int i = 0; i < 10; i++)
	//{
	//int RandomNumber = rand();
	//printf("랜덤한 숫자 : %d\n", RandomNumber);
	//}

	//// 0~5까지의 숫자를 랜덤으로 구하고 싶다.
	//int RandomNumber1 = rand() % 6;
	//
	//// 1~6까지의 숫자를 랜덤으로 구하고 싶다.
	//int RandomNumber2 = rand() % 6 + 1;

	//// C++ 스타일
	//std::random_device RandomDivece;
	//std::mt19937 Generate(RandomDivece());

	//printf("균등분포 : ");
	//std::uniform_int_distribution<> unfiromDis(1, 100);
	//for (int i = 0; i < 10; i++)
	//{
	//	int Number = unfiromDis(Generate);
	//	printf("%d", Number);
	//	if (i < 9)
	//	{
	//		printf(", ");
	//	}
	//}
	//printf("\n");

	//printf("정규분포 : ");
	//std::normal_distribution<> normalDis(80, 10);
	//for (int i = 0; i < 10; i++)
	//{
	//	float Number = normalDis(Generate);
	//	printf("%.2f", Number);
	//	if (i < 9)
	//	{
	//		printf(", ");
	//	}
	//}
	//printf("\n");

	//1. 주사위(1~6)를 100만번 돌려서 6이 몇번 나왔는지 카운팅해서 출력하기
	
	//const int TestCount = 1000000;
	//int HitCount = 0;
	//for (int i = 0; i < TestCount; i++)	// 100만번 돌려서
	//{
	//	int dice = (rand() % 6) + 1;	// 주사위(1~6)를
	//	if (dice == 6)	// 6이 몇번 나왔는지
	//	{
	//		HitCount++;	// 카운팅해서
	//	}
	//}
	//printf("6이 나온 횟수 = %d", HitCount);	// 출력하기

	
	//2. 가위, 바위, 보 게임 만들기
	//	3선승제
	//	enum 활용
	
	//	가위 바위 보 - 두 명의 플레이어가 가위, 바위, 보 중 하나를 선택한다.
	//	선택의 결과에 따라 승과 패가 나뉜다.
	//	가위는 보를 이긴다.
	//	바위는 가위를 이긴다.
	//	보는 바위를 이긴다.

//PlayerSelect != Scissors
//&& PlayerSelect != Rock
//&& PlayerSelect != Paper

	//enum Rock_Paper_Scissors
	//{
	//	Scissors,
	//	Rock,
	//	Paper,
	//	NumOfRps
	//};
	//const int WinGoal = 3;
	//int PlayerWinCount = 0;
	//int ComWinCount = 0;


	//while (PlayerWinCount < WinGoal && ComWinCount < WinGoal)
	//{


	//	int PlayerSelect = -1;
	//	while (true)	// 플레이어 선택
	//	{
	//		printf("선택하세요. [0:가위, 1:바위, 2:보] : ");
	//		std::cin >> PlayerSelect;

	//		if (PlayerSelect == Scissors
	//			|| PlayerSelect == Rock
	//			|| PlayerSelect == Paper)
	//		{
	//			break;
	//		}

	//		printf("잘못된 입력입니다. 다시 입력하세요\n");
	//	}
	//	int ComSelect = rand() % NumOfRps;	// 컴퓨터 선택

	//	switch (PlayerSelect)	// 승패 결정
	//	{
	//	case Scissors:
	//		if (ComSelect == Scissors)
	//		{
	//			printf("당신은 [가위]를 선택했고 컴퓨터는 [가위]를 선택했습니다.\n");
	//			printf("비겼습니다.\n");
	//		}
	//		else if (ComSelect == Rock)
	//		{
	//			printf("당신은 [가위]를 선택했고 컴퓨터는 [바위]를 선택했습니다.\n");
	//			printf("당신이 졌습니다.\n");
	//			ComWinCount++;
	//		}
	//		else if (ComSelect == Paper)
	//		{
	//			printf("당신은 [가위]를 선택했고 컴퓨터는 [보]를 선택했습니다.\n");
	//			printf("당신이 이겼습니다.\n");
	//			PlayerWinCount++;
	//		}
	//		else
	//		{
	//			printf("ERROR!!!!! 예상외의 사건이 발생함!\n");
	//		}
	//		break;
	//	case Rock:
	//		if (ComSelect == Scissors)
	//		{
	//			printf("당신은 [바위]를 선택했고 컴퓨터는 [가위]를 선택했습니다.\n");
	//			printf("당신이 이겼습니다.\n");
	//			PlayerWinCount++;
	//		}
	//		else if (ComSelect == Rock)
	//		{
	//			printf("당신은 [바위]를 선택했고 컴퓨터는 [바위]를 선택했습니다.\n");
	//			printf("비겼습니다.\n");
	//		}
	//		else if (ComSelect == Paper)
	//		{
	//			printf("당신은 [바위]를 선택했고 컴퓨터는 [보]를 선택했습니다.\n");
	//			printf("당신이 졌습니다.\n");
	//			ComWinCount++;
	//		}
	//		else
	//		{
	//			printf("ERROR!!!!! 예상외의 사건이 발생함!\n");
	//		}
	//		break;
	//	case Paper:
	//		if (ComSelect == Scissors)
	//		{
	//			printf("당신은 [보]를 선택했고 컴퓨터는 [가위]를 선택했습니다.\n");
	//			printf("당신이 졌습니다.\n");
	//			ComWinCount++;
	//		}
	//		else if (ComSelect == Rock)
	//		{
	//			printf("당신은 [보]를 선택했고 컴퓨터는 [바위]를 선택했습니다.\n");
	//			printf("당신이 이겼습니다.\n");
	//			PlayerWinCount++;
	//		}
	//		else if (ComSelect == Paper)
	//		{
	//			printf("당신은 [보]를 선택했고 컴퓨터는 [보]를 선택했습니다.\n");
	//			printf("비겼습니다.\n");
	//		}
	//		else
	//		{
	//			printf("ERROR!!!!! 예상외의 사건이 발생함!\n");
	//		}
	//		break;
	//	default:
	//		printf("ERROR!!!!! 예상외의 사건이 발생함!\n");
	//		break;
	//	}

	//	printf("Player = [%d], COM = [%d]\n", PlayerWinCount, ComWinCount);


	//}

	//if (PlayerWinCount >= WinGoal)
	//{
	//	printf("당신이 컴퓨터를 이겼습니다!\n");
	//}
	//else
	//{
	//	printf("당신이 컴퓨터에게 졌습니다...\n");
	//}
	
	//3. 하이 로우
	//	컴퓨터가 1~100 사이의 임의의 숫자를 선택하고, 
	//	사용자가 맞출 때까지 입력을 받아 "더 높게", "더 낮게" 등의 힌트를 제공하는 게임
	//	5번안에 맞춰야 승리
	
	/*int RandomNumber = (rand() % 100) + 1;
	int PlayerNumber = 0;
	int CountDown = 5;

	while(CountDown > 0)
	{
		printf("1~100 사이의 숫자를 예상 해 보세요 : ");
		std::cin >> PlayerNumber;

		if (PlayerNumber < RandomNumber)
		{
			printf("더 큰 수를 찍어보세요\n");
		}
		else if (PlayerNumber > RandomNumber)
		{
			printf("더 작은 수를 찍어보세요\n");
		}
		else
		{
			printf("정답입니다!\n 찾는 수는 %d였습니다.", RandomNumber);
			break;
		}
		CountDown--;
		printf("남은 횟수는 %d번 입니다.\n", CountDown);
	}
	if (CountDown <= 0)
	{
		printf("실패했습니다.");
	}*/



	//4. 공포 게임의 인벤토리를 비트플래그로 표현하기
	// 아이템 종류를 나타내는 enum을 만들고
	// 특정 아이템을 추가하고 삭제하는 예시 보여주기
	/*for (int i = 0; i < ItemCount; i++)
	{

	}*/	


	//enum Item
	//{
	//	Key	 = 1 << 0,
	//	Fuse = 1 << 1,
	//	Book = 1 << 2,
	//	Note = 1 << 3
	//};
	//
	//const int ItemCount = 4;
	//int Inventory = 0;
	////Inventory = 0b1111;	// 테스트 노트

	//int PlayerSelect = -1;

	//while (PlayerSelect != 3)
	//
	//{
	//	printf("어떤 일을 할까요 [1:아이템 추가, 2:아이템 삭제, 3:종료]: ");
	//	std::cin >> PlayerSelect;

	//	switch (PlayerSelect)
	//	{
	//	case 1:
	//	{
	//		printf("어떤 아이템을 추가할까요? :[0:열쇠, 1:퓨즈, 2:책, 3:쪽지]: ");
	//		int AddItem = 0;
	//		std::cin >> AddItem;
	//		Inventory |= (1 << AddItem);
	//	}
	//	break;
	//	case 2:
	//	{
	//		printf("어떤 아이템을 제거할까요? :[0:열쇠, 1:퓨즈, 2:책, 3:쪽지]: ");
	//		int RemoveItem = 0;
	//		std::cin >> RemoveItem;
	//		Inventory &= (~(1 << RemoveItem));
	//	}
	//	break;
	//	case 3:
	//		continue;
	//	default:
	//		//에러 출력하기
	//		break;
	//	}
	//}

	/*printf("인벤토리 : ");
	if ((Inventory & Key) != 0)
	{
		printf("열쇠 ");
	}
	if ((Inventory & Fuse) != 0)
	{
		printf("퓨즈 ");
	}
	if ((Inventory & Book) != 0)
	{
		printf("책 ");
	}
	if ((Inventory & Note) != 0)
	{
		printf("쪽지 ");
	}
	printf("\n");*/
	
	
	//5. 주사위 게임 만들기
	//	① 초기 세팅
	//		- 플레이어와 컴퓨터 모두 일정 금액(예: 10000원)으로 시작한다.
	// 
	//	② 1차 주사위 굴리기
	//		- 게임 시작 시, 플레이어와 컴퓨터가 각각 주사위(1~6)를 한 번 굴린다.
	//		- 각자 주사위 결과를 공개한다.
	// 
	//	③ 배팅
	//		- 이전 판에서 진 쪽이 배팅 금액을 제시한다.
	//		- 제시한 배팅 금액은 두 사람 모두의 현재 소지 금액 이하이어야 한다.
	//		- 배팅 금액은 두 사람 모두에게서 차감된다.
	// 
	//	④ 2차 주사위 굴리기
	//		- 다시 플레이어와 컴퓨터가 각각 주사위를 한 번씩 굴린다.
	//		- (1차 + 2차) 주사위의 합을 계산한다.
	// 
	//	⑤ 승패 판정 및 금액 증감
	//		- 합이 더 큰 쪽이 배팅 금액의 총합(즉, 2×배팅금액)을 모두 가져간다.
	//		- 동점일 경우 배팅 금액은 그대로 반환한다.
	// 
	//	⑥ 다음 판 진행
	//		- 소지금이 0 이하인 쪽이 나오면 게임 종료.
	
	//int Number = Sum(1, 7);	// Sum함수를 호출했다. 파라메터로 1과 7을 넘겼다. 그리고 8을 돌려받았다.
	//printf("1과7의 합: %d\n", Number);

	//Number = Multiply(2, 3);
	//printf("2와3의 곱: %d\n", Number);

	//Number = Multiply(7);
	//printf("7과 기본 2의 곱: %d\n", Number);

	//Number = Minus(5, 3);
	//printf("5와3의 빼기: %d\n", Number);

	//Number = Division(8, 2);
	//printf("8와2의 나누기: %d\n", Number);

	////TestRecurcive(5);
	//
	//float Number2 = Add(10.5f, 20.4f);

	//Add(1, 3);

	//int Number3 = Mul(10, 2);
	//printf("10과2의 곱하기: %d\n", Number3);
	//float Number4 = Mul(8.5f, 7.2f);
	//printf("8.5와 7.2의 곱하기: %.2f\n", Number4);
	//
	//int Number5 = Min(10, 2);
	//printf("10과2의 빼기: %d\n", Number5);
	//float Number6 = Min(8.5f, 7.2f);
	//printf("8.5와 7.2의 빼기: %.2f\n", Number6);
	//
	//int Number7 = Div(10, 2);
	//printf("10과2의 나누기: %d\n", Number7);
	//float Number8 = Div(8.5f, 7.2f);
	//printf("8.5와 7.2의 나누기: %.2f\n", Number8);



	/*int Number3 = Square(2);
	int Number4 = Number * Number;*/	// inline을 붙여서 하면 위에꺼가 밑에거로 편하게 바꾸는데 그냥 요청정도임.

	/*for (int i = 0; i < 10; i++)
	{

	}
	for (int i = 0; i < 5; i++)
	{

	}*/

	//global = 1000;	전역변수

	// TestMath사칙연산용 템플릿 함수 4개 만들기

	Practice0905_01();
	Practice0905_02();
	Practice0905_03();
	Practice0905_04();
	Practice0905_05();
	Practice0905_06();
	Practice0905_07();
	return 0;


}