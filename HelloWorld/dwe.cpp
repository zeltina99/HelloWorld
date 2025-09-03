#define _CRT_SECURE_NO_WARNINGS
#include <iostream> // 입출력 관련(cout)
#include <stdio.h>
#include <cstdio>
#include "header.h"

// 그냥 숫자를 넣으면 매직넘버인데, 실전에서 그 숫자를 중간에 계속 비일비재로 바꾸니까 그런 숫자들은 const int 변수 나 const float 변수 여기서 변수는 대문자로 정하고서 상수로 만듬

int main() 

{
	{
		printf("① 숫자를 입력받아 양수인지 음수인지 0인지 출력하기\n\n");
		int Num1 = 0;
		printf("숫자를 입력해주세요.: ");
		std::cin >> Num1;
		
		if (Num1 > 0)
		{
			printf("%d는 양수입니다.\n\n", Num1);
		}
		else if (Num1 < 0)
		{
			printf("%d는 음수입니다.\n\n", Num1);
		}
		else
		{
			printf("%d는 0입니다.\n\n", Num1);
		}

	}
	{
		printf("② 숫자를 입력받아 홀수인지 짝수인지 출력하기\n\n");
		int Num2 = 0;
		printf("숫자를 입력해주세요.: ");
		std::cin >> Num2;

		if (Num2 % 2 != 0)
		{
			printf("%d는 홀수이다.\n\n", Num2);
		}
		else
		{
			printf("%d는 짝수이다.\n\n", Num2);
		}

	}
	{
		printf("③ 두 수를 입력 받아 더 큰 수를 출력하기. 같을 경우는 같다고 출력.\n\n");
		int Num3 = 0;
		int Num4 = 0;
		printf("첫 번째 수를 입력해주세요.: ");
		std::cin >> Num3;
		printf("두 번째 수를 입력해주세요.: ");
		std::cin >> Num4;

		if (Num3 > Num4)
		{
			printf("%d가 더 큽니다.\n\n", Num3);
		}
		else if (Num3 < Num4)
		{
			printf("%d가 더 큽니다.\n\n", Num4);
		}
		else
		{
			printf("첫 번째 수 %d랑 두 번째 수 %d가 같습니다.\n\n", Num3, Num4);
		}

	}
	{
		printf("④ 나이와 키를 입력 받아, 6세 이상, 120cm 이상일 때 롤러코스터 탑승 가능, 그 외에는 불가능으로 출력\n\n");

		int age = 0; //  나이 변수 선언
		int height = 0;	// 키 변수 선언

		printf("나이를 입력해주세요.: ");
		std::cin >> age;
		printf("키를 입력해주세요.: ");
		std::cin >> height;

		if (age >= 6 && height >= 120)
		{
			printf("롤러코스터 탑승 가능\n\n");
		}
		else
		{
			printf("롤러코스터 탑승 불가능\n\n");
		}

	}
	{
		printf("⑤ 점수를 입력 받아 90점 이상은 A, 80점 이상은 B, 70점 이상은 C, 60점 이상은 D, 그 이하는 F라고 출력하기\n\n");

		int score = 0; // 점수 변수 선언
		
		printf("점수를 입력해주세요.: ");
		std::cin >> score;

		if (score >= 90)
		{
			printf("A\n\n");
		}
		else if (score >= 80)
		{
			printf("B\n\n");
		}
		else if (score >= 70)
		{
			printf("C\n\n");
		}
		else if (score >= 60)
		{
			printf("D\n\n");
		}
		else
		{
			printf("F\n\n");
		}
	}
	{
		printf("⑥ 세 과목의 점수를 입력받아, 세 과목 모두 평균 60점 이상이면 합격, 아니면 불합격을 출력하는 프로그램을 작성하세요. 한과목이라도 40점 미만이면 불합격 출력하기\n\n");

		int Kor = 0;
		int Math = 0;
		int Eng = 0;
		float Ave = 0.0f;	// 평균 변수 선언

		printf("첫번째 과목 점수를 입력해주세요.: ");
		std::cin >> Kor;
		printf("두번째 과목 점수를 입력해주세요.: ");
		std::cin >> Math;
		printf("세번째 과목 점수를 입력해주세요.: ");
		std::cin >> Eng;

		Ave = (Kor + Math + Eng) / 3.0f;	//평균 계산

		if (Ave >= 60 && Kor >= 40 && Math >= 40 && Eng >= 40)
		{
			printf("합격입니다.\n\n");
		}
		else
		{
			printf("불합격입니다.\n\n");
		}
	}
	return 0;

}