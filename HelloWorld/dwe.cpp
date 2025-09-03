#define _CRT_SECURE_NO_WARNINGS
#include <iostream> // ����� ����(cout)
#include <stdio.h>
#include <cstdio>
#include "header.h"

/*
������ Ÿ��
int : ������. �Ϲ������� 32bit. ������ (�뷫 -21��~+21��)
float : �Ǽ���. 32bit. �»������� ������ �ִ� Ÿ��. �뷫 ��7�ڸ����� ���� �߻�
double : �Ǽ���. 64bit.
bool : �Ҹ���. true/false�� ����.
char : ĳ����. �����ϳ��� �����ϴ� ������ Ÿ��. 8bit ������
	char alpha = 'a';	// ���� �ϳ��� ����
	char alpha2 = 64;
std::string : ��Ʈ��. ���ڿ��� ���� �ٷ� �� �ִ� �ڷ���.
	���ڿ� : ���� �������� ����Ȱ�
	std::string str = "Hello World!";
	char* str;
	char str[32];
*/

/*
���(Constant)
 - ������ �ʴ� ��
 - �ڵ��� �������� �������� �����ش�.
	(�����ѹ� ȸ�ǿ� ����)
	(��ũ�ηοʹ� �޸� Ÿ��üũ�� �����ϴ�)
*/

/*
�񱳿�����
 - �񱳸� �ϴ� ������. ���̳� �����̳İ� ����� ���´�.
 - >, <, >=, <=, ==

 int a = 10;
 int b = 20;
 bool result = a > b;		// ����� �����̴ϱ� result = false;

 int a = 100;
 int b = 20;
 bool result = a > b;		// ����� ���̴ϱ� result = true;

 int a = 50;
 int b = 50;
 bool result = a == b;	// ����� ���̴ϱ� result = true;

 // ���Ǽ��� �ڷ����� �� �����ڸ� ����ϸ� �� �ȴ١� �� �������?
 // ��Ȯ�ϰ� �̾߱��ϸ�
	"���� �������� ���ϴ� ==, <=, >=�� �����ؼ� ����ؾ� �Ѵ�." �Դϴ�.
*/

/*
���
 - ���α׷��� �帧�� �����ϴ� ��(Statement)
  - ���ǹ� : ���ǿ� ���� ���α׷��� �帧�� �����ϴ� ��
	- if, else if, else
	- switch
	- ���׿�����
  - �ݺ��� : ���� ���ǿ� ���� �ڵ带 �ݺ��ϴ� ��
*/

/*
�� ������
 - bool���� �޾� bool�� �� ����� ����.
&&	(And)	&&�� ������ �� �� true�� true. �� �ܴ� false
||	(Or)	||�� ���ʿ� �ϳ��� true�� ������ true, �ƴϸ� false
!	(Not)	! ���� bool�� true�� false, false�� true.
*/

#include <iostream>	// ����� ����(cout)
#include <stdio.h>
#include <cstdio>	// stdio.h�� ���ӽ����̽� �߰��� ����
#include "header.h"

//using namespace std;

