#include "Day0910.h"
#include "Day0909.h"
#include "Day0908.h"
#include <stdio.h>
#include <iostream>
#include <random>

void Day0910_String()
{
	char HelloString[14];
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
	HelloString[13] = '\0';
	//char HelloString[] = { 'H', 'e', 'l', 'l', 'o', ' ','W', 'o', 'r', 'l', 'd', '!', '\n' };
	//char HelloString[] = "Hello World!\n";

	printf("%s", HelloString);	// 문자열 출력하기

	HelloString[5] = '\0';
	printf("%s", HelloString);	// Hello만 출력됨

	// 간단 실습
	// HelloString에서 'e'가 몇번째 있는지 출력해보기

	for (int i = 0; i < 14; i++)
	{
		if (HelloString[i] == 'e')
		{
			printf("'e'는 %d번째에 있습니다.\n", i);
		}
		if (HelloString[i] == '\0')
		{
			break;
		}
	}
}
