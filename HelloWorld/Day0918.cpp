#include "Day0918.h"
#include "LinkedList.h"
#include "DoubleLinkedList.h"
#include <stdio.h>


void Day0918::TestSingleLinkedList()
{
	LinkedList MyList;

	// Add 테스트
	printf("-------------------------Add 테스트-------------------------\n");
	MyList.Add(10);
	MyList.Add(20);
	MyList.Add(30);
	MyList.PrintList();

	// InsertAt test
	printf("-------------------------InsertAt 테스트-------------------------\n");
	MyList.InsertAt(40, 100);
	MyList.PrintList();
	MyList.InsertAt(5, 0);
	MyList.PrintList();
	MyList.InsertAt(15, 2);
	MyList.PrintList();

	// Remove test
	printf("-------------------------Remove 테스트-------------------------\n");
	MyList.Remove(20);
	MyList.PrintList();
	MyList.Remove(123);
	MyList.PrintList();

	// RemoveAt test
	printf("-------------------------RemoveAt 테스트-------------------------\n");
	MyList.RemoveAt(10);
	MyList.PrintList();
	MyList.RemoveAt(1);
	MyList.PrintList();

	// Search test
	printf("-------------------------Search 테스트-------------------------\n");
	ListNode* Found = MyList.Search(15);
	if (Found)
	{
		printf("15를 찾았습니다.\n");
	}
	else
	{
		printf("15를 못 찾았습니다.\n");
	}
	Found = MyList.Search(999);
	if (Found)
	{
		printf("999를 찾았습니다.\n");
	}
	else
	{
		printf("999를 못 찾았습니다.\n");
	}




}

void Day0918::TestDoublyLinkedList()
{
	DoublyLinkedList MyList;

	printf("-------------------------AddToBack 테스트-------------------------\n");
	MyList.AddToBack(10);
	MyList.AddToBack(20);
	MyList.AddToBack(30);
	MyList.PrintDoublyList();

	printf("-------------------------AddToFront 테스트-------------------------\n");
	MyList.AddToFront(40);
	MyList.AddToFront(50);
	MyList.AddToFront(60);
	MyList.PrintDoublyList();

	printf("-------------------------DoublyInsertAt 테스트-------------------------\n");
	MyList.DoublyInsertAt(70, 100);
	MyList.PrintDoublyList();
	MyList.DoublyInsertAt(5, 0);
	MyList.PrintDoublyList();
	MyList.DoublyInsertAt(15, 2);
	MyList.PrintDoublyList();

	printf("-------------------------DoublyRemove 테스트-------------------------\n");






	printf("-------------------------DoublyRemoveAt 테스트-------------------------\n");





	printf("-------------------------DoublySearch 테스트-------------------------\n");
}