int main() // ��Ʈ�� ����Ʈ(�ڵ尡 ���۵Ǵ� ��)
{
	//printf("Hello\tWorld!\n");		// C����� ��� ���
	//printf("\"����\"\t");			// ""�ȿ� \n�� ������ ���� �ٲٶ�� �ǹ�(
	//printf("82����Դϴ�.�������á�\n");

	//// �̽������� ������
	//// \n : �ٹٲٱ�(���๮��)
	//// \t : �� �ֱ�
	//// \" : �ֵ���ǥ �Ѱ�
	//// \\ : \���
	//// \r : ĳ���� ����(�����쿡���� �߿����� ����. ������������ �߿���)
	//	
	////std::cout << "Hello World!\n";	// C++ ��� ���

	//// number��� �̸��� ���� int(��Ƽ��)������ �����ϰ� �ű⿡ 0�� �����Ѵ�.
	//int number;	// ���� ����.
	//number = 0;	// ������ ���� ����.

	//// int : ������(�Ҽ����� ���� ����, 5, 10, -2, 0, 66 ...)
	//number = 5.3; // number���� 5�� ����ȴ�.
	//number = 5 / 2;	// number���� 2�� ����ȴ�.

	////

	//scanf("%d", &number);	// ���ڸ� �ϳ� �Է� �ޱ�(C)
	//printf("�Է��� ���ڴ�(C) : %d\n", number);

	//std::cin >> number;		// ���ڸ� �ϳ� �Է� �ޱ�(C++)
	//printf("�Է��� ���ڴ�(C++) : %d\n", number);

	// ���α׷��� �������� �� ���̸� ����� �Է¹��� ���ڸ� �״�� ����غ���

	// �߰��߰��߰��߰��߰��߰��߰��߰��߰�

	// �߰��߰��߰��߰��߰��߰��߰��߰��߰�2

	// �ǽ��ǽ�
	//  �ǽ��ǽ�

	//int number1 = 0;
	//int number2 = 0;
	//printf("���� 1�� �Է��Ͻÿ� : ");
	//std::cin >> number1;
	//printf("���� 2�� �Է��Ͻÿ� : ");
	//std::cin >> number2;
	//int number3 = number1 + number2;
	//printf("�� ������ ���� %d�Դϴ�.", number3);

	//float number1 = 10.0f;	// 10�̶�� float Ÿ���� ���� float�� numnber1�� �ֱ�
	//float number2 = 15.0;	// 15��� double Ÿ���� ���� float�� number2�� �ֱ�

	//std::cin >> number1 >> number2;
	//printf("number1 : %f\nnumber2 : %.2f", number1, number2);

	//// ���ܽǽ� : ���� �������� �Է� �ް� ���� ���ϱ�
	//const float Pi = 3.141592f;	// ����� �����ϰ� ����
	//float radius = 0.0f;
	//printf("���� �������� �Է��ϼ��� : ");
	//std::cin >> radius;
	//printf("���� ���̴� [%f]�Դϴ�.\n", radius * radius * Pi);


	//int square = 0;
	//printf("���簢���� �Ѻ��� ���̸� �Է��ϼ��� : ");
	//std::cin >> square;
	//printf("���簢���� ���̴� [%d]�Դϴ�.", square * square);
	//// �����÷ο� �߻��� �� ����

	//float a = 123.0f;
	//float b = 0.0f;
	//std::cin >> b;
	//b = b * 123.0f;

	//bool result = a == b;	// F9 : �극��ũ ����Ʈ ����/����

	//float Ÿ���� ==�� ���� �� �ݵ�� �Ʒ��� ���� �����ؾ���.
	//float epsilon = 0.001f;
	//a < (b + epsilon);
	//a > (b - epsilon);

	// if : �Ұ�ȣ ���� true�� �߰�ȣ ���� �ڵ带 �����϶�.
	//		���� Ư�� ������ ������ ���� � �ڵ带 �����ϰ� ���� �� ���.

	//int a = 10;
	//int b = 0;
	//printf("a�� 10\nb�� �Է��ϼ��� : ");
	//std::cin >> b;

	//if (a > b)
	//{
	//	printf("if�� �����ߴ�.\n");
	//	printf("b�� %d�� a�� �� ũ��\n", b);
	//}

	//if (a <= b)
	//{
	//	printf("b�� %d�� a�� �� �۰ų�����\n", b);
	//}

	//// if-else : �̰� �ƴϸ� �����϶� ���.
	//if (a > b)
	//{
	//	printf("a�� b���� ũ��.\n");
	//}
	//else
	//{
	//	printf("a�� b���� �۰ų� ����.\n");
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
	//	printf("1�̴�.\n");
	//	break;
	//case 3:
	//	printf("3�̴�.\n");
	//	break;
	//case 5:
	//	printf("5�̴�.\n");
	//	break;
	//default:
	//	printf("1,3,5�� �ƴϴ�.\n");
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
	//c = (a > b) ? (a * 2 + b) : (a + b * 2); // ���׿�����

	int a = 10;
	if (a > 5 && !(10 > a))
	{
		// ����
	}
	else
	{
		// ����
	}


	return 0;
}