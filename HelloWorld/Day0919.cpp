#include "Day0919.h"
#include "FixedStack.h"
#include "CircularQueue.h"
#include "CircularQueue2.h"
#include <stdio.h>
#include <iostream>
#include <fstream>


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
	// ① 메뉴 만들기 
	CircularQueue Queue;
	const int ExitNumber = 5;
	int InputNumber = 0;
	int InputData = 0;
	//		1. Enqueue
	//		2. Dequeue
	//		3. Peek
	//		4. TestPrintQueue
	//		5. 종료

	printf("\n=====================메뉴 만들기  테스트======================\n");
	while (InputNumber != ExitNumber)
	{
		printf("① Enqueue, ② Dequeue, ③ Peek, ④ TestPrintQueue, ⑤ 종료 ");
		std::cin >> InputNumber;
		printf("\n");
		switch (InputNumber)
		{
		case 1:
		{
			printf("Enqueue할 값을 입력해주세요. : ");
			std::cin >> InputData;
			Queue.Enqueue(InputData);
		}
		break;
		case 2:
		{
			
			Queue.Dequeue();
		}
		break;
		case 3:
		{
			printf("큐의 Front에 있는 값 [%d]", Queue.Peek());
		}
		break;
		case 4:
		{
			Queue.TestPrintQueue();
		}
		break;
		case 5:
		{
			return;
		}
		break;
		default:
			//ERROR!!
			break;
		}
		printf("\n");
	}
	
}

void Day0919::TestQueue2()
{
	// ② Circular Queue2 만들기
	//		생성자에서 파라메터를 받아 크기를 조절 가능하게 만들기

	int Index = 0;

	printf("\n=====================Circular Queue2 만들기======================\n");
	printf("큐의 크기를 입력해주세요. : ");
	std::cin >> Index;
	CircularQueue2 Queue(Index);
	const int ExitNumber = 5;
	int InputNumber = 0;
	int InputData = 0;

	while (InputNumber != ExitNumber)
	{
		printf("① Enqueue, ② Dequeue, ③ Peek, ④ TestPrintQueue, ⑤ 종료 ");
		std::cin >> InputNumber;
		printf("\n");
		switch (InputNumber)
		{
		case 1:
		{
			printf("Enqueue할 값을 입력해주세요. : ");
			std::cin >> InputData;
			Queue.Enqueue(InputData);
		}
		break;
		case 2:
		{
			
			Queue.Dequeue();
		}
		break;
		case 3:
		{
			printf("큐의 Front에 있는 값 [%d]", Queue.Peek());
		}
		break;
		case 4:
		{
			Queue.TestPrintQueue();
		}
		break;
		case 5:
		{
			return;
		}
		break;
		default:
			//ERROR!!
			break;
		}
		printf("\n");
	}

}

void Day0919::TestSwallowCopy()
{
	// 얕은 복사 : 복사를 할 때 완전한 사본을 만드는 것이 아니라 주소만 복사하는 복사
	CircularQueue2 a(5);
	a.Enqueue(10);
	a.Enqueue(20);


	//CircularQueue2 b(a);		// 복사 생성자로 a의 사본을 만든 것
	//CircularQueue2 c = a;		// 대입 연산자로 a의 사본을 만든 것

	//a.Enqueue(30);

	//printf("a\n");
	//a.TestPrintQueue();
	//printf("\nb\n");
	//b.TestPrintQueue();
	//printf("\nc\n");
	//c.TestPrintQueue();

	//TestSwallowCopy(a);
	TestSwallowCopy(a);		// 참조 넘기기
	TestSwallowCopy(&a);	// 주소 넘기기

}

void Day0919::TestSwallowCopy(CircularQueue2* temp)
{
	temp->TestPrintQueue();
}

void Day0919::TestSwallowCopy(CircularQueue2& temp)
{
	temp.TestPrintQueue();
}


