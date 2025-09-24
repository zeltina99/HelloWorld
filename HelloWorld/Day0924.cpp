#include "Day0924.h"
#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>

bool operator<(const SortTest& Left, const SortTest& Right)
{
	return Left.a < Right.a;
}



void PrintVector(std::vector<int>& InVector)
{
	for (int n : InVector)
	{
		printf("%d ", n);
	}
	printf("\n");
}

void PrintVector(std::vector<SortTest>& InVector)
{
	printf("Vector : ");
	for (const SortTest& n : InVector)
	{
		printf("(%d, %.1f) ", n.a, n.b);
	}
	printf("\n");
}

void Day0924::TestLambda()
{
	std::vector<int> Numbers = { 5, 7, 1, 9, 3 };
	std::sort(Numbers.begin(), Numbers.end());	// 오름차순 정렬
	PrintVector(Numbers);

	std::sort(Numbers.begin(), Numbers.end(),
		[](int a, int b)
		{
			return a > b;	// 내림차순 정렬
		}
	);
	PrintVector(Numbers);
}

void Day0924::TestLambda2()
{
	std::vector<SortTest> Test = { {1, 5.0f}, {7, 3.5f}, {5, 10.0f} };
	PrintVector(Test);
	std::sort(Test.begin(), Test.end());
	PrintVector(Test);
	std::sort(Test.begin(), Test.end(),
		[](const SortTest& First, const SortTest& Second)
		{
			return First.b < Second.b;
		}
	);
	PrintVector(Test);

	
	

}

void Day0924::TestLambdaPractice()
{
	// 간단 실습
	// ① 람다로 SortTest의 a,b 내림차순 정렬 각각 만들어보기

	std::vector<SortTest> Test = { {1, 5.0f}, {7, 3.5f}, {5, 10.0f} };
	PrintVector(Test);
	std::sort(Test.begin(), Test.end(),
		[](const SortTest& First, const SortTest& Second)
		{
			return First.a > Second.a;	// 내림차순 정렬
		}
	);
	PrintVector(Test);
	std::sort(Test.begin(), Test.end(),
		[](const SortTest& First, const SortTest& Second)
		{
			return First.b > Second.b;	// 내림차순 정렬
		}
	);
	PrintVector(Test);

	// ② 특정 조건을 만족하는 첫번째 요소 찾기
	std::vector<int> Numbers = { 1,2,3,4,5,6,7,8,9,10 };
	int Threshold = 5;		// Threshold보다 큰 첫번째 원소 찾기
	std::vector<int>::iterator iter = std::find_if(Numbers.begin(), Numbers.end(),
		[Threshold](int n)
		{
			return Threshold < n;	// 캡쳐한 Threshold보다 크면 true
		}
	);
	if (iter != Numbers.end())
	{
		// 찾았다.
		printf("%d보다 큰 첫번째 원소는 %d입니다.\n", Threshold, *iter);
	}
	// [](int n)
	// {return 참/거짓;}
}

void PrintSet(const std::set<int>& InSet)
{
	printf("Set : ");
	for (int n : InSet)
	{
		printf("%d ", n);
	}
	printf("\n");
}

void PrintSet1(const std::set<int>& InSet)
{
	for (int n : InSet)
	{
		printf("%d ", n);
	}
	printf("\n");
}

void PrintSet2(const std::set<std::string>& InSet)
{
	for (std::string n : InSet)
	{
		printf("%s ", n.c_str());
	}
	printf("\n");
}

void Day0924::TestSet()
{
	//#include <set> 필수
	std::set<int> TestSet;
	
	printf("\nset에 추가하기\n");
	TestSet.insert(30);
	TestSet.insert(10);
	TestSet.insert(50);
	TestSet.insert(20);
	TestSet.insert(30);	// 무시됨
	PrintSet(TestSet);

	printf("\nset의 크기\n");
	printf("size : %d\n", static_cast<int>(TestSet.size()));

	printf("\n원소 찾기\n");
	int Target = 20;
	std::set<int>::iterator iter = TestSet.find(Target);	// 존재 확인 + 값도 확인
	if (iter != TestSet.end())
	{
		// 찾았다.
		printf("find : %d를 찾았습니다.\n", Target);
	}
	else
	{
		// 못 찾았다.
		printf("find : %d를 못 찾았습니다.\n", Target);
	}
	bool IsFind = TestSet.contains(Target);	// Target이 있는지 없는지 확인하는 함수
	if (IsFind)
	{
		// 찾았다.
		printf("contains : %d를 찾았습니다.\n", Target);
	}
	else
	{
		// 못 찾았다.
		printf("contains : %d를 못 찾았습니다.\n", Target);
	}

	printf("\n하나만 삭제하기(30)\n");
	TestSet.erase(30);
	PrintSet(TestSet);

	printf("\n전부 삭제하기\n");
	TestSet.clear();
	PrintSet(TestSet);

	printf("\n셋이 비었는지 안비었는지 확인하기\n");
	if (TestSet.empty())
	{
		// 비었다.
		printf("비어있다.");
	}
	else
	{
		// 안 비었다.
		printf("안 비어있다.");
	}

}

