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

float Sum(float Test1, float Test2);

template <typename T>			// ���ø� �Լ�
T Add(T Number1, T Number2)
{
	return Number1 + Number2;
};

// ���ø� ���� �Լ�
template <typename U>
U Min(U Number1, U Number2)
{
	return Number1 - Number2;
};

// ���ø� ���ϱ� �Լ�
template <typename V>
V Mul(V Number1, V Number2)
{
	return Number1 * Number2;
};

// ���ø� ������ �Լ�
template <typename W>
W Div(W Number1, W Number2)
{
	return Number1 / Number2;
};


// �Ķ���� �ΰ��� ���ؼ� �����ִ� �Լ�
int Multiply(int Number1, int Number2 = 2);	// ����Ʈ �Ķ���� ��� ����
											// �ش� �Ķ���� ���� �Լ��� ȣ���ϸ� �⺻������ ������ ���� ��� ����.
											// ����ο��� ���� �����Ѵ�.
											// ����Ʈ �Ķ���ʹ� �׻� �ڿ������� �־�� �Ѵ�.

// �Ķ���� �ΰ��� ���� �����ִ� �Լ�
int Minus(int Num1, int Num2);

// �Ķ���� �ΰ��� ������ �����ִ� �Լ�
int Division(int Number1, int Number2);

int TestRecurcive(int Number);

inline int Square(int Number)
{
	return Number * Number;
}