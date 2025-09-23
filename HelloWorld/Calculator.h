#pragma once
#include <iostream>
#include <type_traits>

template <typename T>
class Calculator
{
public:
	Calculator() : x{}, y{}
	{
	}
	Calculator(T InX, T InY)
		: x(InX), y(InY)
	{
	}

	void PrintCalculator() const;

	void Add();
	void Sub();
	void Multiply();
	void Divide();
	void Equal();

protected:
	T x;
	T y;

	


};

template <typename T>
T Abs(T InValue)
{
	return (InValue < 0) ? -InValue : InValue;
}

template<typename T>
inline void Calculator<T>::PrintCalculator() const
{
	if constexpr (std::is_same_v<T, int>)
	{
		printf("(%d, %d)\n", x, y);
	}
	else if constexpr (std::is_same_v<T, float>)
	{
		printf("(%f, %f)\n", x, y);
	}
	else
	{
		std::cout << "(" << x << ", " << y << ")" << std::endl;
	}
}

