#define _CRT_SECURE_NO_WARNINGS
#include <iostream> // ����� ����(cout)
#include <stdio.h>
#include <cstdio>
#include "header.h"

/*
	������ Ÿ��
	int : ������. �Ϲ������� 32bit. ������ (�뷫 -21�� ~ +21��)
	float : �Ǽ���. 32bit. �»������� ������ �ִ� Ÿ��. �뷫 �� 7��° �ڸ����� ���� �߻�
	ex) 3.14159 Ȥ�� 314.159 ������ ������ �ٵ� ���ڰ� �ϳ� �� �þ�� ������ �߻�
	double : �Ǽ���. 64bit.
	bool : �Ҹ���. true/false�� ����
	char : ĳ����. ���� �ϳ��� �����ϴ� ������ Ÿ��. 8bit ������
		char alpha = 'a';	// ���� �ϳ��� ����
		char alpha2 = 64;
	std::string : ��Ʈ��. ���ڿ��� ���� �ٷ� �� �ִ� �ڷ���
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
	-�񱳸� �ϴ� ������. ���̳� �����̳İ� ���
	>, <, <=, >=, ==
*/

int main() 

{

	// ���ܽǽ� : ���� �������� �Է� �ް� ���� ���ϱ�
	const float Pi = 3.141592f;	// ����� �����ϰ� ���� _(�Ǽ��� �� �ϰ� ���� ���)
	float radius = 0.0f;
	printf("���� �������� �Է��ϼ��� : ");
	std::cin >> radius;
	printf("���� ���̴� [%f]�Դϴ�.\n", radius * radius * Pi);

	//int square = 0;
	//printf("���簢���� �Ѻ��� ���̸� �Է��ϼ��� : ");
	//std::cin >> square;
	//printf("���簢���� ���̴� [%d]�Դϴ�.", square * square);
	//// �����÷ο� �߻��� �� ����



	return 0;

}