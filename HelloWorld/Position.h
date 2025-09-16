#pragma once

//struct Position
//{
//	int X = 0;
//	int Y = 0;
//
//	// 헷갈릴 수 있는 상황이면 명시적으로 이야기 해주는 것이 좋다.
//	Position() = default;		// 자동으로 생성되는 기본생성자와 같다.
//	Position(int InX, int InY)
//		: X(InX), Y(InY)
//	{
//		// 추가 계산이 필요한 경우. 이쪽에 새로 대입하기.
//	}
//
//	Position& operator+=(const Position& other)
//	{
//		X += other.X;
//		Y += other.Y;
//		return *this;
//	}
//
//	Position& operator-=(const Position& other)
//	{
//		X -= other.X;
//		Y -= other.Y;
//		return *this;
//	}
//
//};


// 이항연산자는 구조체 밖에 쓰는 것이 일반적이다.
//Position operator+(const Position& A, const Position& B);
//Position operator-(const Position& A, const Position& B);
//bool operator == (const Position& A, const Position& B);
//bool operator != (const Position& A, const Position& B);

