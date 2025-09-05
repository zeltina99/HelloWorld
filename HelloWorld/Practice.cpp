#include "Practice.h"
#include "Practice_a.h"
#include <iostream>	// 입출력 관련(cout)
#include <stdio.h>
#include <time.h>
#include <cstdio>	// stdio.h에 네임스페이스 추가한 래퍼
#include <random>

void Practice0905_01()	
{
	/*
	1. 특정 범위안의 랜덤한 수를 리턴하는 함수
		- int 파라메터가 2개
		- int 리턴
	*/

	int Number1 = Rand(8, 2);
	printf("8과 2사이의 랜덤한 수는 %d가 나왔다.\n", Number1);

	return;
}

void Practice0905_02()
{
	/*
	2. "당신의 나이를 입력해 주세요 : " -> "당신은 00살 입니다"
		- int 파라메터가 1개
	*/

	return;
}

void Practice0905_03()
{
	/*
	3. 원의 반지름을 입력 받고 넓이 구하기
		- float 파라메터가 1개
		- float 리턴
	*/

	return;
}

void Practice0905_04()
{
	/*
	4. 숫자를 입력받아 홀수인지 짝수인지 판단하는 함수
		- int 파라메터가 1개
		- bool 리턴(true면 홀수, false면 짝수)
	*/

	return;
}

void Practice0905_05()
{
	/*
	5. 성적 분류 함수(A~F)
		- int 파라메터가 1개
		- int 리턴(enum값)
	*/

	return;
}

void Practice0905_06()
{
	/*
	6. 아이템 설정, 아이템 해제, 아이템 토글용 함수 총 3개
		- 비트 플래그 인벤토리 수정
		- int 파라메터 두개(Inventory, 비트플래그용 enum)
	*/

	return;
}

void Practice0905_07()
{
	/*
	7. 피라미드 출력 함수
		- int 파라메터가 1개
	*/

	return;
}

/*
	탬플릿 함수 만들기
	① Min
		- 파라메터 2개
		- 리턴 : 파라메터 중 작은 수 리턴
	② Max
		- 파라메터 2개
		- 리턴 : 파라메터 중 큰 수 리턴
	③ Clamp
		- 파라메터 3개(value, min, max)
		- 리턴  
			value값이 min보다 작으면 min
			value값이 max보다 크면 max
			value값이 min과 max 사이면 value

	재귀함수를 이용해서 팩토리얼 값을 만드는 함수 만들기
		ex) 5! = 5 * 4 * 3 * 2 * 1
		
*/