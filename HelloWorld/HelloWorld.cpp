
// HelloWorld.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

//소스파일
// 주석 (Comment) : 프로그램에서 영향을 끼치지 않는 부분
// 컴파일러가 무시하는 부분, 설명을 위한 부분

/*
슬래시 별표는 다 주석
슬래시 별표는 다 주석

ctrl + d 한줄 : 복제

shift + del : 한줄 삭제

shift + 화살표 : 블럭 잡기

alt + shift + 화살표 : 세로로 블럭 잡기

ctrl + space : 자동완성기능(인텔리센스)창 띄우기

alt + 화살표 : 현재 줄을 위아래로 옮기기

프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

ctrl + shift + b : 프로젝트 빌드

ctrl + b + r : 프로젝트 리빌드 

pdb 파일 : 디버깅 하는 파일 (노출 시키면 안됨, 해킹 가능성 있음)

ctrl + 화살표 위아래 : 보이는 영역 올리고 내리기

ctrl + 화살표 좌우 : 단어 단위로 움직이기

ctrl + k + c : 블럭 영역 한꺼번에 주석처리
ctrl + k + u : 블럭 영역 한꺼번에 주석해제 처리

*/

/*
	컴파일러: 번역기(사람이 써 놓은 코드를 기계가 알아듣게 번역해줌)
	-> 목적코드 생성
	-> 링커가 연결해서 실행파일 생성
	빌드 : 실행파일 생성하기
	리빌드 : 전체 다시 빌드하기(정리+빌드)

*/

/*
	변수(Variable)
	- 변하는 숫자
	- 컴퓨터에 값을 기억 시키기 위해 만들고 사용

	연산자(Operator)
	- 계산을 하기 위한 기호
	- 대입 연산자 (ex: =)
		= 오른쪽에 있는 값을 왼쪽에 넣어라
		a = b; // b에 있는 값을 a에 넣어라
	- 산술 연산자
		사칙연산
		+ - * / %(나머지 연산)
		a = 5%3;
		a에는 2가 들어간다.(5를 3으로 나누었을 때 나머지가 2 )
	- 복합 대입연산자
		줄여쓰기용
		a += b; // 아래와 같은 코드 
		a = a + b;
	- 증감 연산자
		a++;	//a에다가 1을 더해라
		a--;	//a에다가 1을 빼라
*/

// == 양변이 같다

#define _CRT_SECURE_NO_WARNINGS
#include <iostream> // 입출력 관련(cout)
#include <stdio.h>
#include <cstdio>
#include "header.h"

//using namespace std;

