#include "Position.h"

// 이항연산자는 구조체 밖에 쓰는 것이 일반적이다.
//Position operator+(const Position& A, const Position& B)
//{
//	return Position(A.X + B.X, A.Y + B.Y);
//}
//
//Position operator-(const Position& A, const Position& B)
//{
//	return Position(A.X - B.X, A.Y - B.Y);
//}
//
//bool operator == (const Position& A, const Position& B)
//{
//	return (A.X == B.X) && (A.Y == B.Y);
//}
//
//bool operator != (const Position& A, const Position& B)
//{
//	//return (A.X != B.X) || (A.Y != B.Y);
//	return !(A == B);
//}