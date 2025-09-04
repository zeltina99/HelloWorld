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
 - >, <, >=, <=, ==, !=

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

/*
	��Ʈ ������
	&	(And)	�� ��Ʈ�� ��� 1�̸� 1, �ƴϸ� 0
		Ư�� ��Ʈ�� ������ �Ǿ� �ִ��� Ȯ���ϴµ� ���(�÷��� �˻�)
		int a = 10;		// 0b1010
		int b = 9;		// 0b1001
		int c = a & b;	// 0b1000	0b(��������� ��)

	|	(Or)	�� ��Ʈ�� �ϳ��� 1�̸� 1, �� �� 0�̸� 0
		Ư�� ��Ʈ�� �÷��׸� �����ϰ� ���� �� ���(�÷��� ����)
		int a = 10;		// 0b1010
		int b = 9;		// 0b1001
		int c = a | b;	// 0b1011

	^	(XOR)	�� ��Ʈ�� ���� �ٸ��� 1, ������ 0
		Ư�� ��Ʈ�� ����ϰ� ���� �� ���
		int a = 10;		// 0b1010
		int b = 9;		// 0b1001
		int c = a ^ b;	// 0b0011

	~	(Not)	��Ʈ���� ���� ��Ų��(0 -> 1, 1 -> 0)
		int a = 10;		// 0b1010
		a = ~a;			// 0b0101

	<<	(Left Shift)	��Ʈ���� �������� �̵�
		�ѹ� ������ �� ���� ���� �ι谡 �ȴ�.
		int a = 7;		// 0b0111
		a = a << 1;		// 0b1110

	>>	(Right Shift)	��Ʈ���� ���������� �̵�
		�ѹ� ������ �� ���� ���� ������ �ȴ�. (��� �� ��)
		int a =	7;		// 0b0111
		a = a >> 1;		// 0b0011
*/

