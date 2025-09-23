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

	Calculator<T> operator+(const Calculator<T>& a, const Calculator<T>& b)
	{
		return Calculator<T>(a.x + b.x, a.y + b.y);
	}
	Calculator<T> operator-(const Calculator<T>& a, const Calculator<T>& b)
	{
		return Calculator<T>(a.x - b.x, a.y - b.y);
	}
	bool operator==(const Calculator<T>& a, const Calculator<T>& b)
	{
		return Calculator<T>(a.x == b.x, a.y == b.y);
	}
	bool operator!=(const Calculator<T>& a, const Calculator<T>& b)
	{
		return Calculator<T>(a.x != b.x, a.y != b.y);
	}

protected:
	T x;
	T y;

	


};

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
