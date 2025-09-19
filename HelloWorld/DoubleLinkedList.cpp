#include "DoubleLinkedList.h"
#include <stdio.h>

DoublyLinkedList::~DoublyLinkedList()
{
    DoublyListNode* Current = Head;
    while (Current != nullptr)
    {
        DoublyListNode* NodeToDelete = Current;
        Current = Current->Next;
        delete NodeToDelete;
        NodeToDelete = nullptr;
    }
}

void DoublyLinkedList::AddToBack(int32 InData)
{
    DoublyListNode* NewNode = new DoublyListNode(InData);

    if (Tail == nullptr) // Head == nullptr로 해도 동작하는데는 문제가 없어 보이는데, 그래도 노드 뒤에다가 붙인다고 했으니까, Tail이 가독성이 좋아보여서 Tail을 기준으로 판단함
    {
        Tail = NewNode;
        Head = NewNode;
    }
    else
    {
        Tail->Next = NewNode;   // 마지막 노드의 다음 주소가 새 노드로 설정
        NewNode->Prev = Tail;   // 새 노드의 앞의 주소가 마지막 노드로 설정
        Tail = NewNode;         // 마지막 노드가 새 노드로 설정
    }

    Size++;
}

void DoublyLinkedList::AddToFront(int32 InData)
{
    DoublyListNode* NewNode = new DoublyListNode(InData);

    if (Head == nullptr)    // 노드 앞에다 붙이는 거니까 Head를 기준으로 확인, 리스트가 비어 있을 경우
    {
        Head = NewNode;
        Tail = NewNode;
    }
    else
    {
        NewNode->Next = Head;   // 새 노드의 다음 주소가 첫 번째 노드로 설정
        Head->Prev = NewNode;   // 첫 번째 노드의 앞에 주소가 새 노드로 설정
        Head = NewNode;         // 첫 번째 노드가 새 노드로 설정
    }
    Size++;
}

void DoublyLinkedList::DoublyInsertAt(int32 InData, uint32 InPosition)
{
    DoublyListNode* NewNode = new DoublyListNode(InData);

    if (Head == nullptr)    // 리스트가 비었을 때
    {
        Head = NewNode;
        Tail = NewNode;
    }

    else if (InPosition >= Size)    // 사이즈보다 크거나 같을 때
    {
        Tail->Next = NewNode;
        NewNode->Prev = Tail;
        Tail = NewNode;
    }

    else if (InPosition == 0)   // 맨 앞에 넣을 때
    {
        NewNode->Next = Head;
        Head->Prev = NewNode;
        Head = NewNode;
    }

    else
    {   // 중간 삽입
        DoublyListNode* ForwardNode = Head;
        DoublyListNode* BackwardNode = Tail;
        uint32 Index = Size / 2;
        const uint32 TargetIndex = InPosition - 1;  // 상수화 시켜서 매직넘버 없앰

        if (Index < TargetIndex)
        {
            for (int i = Index; Index < TargetIndex; i++)
            {
                BackwardNode = BackwardNode->Prev;
            }
        }
        else if(Index > TargetIndex)
        {
            for(int i = Index; Index > TargetIndex; i--)
            {
                ForwardNode = ForwardNode->Next;
            }
        }

        NewNode->Next = ForwardNode->Next;  
        NewNode->Prev = ForwardNode;        

        if (ForwardNode->Next != nullptr)   
        {
            ForwardNode->Next->Prev = NewNode;  
            ForwardNode->Next = NewNode;       
        }
        
    }

    Size++;
}

void DoublyLinkedList::DoublyRemove(int32 InData)
{

}

void DoublyLinkedList::DoublyRemoveAt(uint32 InPosition)
{
}

DoublyListNode* DoublyLinkedList::DoublySearch(int32 InData) const
{
    return nullptr;
}

void DoublyLinkedList::PrintDoublyList() const
{
    if (Head == nullptr)
    {
        printf("리스트가 비었습니다.\n");
        return;
    }

    printf("리스트의 크기[%u] : ", Size);
    DoublyListNode* Current = Head;   // 현재 헤드부터 출발하기 위해서 포인터 변수 선언
    while (Current != nullptr)  // 현재 값이 있을경우
    {
        printf("[%d] -> ", Current->Data);
        Current = Current->Next;
    }
    printf("nullptr\n");
}