void Day0924::TestSetPractice()
{
	// ① 중복 없는 정수 입력 및 출력
	//	- 사용자가 여러 개의 정수를 입력하면 중복 없이 저장하고 출력하는 프로그램을 만들어보세요.
	std::set<int> TestSet1;
	int InputNumber1 = 0;
	printf("여러 개의 정수를 입력해주세요(단, -1 입력시 출력) : ");
	while (true)
	{
		std::cin >> InputNumber1;
		if (InputNumber1 == -1)
		{
			break;
		}
		TestSet1.insert(InputNumber1);
	}
	PrintSet(TestSet1);
	printf("\n\n");
	// ② 집합 연산(합집합, 교집합, 차집합)
	//	- 두 개의 set을 만들어서 합집합, 교집합, 차집합을 구하는 실습을 해보세요.
	std::vector<int> TestVector1 = { 10,20,30,40,50,60,70,80,90 };
	std::vector<int> TestVector2 = { 10,30,50,70,90,110,130,150,170 };
	printf("첫 번째 집합 : ");
	PrintVector(TestVector1);
	printf("두 번째 집합 : ");
	PrintVector(TestVector2);
	std::set<int> TestSet2;	// 합집합
	std::set<int> TestSet3;	// 교집합, 차집합
	printf("\n");
	for (auto iter1 = TestVector1.begin(); iter1 != TestVector1.end(); iter1++)
	{
		TestSet2.insert(*iter1);
		for (auto iter2 = TestVector2.begin(); iter2 != TestVector2.end(); iter2++)
		{
			TestSet2.insert(*iter2);
			if (*iter1 == *iter2)
			{
				TestSet3.insert(*iter2);
			}
		}
	}
	printf("합집합 : ");
	PrintSet1(TestSet2);
	printf("교집합 : ");
	PrintSet1(TestSet3);
	for (auto iter2 = TestSet3.begin(); iter2 != TestSet3.end(); iter2++)
	{
		TestSet2.erase(*iter2);
	}
	
	printf("차집합 : ");
	PrintSet1(TestSet2);
	printf("\n\n");


	// ③ 특정 값의 존재 여부 확인
	//	- set에 특정 값이 들어있는지 검사하는 프로그램을 만들어보세요.
	int Target = 20;
	bool IsFind = TestSet2.contains(Target);	// Target이 있는지 없는지 확인하는 함수
	if (IsFind)
	{
		// 찾았다.
		printf("contains : %d를 찾았습니다.\n", Target);
	}
	else
	{
		// 못 찾았다.
		printf("contains : %d를 못 찾았습니다.\n", Target);
	}

	
	// ④ 오름차순/내림차순 출력
	//	- std::set의 원소를 오름차순 또는 내림차순으로 출력하는 실습을 해보세요.(반복자의 종류)
	std::set<int> TestSet4;
	TestSet4.insert(40);
	TestSet4.insert(20);
	TestSet4.insert(70);
	TestSet4.insert(10);
	TestSet4.insert(50);
	TestSet4.insert(30);
	printf("오름차순 : ");
	for (auto iter3 = TestSet4.begin(); iter3 != TestSet4.end(); iter3++)
	{
		printf("[%d] ", *iter3);
	}
	printf("\n");
	printf("내림차순 : ");
	for (auto riter = TestSet4.rbegin(); riter != TestSet4.rend(); riter++)
	{
		printf("[%d] ", *riter);
	}
	printf("\n\n");


	// ⑤ 문자열 중복제거
	//	- 여러 개의 문자열을 입력받아 중복 없이 저장하고 출력하는 실습을 해보세요.
	std::set<std::string> TestSet5;
	printf("여러 개의 문자열을 입력 해주세요.(단, 빈줄 입력시 출력) : ");
	std::string Inputstring;
	std::getline(std::cin, Inputstring);
	while (true)
	{
		std::getline(std::cin, Inputstring);
		if (Inputstring.empty())
		{
			break;
		}
		TestSet5.insert(Inputstring);
	}
	PrintSet2(TestSet5);
	printf("\n\n");

	// ⑥ 최댓값, 최솟값 찾기
	//	- set에서 가장 큰 값과 작은 값을 찾아 출력하는 실습을 해보세요.(반복자를 활용하기)



	// ⑦ set을 vector로 변환
	//	- set에 저장된 값을 vector로 옮겨서 활용하는 프로그램을 만들어보세요.

}
