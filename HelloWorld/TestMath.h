#pragma once

// ������Ͽ��� ������ �ۼ��Ѵ�.
// ctrl + k + o : Cpp�� h�� ��ȯ
// ctrl + . : ���� �����

void PrintHelloWorld();		// �����ϴ� ���� ����(void) �̸��� PrintHelloWorld�� �Ķ���͵� ����.

/// <summary>
/// �� �Ķ���͸� ���ϴ� �Լ�
/// </summary>
/// <param name="Test1">������ ù��° ����</param>
/// <param name="Test2">������ �ι�° ����</param>
/// <returns>�Ķ���Ͱ� ������ ��</returns>
int Sum(int Test1, int Test2);	// ����Ÿ���� int�� �̸��� Sum�̰� �Ķ���ʹ� int 2���� �Լ��� �����ߴ�.
//int Sum(int, int);	// ������ ���� �Լ��� �Ķ���� �̸��� �����ص� �ȴ�.

// �Ķ���� �ΰ��� ���ؼ� �����ִ� �Լ�
int Multiply(int Number1, int Number2 = 2);	// ����Ʈ �Ķ���� ��� ����
											// �ش� �Ķ���� ���� �Լ��� ȣ���ϸ� �⺻������ ������ ���� ��� ����.
											// ����ο��� ���� �����Ѵ�.
											// ����Ʈ �Ķ���ʹ� �׻� �ڿ������� �־�� �Ѵ�.

// �Ķ���� �ΰ��� ���� �����ִ� �Լ�
int Minus(int Num1, int Num2);

// �Ķ���� �ΰ��� ������ �����ִ� �Լ�
int Division(int Number1, int Number2);