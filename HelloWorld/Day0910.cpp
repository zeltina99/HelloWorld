#include "Day0910.h"
#include "Day0909.h"
#include "Day0908.h"
#include <stdio.h>
#include <iostream>
#include <random>

void Day0910_String()
{
	/*char HelloString[14];
	HelloString[0] = 'H';
	HelloString[1] = 'e';
	HelloString[2] = 'l';
	HelloString[3] = 'l';
	HelloString[4] = 'o';
	HelloString[5] = ' ';
	HelloString[6] = 'W';
	HelloString[7] = 'o';
	HelloString[8] = 'r';
	HelloString[9] = 'l';
	HelloString[10] = 'd';
	HelloString[11] = '!';
	HelloString[12] = '\n';
	HelloString[13] = '\0';*/
	//char HelloString[] = { 'H', 'e', 'l', 'l', 'o', ' ','W', 'o', 'r', 'l', 'd', '!', '\n' };
	//char HelloString[] = "Hello World!\n";

	//printf("%s", HelloString);	// 문자열 출력하기

	//HelloString[5] = '\0';
	//printf("%s\n", HelloString);	// Hello만 출력됨

	// 간단 실습
	// HelloString에서 'e'가 몇번째 있는지 출력해보기

	/*int Index = 0;
	char Target = 'a';
	bool IsFind = false;
	while (HelloString[Index] != '\0')
	{
		if (HelloString[Index] == Target)
		{
			IsFind = true;
			break;
		}
		Index++;
	}
	if (IsFind)
	{
		printf("[%c]는 %d번 인덱스에 있습니다.\n", Target, Index);
	}
	else
	{
		printf("[%c]는 찾을 수 없습니다\n", Target);
	}*/

	/*char Target = 'l';
	int Index = FindCharIndex(HelloString, Target);
	if (Index >= 0)
	{
		printf("[%c]는 %d번 인덱스에 있습니다.\n", Target, Index);
	}
	else
	{
		printf("[%c]는 찾을 수 없습니다\n", Target);
	}*/


	/*const int Size = 32;
	char InputString[Size];
	printf("문장을 입력하세요 : ");
	std::cin.getline(InputString, Size);

	printf("입력된 문장은[%s]입니다.", InputString);*/

	// 간단 실습
	// ,뒤에 있는 영어 알파벳은 모두 대문자이어야 한다.
	// 입력문장 예시 : "Hello,World!"
	// 출력문장 예시 : "Hello,WORLD!"
	
	const int Size = 32;
	char InputString[Size];
	printf("문장을 입력하세요 : ");
	std::cin.getline(InputString, Size);
	printf("입력된 문장은 [%s]입니다.\n", InputString);

	SimpleParser(InputString, ',');
	printf("파싱된 문장은 [%s]입니다.\n", InputString);

}

int FindCharIndex(const char* TargetString, const char TargetCharacter)
{
	int Index = 0;
	while (TargetString[Index] != '\0')
	{
		if (TargetString[Index] == TargetCharacter)
		{
			return Index;
		}
		Index++;
	}
	return -1;
}

void Practice0910_Practice1()
{
	// 1. 문자열의 길이를 측정하는 함수 만들기
	//		int MyStringLength(const char* Target);

	char String[] = "String Length";
	int StringLength = MyStringLength(String);
	printf("문자열의 길이는 %d입니다. \n", StringLength);

}

void Practice0910_Practice2()
{
	// 2. 문자열을 복사하는 함수 만들기
	//		void MyStringCopy(const char* Source, char* Destination);

	char String[] = "String Copy";
	char Destination[sizeof(String)];

	MyStringCopy(String, Destination);

	printf("[%s], [%s]\n", String, Destination);
}

void Practice0910_Practice3()
{
	// 3. 문자열을 합치는 함수 만들기(Source 뒤에 Destination의 내용을 붙이기)
	//		void MyStringCat(char* Source, const char* Destination);

	char String[32] = "String ";
	char Cat[] = "Cat";

	MyStringCat(String, Cat);

	printf("[%s]\n", String);

}

void Practice0910_Practice4()
{
	// 4. 문자열 두개를 비교하는 함수 만들기
	//		리턴 값이 두 문자열이 같으면 0, 첫번째가 작으면 음수, 두번째가 작으면 양수
	//		int MyStringCompare(const char* String1, const char* String2);

	char String[] = "String";
	char Compare[] = "Compare";

	int Result = MyStringCompare(String, Compare);
	printf("%d\n", Result);

}

void Practice0910_Practice5()
{
	// 5. 문자열을 입력 받아 정수를 리턴하는 함수 만들기
	//		int MyAtoI(const char* Source);

	const int Size = 32;
	int PrintNumber = 0;
	char String[Size] = { 0 };
	printf("문장을 입력해주세요. : ");
	std::cin.getline(String, Size);
	PrintNumber = MyAtoI(String);
	printf("입력한 문장의 정수는 [%d]입니다.\n\n", PrintNumber);


}

