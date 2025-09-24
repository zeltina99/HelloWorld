#include "Day0924.h"
#include <vector>
#include <algorithm>

bool operator<(const SortTest& Left, const SortTest& Right)
{
	return Left.a < Right.a;
}

void PrintVector(std::vector<int>& InVector)
{
	printf("Vector : ");
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
	std::vector<int> numbers = { 1,2,3,4,5,6,7,8,9,10 };
	// std::find_if(컨테이너의 begin(), 컨테이너의 end(), 람다식);
	// [](int n)
	// {return 참/거짓;}
	
	std::find_if(numbers.begin(), numbers.end(),
		[](int n)
		{
			
		}
	);


}
