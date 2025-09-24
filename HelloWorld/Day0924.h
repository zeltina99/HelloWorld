#pragma once
class Day0924
{
public:
	void TestLambda();
	void TestLambda2();
	void TestLambdaPractice();
	void TestSet();
	void TestSetPractice();
};

struct SortTest
{
	int a;
	float b;

	SortTest(int InA, float InB) : a(InA), b(InB){}
};

bool operator<(const SortTest& Left, const SortTest& Right);
