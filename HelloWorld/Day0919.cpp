#include "Day0919.h"
#include "FixedStack.h"
#include <stdio.h>


void Day0919::TestStack()
{
	FixedStack Stack;

	// ① 초기 상태 테스트
	// 스택이 비었는지 확인해보기(IsEmpty와 GetSize 사용하고 printf로 출력하기)
	printf("=======================초기 상태 테스트========================\n");
	Stack.IsEmpty();
	Stack.PrintStack();
	

	// ② Push 테스트
	// 데이터(10) 넣고 Top 위치에 있는 값과 스택 크기 출력해보기
	// 데이터(20) 넣고 Top 위치에 있는 값과 스택 크기 출력해보기
	// 데이터(30) 넣고 Top 위치에 있는 값과 스택 크기 출력해보기
	printf("\n==========================Push 테스트===========================\n");
	Stack.Push(10);
	Stack.PrintStack();
	Stack.Push(20);
	Stack.PrintStack();
	Stack.Push(30);
	Stack.PrintStack();

	// ③ Pop 테스트
	// 데이터 하나 빼고 뺀 값 출력해보기, 스택의 남은 Top 위치값과 스택 크기 출력해보기
	printf("\n===========================Pop 테스트===========================\n");
	Stack.Pop();
	Stack.PrintStack();

	// ④ 스택 오버플로우 테스트
	// 스택 가득 채우고 한번 더 넣어 보기
	printf("\n=====================Stack Overflow 테스트======================\n");
	for (int i = 0; i < 9; i++)
	{
		Stack.Push(i);
	}

	
	// ⑤ 스택 언더플로우 테스트
	// 스택 다 비우고 한번 더 빼보기
	printf("\n=====================Stack Underflow 테스트======================\n");
	for (int i = 0; i < 11; i++)
	{
		Stack.Pop();
	}


}

void Day0919::TestQueue()
{
	// 메뉴 만들기
	// ① Enqueue
	// ② Dequeue
	// ③ Peek
	// ④ TestPrintQueue
}
