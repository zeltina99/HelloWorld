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

	int Number1 = Rand(8, 2);
	printf("8�� 2������ ������ ���� %d�� ���Դ�.\n", Number1);

	return;
}

void Practice0905_02()
{
	/*
	2. "����� ���̸� �Է��� �ּ��� : " -> "����� 00�� �Դϴ�"
		- int �Ķ���Ͱ� 1��
	*/

	return;
}

void Practice0905_03()
{
	/*
	3. ���� �������� �Է� �ް� ���� ���ϱ�
		- float �Ķ���Ͱ� 1��
		- float ����
	*/

	return;
}

void Practice0905_04()
{
	/*
	4. ���ڸ� �Է¹޾� Ȧ������ ¦������ �Ǵ��ϴ� �Լ�
		- int �Ķ���Ͱ� 1��
		- bool ����(true�� Ȧ��, false�� ¦��)
	*/

	return;
}

void Practice0905_05()
{
	/*
	5. ���� �з� �Լ�(A~F)
		- int �Ķ���Ͱ� 1��
		- int ����(enum��)
	*/

	return;
}

void Practice0905_06()
{
	/*
	6. ������ ����, ������ ����, ������ ��ۿ� �Լ� �� 3��
		- ��Ʈ �÷��� �κ��丮 ����
		- int �Ķ���� �ΰ�(Inventory, ��Ʈ�÷��׿� enum)
	*/

	return;
}

void Practice0905_07()
{
	/*
	7. �Ƕ�̵� ��� �Լ�
		- int �Ķ���Ͱ� 1��
	*/

	return;
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