/*
	�ݺ���
	- ��� ���� �ϳ�
	- Ư�� �ڵ� ����� ���ǿ� ���� ������ �ݺ��ؼ� ������ �� �ְ� ���ִ� ��
	for			�ݺ� ȸ���� ��Ȯ�� �� ����
	while		�ݺ� ȸ���� ��Ȯ���� �ʰ� ���ǿ� ���� �ݺ��� �� ���
	do-while	�ּ� �ѹ��� ������ �����ؾ� �� �� ���.(while�� ���� ����)
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

	////1. ���ڸ� �Է¹޾� ������� �������� 0���� ����ϱ�
	//int InputNumber = 0;	//���� ������ ����ϱ� ������ �����ϴ°� ����.
	//printf("���ڸ� �Է��ϼ��� : ");
	//std::cin >> InputNumber;
	//if (InputNumber > 0)	//if�� ������ ū���� ���� üũ�ǰ� �ϱ�
	//{
	//	printf("�Է��� ���ڴ� ����Դϴ�.\n");
	//}
	//else if (InputNumber < 0)
	//{
	//	printf("�Է��� ���ڴ� �����Դϴ�.\n");
	//}
	//else
	//{
	//	printf("�Է��� ���ڴ� 0�Դϴ�.\n");
	//}

	////2. ���ڸ� �Է¹޾� Ȧ������ ¦������ ����ϱ�
	//printf("Ȧ¦�� �Ǻ��ϱ� ���� ���ڸ� �Է��ϼ��� : ");
	//std::cin >> InputNumber;
	//if (InputNumber % 2 == 0)
	//{
	//	printf("¦���� �Է��߽��ϴ�.\n");
	//}
	//else
	//{
	//	printf("Ȧ���� �Է��߽��ϴ�.\n");
	//}

	////3. �� ���� �Է� �޾� �� ū ���� ����ϱ�. ���� ���� ���ٰ� ���.
	//int Number1 = 0;
	//int Number2 = 0;
	//printf("�� ū ���� Ȯ���ϱ� ���� ���� �ΰ��� �Է��ϼ��� : ");
	//std::cin >> Number1 >> Number2;
	//if (Number1 > Number2)
	//{
	//	printf("ù��° ���ڰ� �� Ů�ϴ�.\n");
	//}
	//else if (Number2 > Number1)
	//{
	//	printf("�ι�° ���ڰ� �� Ů�ϴ�.\n");
	//}
	//else
	//{
	//	printf("�� ���� ���� ���Դϴ�.\n");
	//}

	////4. ���̿� Ű�� �Է� �޾�, 6�� �̻�, 120cm �̻��� �� 
	////		�ѷ��ڽ��� ž�� ����, �� �ܿ��� �Ұ������� ���
	//const unsigned int LimitAge = 5;
	//const float LimitHeight = 120.0f;
	//unsigned int Age = 0;
	//float Height = 0;	// �Ͻ��� ��ȯ(���� ��ȯ���ִ°�, ���� ǥ�������� ū������ �����)
	//printf("���̸� �Է��ϼ��� : ");
	//std::cin >> Age;
	//printf("Ű�� �Է��ϼ��� : ");
	//std::cin >> Height;
	//if (Age > LimitAge && Height > LimitHeight)	//float�϶��� =���� �ص� �Ǳ� ��
	//{
	//	printf("�ѷ��ڽ��� ž�°���!\n");
	//}
	//else
	//{
	//	printf("�ѷ��ڽ��� ž�� �Ұ���!\n");
	//}

	////5. ������ �Է� �޾� 90�� �̻��� A, 80�� �̻��� B, 70�� �̻��� C, 
	////		60�� �̻��� D, �� ���ϴ� F��� ����ϱ�


	////6. �� ������ ������ �Է¹޾�, �� ���� ����� 60�� �̻��̸� 
	////		"�հ�", �ƴϸ� "���հ�"�� ���
	////		��, �Ѱ����̶� 40�� �̸��̸� ���հ� ����ϱ�
	//int Point1 = 0;
	//int Point2 = 0;
	//int Point3 = 0;
	//printf("���� ������ 3�� �Է��� �ּ��� : ");
	//std::cin >> Point1 >> Point2 >> Point3;
	//const int AverageLimit = 60;
	//const int FailLimit = 40;
	//float Average = (Point1 + Point2 + Point3) / 3.0f;

	//if ((Average >= AverageLimit) && 
	//	(Point1 >= FailLimit && Point2 >= FailLimit && Point3 >= FailLimit))	// int ������ float�� float
	//{
	//	printf("�հ�\n");
	//}
	//else
	//{
	//	printf("���հ�\n");
	//}


	//int Flag = 0b1010;	
	//// 0b0001 = ���� Ű�� ��������.
	//// 0b0010 = ������ Ű�� ��������.
	//// 0b0100 = ���� Ű�� ��������.
	//// 0b1000 = �Ʒ��� Ű�� ��������.

	//if ((Flag & 0b0010) != 0b0000)
	//{
	//	// ������ Ű�� ������ �ִ�.
	//}
	//else
	//{
	//	// ������ Ű�� ������ ���� �ʴ�.
	//}
	//// int Flag = 0b1010;	
	//Flag = Flag | 0b0001;	// ����� Flag = 0b1011

	//// int Flag =		0b1010;
	//int Result = Flag ^ 0b0001;	// ��� = 0b1011;
	//Result = 0b1011 ^ 0b0001;	// ��� = 0b1010;

	//Flag = 0b1010;
	//int Test = 0b0001;
	//Test = ~Test;	// ���� Ű�� ������ ������ ��� ����

	//// enum : ����鿡�� ����� �˾ƺ��� ���� �̸��� �ٿ� ���� ��
	//enum Key	//c ��Ÿ��
	//{
	//	Up		= 1 << 0,	// 0b0001
	//	Down	= 1 << 1,	// 0b0010
	//	Left	= 1 << 2,	// 0b0100
	//	Right	= 1 << 3	// 0b1000
	//};

	//// Flag�� Up�̶� ���Ƽ� 0�� �ƴҰ�� : Up�� �������
	//if ((Flag & Up) != 0)
	//{
	//	// Up��ư�� �������ִ�.
	//}

	// ���� �ǽ� : ����� �ϳ� �Է¹ް� Ȧ������ ¦������ ����ϱ�(%������)
	/*int InputNumber = 0;
	printf("�׽�Ʈ�� ���� �Է��ϼ��� : ");
	std::cin >> InputNumber;
	if ((InputNumber & 1) != 0)
	{
		printf("Ȧ���� �Է��߽��ϴ�.\n");
	}
	else
	{
		printf("¦���� �Է��߽��ϴ�.\n");
	}*/

	//��� ���� 10�����(for)
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("Hello World For: %d\n", i);
	//}

	//int Count = 1;
	//while ((Count % 3) != 0)	//while()�� ������ ���̸� �ڵ� �� ����
	//{
	//	printf("Hello World While: %d\n", Count);
	//	Count++;
	//}

	//Count = 1;
	//do
	//{
	//	printf("Hello World While: %d\n", Count);
	//	Count++;
	//} while ((Count % 3) != 0);	//while()�� ������ ���̸� �ڵ� �� ����

	// ���� �ǽ�
	// 1. 0�� �Է¹��� ������ �Է��� ��� �ް� 0�� �ԷµǸ� �Է¹��� ������ ���� ����ϱ�.
	//		while�̶� do-while ��� �غ���
	
	int Count = -1;
	int Sum = 0;
	while (Count != 0)
	{
		std::cin >> Count;
		Sum += Count;
	}
	printf("������ : %d\n\n", Sum);

	int Count_a = -1;
	int Sum_a = 0;
	do
	{
		std::cin >> Count_a;
		Sum_a += Count_a;
		
	} while (Count_a != 0);
	printf("�� ����: %d\n\n", Sum_a);

	// 2. �Է¹��� ������ ������ ����غ���
	int Number1 = 0;
	printf("���� �Է����ּ���.: ");
	std::cin >> Number1;
	for (int i = 1; i < 10; i++)
	{
		printf("%d*%d=%d\n", Number1, i, Number1 * i);
	}
	printf("\n");
	// 3. ���ڸ� �ϳ� �Է� �ް� �Է¹��� ������ �ִ� ���� �� Ȧ���� ����ϱ�
	int Number2 = 0;
	printf("���� �Է����ּ���.: ");
	std::cin >> Number2;
	if (Number2 % 2 != 0)
	{
		while (Number2 > 0)
		{
			printf("%d\n", Number2);
			Number2-=2;
		}
	}
	else
	{
		while (Number2 > 0)
		{
			printf("%d\n", Number2);
			Number2 -= 2;
		}
	}
	printf("\n");
	// 4. 1~100������ ���� �߿� 7�� ����� ����ϱ�
	const int LowLimit = 2;
	const int HighLimit = 100;
	const int MagicNum = 7;
	int Sum_b = 7;
	for (int j = LowLimit; Sum_b <= HighLimit; j++)
	{
		printf("%d\n", Sum_b);
		Sum_b = j * MagicNum;
	}
	printf("\n");
	
	// 5. �Է¹��� ���ڸ�ŭ�� ���� ���� �Ƕ�̵� �׸���
	//		3�� �Է¹޾����� �Ʒ��� ���� ����ϱ�
	//			*
	//         ***
	//		  *****

	int Star = 0;
	printf("���� �Է����ּ���.: ");
	std::cin >> Star;
	for (int x = 0; x < Star; x++)
	{
		for (int y = Star - 1; y > x ; y--) 
		{
			printf(" ");
		}
		for (int y = 0; y < 2 * x + 1; y++) 
		{
			printf("*");
		}
		printf("\n");
	}
	

	return 0;

}