void Practice0910_Practice6()
{
	// 6. 문자열을 입력 받아 실수를 리턴하는 함수 만들기
	//		float MyAtoF(const char* Source);

	const int Size = 32;
	float PrintNumber = 0.0f;
	char String[Size] = { 0 };
	printf("문장을 입력해주세요. : ");
	std::cin.getline(String, Size);
	PrintNumber = MyAtoF(String);
	printf("입력한 문장의 실수는 [%.2f]입니다.", PrintNumber);
}

void Practice0910_Practice7()
{
/*
	① 미로 탈출 게임을 수정하여 맵 데이터파일에서 읽은 내용을 기반으로 맵 만들기
		- 데이터 파일 구조
		  - 첫줄은 가로 길이와 세로 길이가 저장되어 있다.
		   - ex) 20, 10 ⇒ 가로 20, 세로 10
		   - 두번째 줄 부터는 미로의 각 셀을 콤마(,)로 구분하여 셀의 타입을 나타낸다.
		    - 콤마(,),
		   - \n으로 다음 줄로 이동한다.
*/




}

void SimpleParser(char* Source, const char Delimiter)
{
	int CommaIndex = FindCharIndex(Source, Delimiter);
	char* AfterComma = Source + CommaIndex + 1;
	const int ToUpperGap = 'a' - 'A';
	while (*AfterComma != '\0')
	{
		if ((*AfterComma) >= 'a' && (*AfterComma) <= 'z')
		{
			(*AfterComma) -= ToUpperGap;
		}
		AfterComma++;
	}
}

int MyStringLength(const char* Target)
{
	int Index = 0;

	while (Target[Index] != '\0')
	{
		Index++;
	}
	Index++; //마지막 널 문자도 나와야 하니까.

	return Index;
}

void MyStringCopy(const char* Source, char* Destination)
{
	int Index = 0;

	while (Source[Index] != '\0')
	{
		Destination[Index] = Source[Index];
		Index++;
	}
	Destination[Index] = '\0';	//마지막 널 문자도 복사


}

void MyStringCat(char* Source, const char* Destination)
{
	int IndexSource = 0;
	int IndexDestination = 0;

	while (Source[IndexSource] != '\0')
	{
		IndexSource++;
	}
	while (Destination[IndexDestination] != '\0')
	{
		Source[IndexSource] = Destination[IndexDestination];

		IndexDestination++;
		IndexSource++;
	}
	Source[IndexSource] = '\0';

}

int MyStringCompare(const char* String1, const char* String2)
{
	int Result = 0;
	int IndexString1 = 0;
	int IndexString2 = 0;

	while (String1[IndexString1] != '\0') 
	{
		IndexString1++;
	}
	while (String2[IndexString2] != '\0') 
	{
		IndexString2++;
	}

	if (String1 < String2)
	{
		Result--;
	}
	else if (String1 > String2)
	{
		Result++;
	}
	return Result;
}

int MyAtoI(const char* Source)
{
	int Result = 0;
	int Index = 0;
	if (Source == nullptr || Source[0] == '\0')		// 아무것도 없거나 첫 번째가 널 문자일때 0을 출력
	{
		return 0;
	}
	while (Source[Index] >= '0' && Source[Index] <= '9')	// 문자열에 0 이상 그리고 9 이하 일때
	{
		Result = Result * 10 + (Source[Index] - '0');		// 문자열에 '0'을 뺀 값을, Result에 10을 곱한거에 더해서 Result에 추가
		Index++;
	}

	return Result;
}

float MyAtoF(const char* Source)
{
	float Result = 0.0f;
	float Fraction = 0.0f;
	float Divider = 1.0f;
	int Index = 0;
	bool isFraction = false;
	if (Source == nullptr || Source[0] == '\0')		// 아무것도 없거나 첫 번째가 널 문자일때 0을 출력
	{
		return 0;
	}
	while (Source[Index] != '\0')
	{
		if (Source[Index] == '.')
		{
			isFraction = true;
			Index++;
			continue;
		}
		if (Source[Index] >= '0' && Source[Index] <= '9') 
		{
	        if (!isFraction) 
			{
	            Result = Result * 10 + (Source[Index] - '0');
	        } 
			else 
			{
	            Fraction = Fraction * 10 + (Source[Index] - '0');
	            Divider *= 10.0f;
	        }
	    } 
		else 
		{
			break; // 숫자가 아니면 변환 종료
		}
	    Index++;	// 널 문자 입력
	}
	Result = Result + Fraction / Divider;
	return Result;
}


	
	
	
	
	
	