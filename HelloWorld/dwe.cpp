#define _CRT_SECURE_NO_WARNINGS
#include <iostream> // ����� ����(cout)
#include <stdio.h>
#include <cstdio>
#include "header.h"

int main() 

{
	// ���ܽǽ� : ���� �������� �Է� �ް� ���� ���ϱ�
	float radius = 0.0f;
	printf("���� �������� �Է��ϼ��� : ");
	std::cin >> radius;
	printf("���� ���̴� [%f]�Դϴ�.\n", radius * radius * 3.141592f);

	return 0;

}