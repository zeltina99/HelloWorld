#define _CRT_SECURE_NO_WARNINGS
#include <iostream> // ����� ����(cout)
#include <stdio.h>
#include <cstdio>
#include "header.h"

int main() 

{
	float ban = 0.0f; // ������ ����
	float area = 0.0f; // ���� ����
	float PI = 3.14f; // ���� ����

	printf("���� �������� �Է� �Ͻÿ�: ");
	std::cin >> ban;
	area = PI * (ban * ban);
	printf("���� ���̴�: %f\n", area);

	return 0;

}