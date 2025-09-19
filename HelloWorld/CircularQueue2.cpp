#include "CircularQueue2.h"

CircularQueue2::~CircularQueue2()
{
	delete Data;
	Data = nullptr;
}

void CircularQueue2::Enqueue(int InValue)
{
	if (IsFull())
	{
		printf("오류: 큐가 가득 찼습니다!\n");
		return;
	}

	if (IsEmpty())	// 비었을 때 넣는 경우라면 Front도 0으로 설정
	{
		Front = 0;
	}

	Rear = (Rear + 1) % MaxSize;	// Rear는 1증가. MaxSize를 넘어서면 다시 0으로
	Data[Rear] = InValue;
}

int CircularQueue2::Dequeue()
{
	if (IsEmpty())
	{
		printf("오류: 큐가 비어있습니다!\n");
		return Empty;
	}
	int Result = Data[Front];

	if (Front != Rear)
	{
		// 일반적인 상황
		Front = (Front + 1) % MaxSize;
	}
	else
	{
		// 마지막으로 1개만 남은 상황
		Front = Empty;
		Rear = Empty;
	}
	printf("큐에서 데이터를 하나 제거하셨습니다.");
	return Result;
}

void CircularQueue2::TestPrintQueue()
{
	// Front부터 Rear까지 출력하기
	// 큐의 크기도 출력

	if (IsEmpty())
	{
		printf("현재 큐가 비어있습니다!\n");
		return;
	}
	printf("현재 큐의 크기 [%d]\n", GetSize());
	printf("Front부터 Rear까지의 값 : ");
	int Index = Front;
	while (Index != Rear)
	{
		printf("[%d] ", Data[Index]);
		Index = (Index + 1) % MaxSize;
	}
	printf("[%d]\n", Data[Index]);
}

