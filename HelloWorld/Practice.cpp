#include "Practice.h"
#include "Practice_a.h"
#include <iostream>	// ����� ����(cout)
#include <stdio.h>
#include <time.h>
#include <cstdio>	// stdio.h�� ���ӽ����̽� �߰��� ����
#include <random>

void Practice0905_01()	
{
	/*
	1. Ư�� �������� ������ ���� �����ϴ� �Լ�
		- int �Ķ���Ͱ� 2��
		- int ����
	*/

	/*int Number1 = 0;
	int Number2 = 0;
	int RandomNumber = 0;

	printf("ū ���� �����ּ���. : ");
	std::cin >> Number1;
	printf("���� ���� �����ּ���. : ");
	std::cin >> Number2;

	RandomNumber = Rand(Number1, Number2);
	printf("�������� %d�� ���Խ��ϴ�.\n", RandomNumber);

	return;*/
}

void Practice0905_02()
{
	/*
	2. "����� ���̸� �Է��� �ּ��� : " -> "����� 00�� �Դϴ�"
		- int �Ķ���Ͱ� 1��
	*/
	/*int Age = 0;
	printf("����� ���̸� �Է��� �ּ��� : ");
	std::cin >> Age;
	Age = AgeA(Age);
	printf("����� %d ���Դϴ�.\n", Age);

	return;*/
}

void Practice0905_03()
{
	/*
	3. ���� �������� �Է� �ް� ���� ���ϱ�
		- float �Ķ���Ͱ� 1��
		- float ����
	*/

	/*float Radius = 0.0f;
	float Area = 0.0f;
	printf("���� �������� �Է��ϼ���. : ");
	std::cin >> Radius;
	Area = CircleArea(Radius);

	printf("���� ���̴� %.3f�Դϴ�.\n", Area);

	return;*/
}

void Practice0905_04()
{
	/*
	4. ���ڸ� �Է¹޾� Ȧ������ ¦������ �Ǵ��ϴ� �Լ�
		- int �Ķ���Ͱ� 1��
		- bool ����(true�� Ȧ��, false�� ¦��)
	*/
	/*int Test_Number1 = 0;
	printf("���ڸ� �Է����ּ���. : ");
	std::cin >> Test_Number1;
	ParityCheck(Test_Number1);

	return;*/
}

void Practice0905_05()
{
	/*
	5. ���� �з� �Լ�(A~F)
		- int �Ķ���Ͱ� 1��
		- int ����(enum��)
	*/

	/*int Score = 0;
	printf("������ �Է��Ͻÿ�. : ");
	std::cin >> Score;
	ScoreClass(Score);

	return;*/
}

void Practice0905_06()
{
	/*
	6. ������ ����, ������ ����, ������ ��ۿ� �Լ� �� 3��
		ItemSet(Inventory, enum), ItemClear, ItemToggle
		- ��Ʈ �÷��� �κ��丮 ����
		- int �Ķ���� �ΰ�(Inventory, ��Ʈ�÷��׿� enum)
		- int ����(Inventory)
	*/

	//enum Item
	//{
	//	Key = 1 << 0,		//����
	//	Lighter = 1 << 1,	//������
	//	Book = 1 << 2,		//å
	//	Letter = 1 << 3		//����
	//};

	//const int ItemCount = 4;
	//int Inventory = 0;
	//int PlayerSelcet = -1;

	//while (PlayerSelcet != ItemCount)
	//{
	//	printf("� ���� �ұ��? \n[1.������ ����, 2.������ ����, 3.������ ���, 4.����]: ");
	//	std::cin >> PlayerSelcet;

	//	switch (PlayerSelcet)
	//	{
	//	case 1:
	//		{
	//			int AddItem = 0;
	//			printf("� �������� �߰��ұ��? [0:����, 1:������, 2:å, 3:����]: ");
	//			std::cin >> AddItem;
	//			Inventory = ItemSet(Inventory, AddItem);
	//		}
	//		break;
	//	case 2:
	//		{
	//			int RemoveItem = 0;
	//			printf("� �������� �����ұ��? [0:����, 1:������, 2:å, 3:����]: ");
	//			std::cin >> RemoveItem;
	//			Inventory = ItemClear(Inventory, RemoveItem);
	//		}
	//		break;
	//	case 3:
	//		{
	//			int Item = 0;
	//			printf("� �������� ����ұ��? [0:����, 1:������, 2:å, 3:����]: ");
	//			std::cin >> Item;
	//			Inventory = ItemToggle(Inventory, Item);
	//		}
	//		break;
	//	case 4:
	//		continue;
	//	default:
	//		printf("ERROR!!!\n");
	//		break;
	//	}
	//	printf("�κ��丮 : ");
	//		if ((Inventory & Key) != 0)
	//		{
	//			printf("���� ");
	//		}
	//		if ((Inventory & Lighter) != 0)
	//		{
	//			printf("������ ");
	//		}
	//		if ((Inventory & Book) != 0)
	//		{
	//			printf("å ");
	//		}
	//		if ((Inventory & Letter) != 0)
	//		{
	//			printf("���� ");
	//		}
	//		printf("\n");

	//}

	//return;
}

void Practice0905_07()
{
	/*
	7. �Ƕ�̵� ��� �Լ�
		- int �Ķ���Ͱ� 1��
	*/

	/*int Star = 0;
	printf("�Ƕ�̵� ������ �Է��Ͻÿ�. : ");
	std::cin >> Star;

	Pyramid(Star);

	return;*/
}

/*
	���ø� �Լ� �����
	�� Min
		- �Ķ���� 2��
		- ���� : �Ķ���� �� ���� �� ����
	�� Max
		- �Ķ���� 2��
		- ���� : �Ķ���� �� ū �� ����
	�� Clamp
		- �Ķ���� 3��(value, min, max)
		- ����  
			value���� min���� ������ min
			value���� max���� ũ�� max
			value���� min�� max ���̸� value

	����Լ��� �̿��ؼ� ���丮�� ���� ����� �Լ� �����
		ex) 5! = 5 * 4 * 3 * 2 * 1
		
*/

void Practice0905_08()
{
	//�� Min
	//	-�Ķ���� 2��
	//	- ���� : �Ķ���� �� ���� �� ����

	
	/*int Number01 = Min(8, 2);
	float Number02 = Min(2.3f, 5.3f);

	printf("%d�� %.1f\n\n", Number01, Number02);*/

	/*
	�� Max
		- �Ķ���� 2��
		- ���� : �Ķ���� �� ū �� ����
	*/

	/*int Number03 = Max(8, 2);
	float Number04 = Max(2.3f, 5.3f);

	printf("%d�� %.1f\n\n", Number03, Number04);*/

	/*
	�� Clamp
		- �Ķ���� 3��(value, min, max)
		- ����  
			value���� min���� ������ min
			value���� max���� ũ�� max
			value���� min�� max ���̸� value
	*/

	/*int Number05 = Clamp(17, 2, 15);
	int Number06 = Clamp(7, 17, 23);
	float Number07 = Clamp(12.3f, 4.7f, 19.7f);

	printf("%d�� %d�� %.1f\n\n", Number05, Number06, Number07);*/

}

void Practice0905_09()
{
	/*
	����Լ��� �̿��ؼ� ���丮�� ���� ����� �Լ� �����
		ex) 5! = 5 * 4 * 3 * 2 * 1
	*/

	int Number001;
	printf("���丮���� �� ���ڸ� �Է����ּ���. : ");
	std::cin >> Number001;
	printf("%d���丮���� %d�Դϴ�.\n", Number001, Factorial(Number001));


}