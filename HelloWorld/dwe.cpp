#define _CRT_SECURE_NO_WARNINGS
#include <iostream> // ����� ����(cout)
#include <stdio.h>
#include <cstdio>
#include "header.h"

// �׳� ���ڸ� ������ �����ѹ��ε�, �������� �� ���ڸ� �߰��� ��� ���Ϻ���� �ٲٴϱ� �׷� ���ڵ��� const int ���� �� const float ���� ���⼭ ������ �빮�ڷ� ���ϰ� ����� ����

int main() 

{
	{
		printf("�� ���ڸ� �Է¹޾� ������� �������� 0���� ����ϱ�\n\n");
		int Num1 = 0;
		printf("���ڸ� �Է����ּ���.: ");
		std::cin >> Num1;
		
		if (Num1 > 0)
		{
			printf("%d�� ����Դϴ�.\n\n", Num1);
		}
		else if (Num1 < 0)
		{
			printf("%d�� �����Դϴ�.\n\n", Num1);
		}
		else
		{
			printf("%d�� 0�Դϴ�.\n\n", Num1);
		}

	}
	{
		printf("�� ���ڸ� �Է¹޾� Ȧ������ ¦������ ����ϱ�\n\n");
		int Num2 = 0;
		printf("���ڸ� �Է����ּ���.: ");
		std::cin >> Num2;

		if (Num2 % 2 != 0)
		{
			printf("%d�� Ȧ���̴�.\n\n", Num2);
		}
		else
		{
			printf("%d�� ¦���̴�.\n\n", Num2);
		}

	}
	{
		printf("�� �� ���� �Է� �޾� �� ū ���� ����ϱ�. ���� ���� ���ٰ� ���.\n\n");
		int Num3 = 0;
		int Num4 = 0;
		printf("ù ��° ���� �Է����ּ���.: ");
		std::cin >> Num3;
		printf("�� ��° ���� �Է����ּ���.: ");
		std::cin >> Num4;

		if (Num3 > Num4)
		{
			printf("%d�� �� Ů�ϴ�.\n\n", Num3);
		}
		else if (Num3 < Num4)
		{
			printf("%d�� �� Ů�ϴ�.\n\n", Num4);
		}
		else
		{
			printf("ù ��° �� %d�� �� ��° �� %d�� �����ϴ�.\n\n", Num3, Num4);
		}

	}
	{
		printf("�� ���̿� Ű�� �Է� �޾�, 6�� �̻�, 120cm �̻��� �� �ѷ��ڽ��� ž�� ����, �� �ܿ��� �Ұ������� ���\n\n");

		int age = 0; //  ���� ���� ����
		int height = 0;	// Ű ���� ����

		printf("���̸� �Է����ּ���.: ");
		std::cin >> age;
		printf("Ű�� �Է����ּ���.: ");
		std::cin >> height;

		if (age >= 6 && height >= 120)
		{
			printf("�ѷ��ڽ��� ž�� ����\n\n");
		}
		else
		{
			printf("�ѷ��ڽ��� ž�� �Ұ���\n\n");
		}

	}
	{
		printf("�� ������ �Է� �޾� 90�� �̻��� A, 80�� �̻��� B, 70�� �̻��� C, 60�� �̻��� D, �� ���ϴ� F��� ����ϱ�\n\n");

		int score = 0; // ���� ���� ����
		
		printf("������ �Է����ּ���.: ");
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
		printf("�� �� ������ ������ �Է¹޾�, �� ���� ��� ��� 60�� �̻��̸� �հ�, �ƴϸ� ���հ��� ����ϴ� ���α׷��� �ۼ��ϼ���. �Ѱ����̶� 40�� �̸��̸� ���հ� ����ϱ�\n\n");

		int Kor = 0;
		int Math = 0;
		int Eng = 0;
		float Ave = 0.0f;	// ��� ���� ����

		printf("ù��° ���� ������ �Է����ּ���.: ");
		std::cin >> Kor;
		printf("�ι�° ���� ������ �Է����ּ���.: ");
		std::cin >> Math;
		printf("����° ���� ������ �Է����ּ���.: ");
		std::cin >> Eng;

		Ave = (Kor + Math + Eng) / 3.0f;	//��� ���

		if (Ave >= 60 && Kor >= 40 && Math >= 40 && Eng >= 40)
		{
			printf("�հ��Դϴ�.\n\n");
		}
		else
		{
			printf("���հ��Դϴ�.\n\n");
		}
	}
	return 0;

}