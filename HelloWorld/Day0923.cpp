#include "Day0923.h"
#include "Coordinate.h"
#include "Calculator.h"
#include <cstdio>
#include <vector>

void Day0923::TestTemplateClass()
{
	Coordinate<int> PositionInt(1,3);
	Coordinate<float> PositionFloat(0.05f,5.7f);

	printf("PositionInt : %d, %d\n", PositionInt.x, PositionInt.y);
	printf("PositionFloat : %f, %f\n", PositionFloat.x, PositionFloat.y);

	PositionInt.Print();
	PositionFloat.Print();

	Coordinate<std::string> PositionString("A", "B");
	PositionString.Print();
}

void Day0923::TestCalculator()
{
	Calculator Calc;
	int ResultInt = Calc.Add(1, 3);
	float ResultFloat = Calc.Add(2.5f, 7.3f);
	Coordinate<int> ResultCoord = Calc.Add(Coordinate<int>(1, 2), Coordinate<int>(3, 4));



	ResultInt = Calc.Multiply(5, 3);
	ResultFloat = Calc.Multiply(3.5f, 2.0f);
	ResultCoord = Calc.Multiply(Coordinate<int>(1, 2), Coordinate<int>(3, 4));

	ResultFloat = Calc.Add(2.5f, 7.3f);
	bool ResultBool = Calc.Equal(9.8f, ResultFloat);
	bool ResultBool2 = (9.8 == ResultFloat);

	int i = 0;
}

void Day0923::TestVector()
{
	// #include <vector> 필수
	std::vector<int> Scores;
	Scores.reserve(5);	// 내가 사용할 것으로 예상되는 최대 크기를 적는 것이 좋음

	Scores.push_back(10);
	Scores.push_back(20);
	Scores.push_back(30);

	int i = 0;
}