int main() // 엔트리 포인트(코드가 시작되는 곳)
{
	//printf("Hello World!\n"); //C언어의 출력 방법
	//std::printf("Hello\tWorld!\n"); //std 넣은 C언어의 출력 방법, \t는 탭
	//printf("\"최지원\"\n"); // ""안에 \n이 있으면 줄을 바꾸라는 의미
	//printf("99년생입니다.▣□●\n");
	//std::cout << "최지원\n";
	//std::cout << "Hello World!\n"; // C++ 출력 방법

	////이스케이프 시퀀스
	//// \n : 줄바꾸기(개행문자)
	//// \t : 탭 넣기
	//// \" : 쌍따옴표 한개
	//// \\ : \찍기
	//// \r : 캐리지 리턴(윈도우에서는 중요하지 않음. 리눅스에서는 중요함)

	//int number = 0; //number라는 이름을 가진 int(인티저)변수를 선언하고 거기에 0을 대입한다.
	//int num = 0;
	//// int : 정수형(소수점이 없는 숫자, 5, 10, -2, 0, 66 ...)
	//// number = 5.3; <- 소수점 아래에 있는 거 버림 (number에는 5가 저장된다.)
	//// number = 5/2; <- number에는 2가 저장된다.


	//scanf("%d", &number); // 숫자를 하나 입력 받기(c)

	//printf("입력한 숫자는 : %d\n", number);
	//
	//std::cin >> number; // 숫자를 하나 입력 받기 (c++)

	//printf("입력한 숫자는 : %d\n", number);

	////프로그램을 실행했을 때 나이를 물어보고 입력받은 숫자를 그대로 출력

	//printf("나이가 몇살인가요? : ");
	//std::cin >> num;
	//printf("%d살", num);

	{
		printf("① printf 문을 이용해서 아래와 같은 모양 찍어보기\n");
		printf("  *  \n");
		printf(" *** \n");
		printf("*****\n\n");
	}
	{
		printf("② 특수문자를 이용해서 미로 모양 출력해보기\n");
		printf("┎┒┎───┒\n");
		printf("┃┃┖───┫\n");
		printf("┃┗──┓┏┫\n");
		printf("┃┎──┛┖┫\n");
		printf("┗┛ ───┛\n\n");

	}
	{
		printf("③ 두 수를 입력받아 스왑하기\n");
		int Num1 = 0;
		int Num2 = 0;
		int Num3 = 0;
		printf("Num1의 수: ");
		std::cin >> Num1;
		Num3 = Num1;
		printf("Num2의 수: ");
		std::cin >> Num2;
		Num1 = Num2;
		printf("Num1이 Num2의 수로 스왑함: %d\n", Num1);
		Num2 = Num3;
		printf("Num2가 Num1의 수로 스왑함: %d\n\n", Num2);

	}
	{
		printf("④ 사각형의 가로, 세로를 입력받아 넓이를 출력하기\n");
		int Width = 0;	//가로
		int length = 0;	//세로
		int area = 0;	//넓이
		printf("사각형의 가로 길이: ");
		std::cin >> Width;
		printf("사각형의 세로 길이: ");
		std::cin >> length;
		area = Width * length;
		printf("사각형의 넓이는: %d\n\n", area);


	}

	{
		printf("⑤ 두 수를 입력받아 나머지를 출력하기 (나머지 연산자 사용하지 않기).\n");
		int Number1 = 0;
		int Number2 = 0;
		int Number3 = 0;
		printf("첫번째 수: ");
		std::cin >> Number1;
		printf("두번째 수: ");
		std::cin >> Number2;
		Number3 = Number1 - (Number1 / Number2) * Number2;

		printf("두 수를 나눈 나머지는: %d\n\n", Number3);



	}
	{
		printf("⑥ 시간 계산기\n");
		int sec = 0;	//초
		int min = 0;	//분
		int hour = 0;	//시
		printf("초를 입력하세요: ");
		std::cin >> sec;
		min = sec / 60;
		hour = min / 60;
		sec %= 60;
		min %= 60;
		printf("%d시 %d분 %d초\n\n", hour, min, sec);


	}
	{
		printf("⑦ 동전 개수 계산하기\n");
		int money = 0;
		int A = 500;	//500원
		int B = 100;	//100원
		int C = 50;		//50원
		int D = 10;		//10원
		printf("금액을 입력하시오: ");
		std::cin >> money;
		A = money / A;
		money = money % 500;
		B = money / B;
		money = money % 100;
		C = money / C;
		money = money % 50;
		D = money / D;
		money = money % 10;
		printf("500원:%d개 100원:%d개 50원:%d개 10원:%d개 \n\n", A, B, C, D);




	}
	{
		printf("⑧ 자리수 분리하기(입력은 항상 세자리라고 가정)\n");

		int a = 0;	//세자리수
		int b = 0;	//100의 자리
		int c = 0;	//10의 자리
		int d = 0;	//1의 자리

		printf("세자리수를 입력하시오: ");
		std::cin >> a;
		b = a / 100; //b의 갯수가 나옴
		c = a % 100; //a를 100으로 나눈 나머지가 c에 들어감
		c = c / 10;	 //a의 나머지가 들어간 c를 다시 10으로 나누어서 c의 갯수가 나오게 함
		d = a % 10;	 //a를 10으로 나눈 나머지가 d의 들어감 곧 1의 자리수를 나타내는 d의 갯수가 나옴

		printf("100의 자리수:%d 10의 자리수:%d 1의 자리수:%d \n", b, c, d);
		b = b * 100;	//b를 100을 곱해서 다시 100의 자리수에 올림
		c = c * 10;		//c도 10을 곱해서 다시 10의 자리수에 올림
		a = b + c + d;	// 그렇게 b c d 를 다 더해서 다시 a로 만듬
		printf("각 자리수를 합한 값:%d \n", a);


	}
	//주석 주석 주석
	// 
	//주석 주석 주석

	return 0;
}



// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 
// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
