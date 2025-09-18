#include "LinkedList.h"
#include <stdio.h>

LinkedList::~LinkedList()
{
    ListNode* Current = Head;
    while (Current != nullptr)
    {
        ListNode* NodeToDelete = Current;
        Current = Current->Next;
        delete NodeToDelete;
        NodeToDelete = nullptr;
    }
}

void LinkedList::Add(int32 InData)
{
    ListNode* NewNode = new ListNode(InData);
    if (Head == nullptr)    // 리스트가 비었을 때
    {
        Head = NewNode;
        Tail = NewNode;
    }
    else
    {
        Tail->Next = NewNode;
        Tail = NewNode;
    }
    Size++;
}

void LinkedList::InsertAt(int32 InData, uint32 InPosition)
{
    ListNode* NewNode = new ListNode(InData);

    
    if (Head == nullptr)    // 리스트가 비었을 때
    {
        Head = NewNode;
        Tail = NewNode;
    }
   
    else if (InPosition >= Size)    // 사이즈보다 크거나 같을 때
    {
        Tail->Next = NewNode;
        Tail = NewNode;
    }
    
    else if (InPosition == 0)   // 맨 앞에 넣을 때
    {
        NewNode->Next = Head;
        Head = NewNode;
    }
   
    else
    {   // 중간 삽입
        ListNode* Current = Head;
        uint32 Index = 0;
        const uint32 TargetIndex = InPosition - 1;  // 상수화 시켜서 매직넘버 없앰

        while (Index < TargetIndex) // 입력 받은 위치가 예를 들어 5면 Index는 0번이 첫번째니까 4번이 되면 5번째가 될거고 그래서 -1을 해서 위치를 맞춰주고 그 위치가 될 때 까지 계속 넘어감
        {
            Current = Current->Next;
            Index++;
        }

        NewNode->Next = Current->Next;  // 새 노드의 다음 주소를, 이전 노드의 다음 주소로 바뀜 (이전 노드의 다음 주소가 바뀐 건 아님)
        Current->Next = NewNode;        // 이전 노드의 다음 주소가 새 노드로 바뀜
    }

    Size++;
}

void LinkedList::Remove(int32 InData)
{
    if (Head == nullptr)    // 리스트가 없다면
    {
        return;
    }

    ListNode* NodeToDelete = nullptr;   // 삭제할 노드
    ListNode* PreviousNode = nullptr;   // 삭제할 노드의 앞 노드

    if (Head->Data == InData)
    {
        NodeToDelete = Head;
        Head = Head->Next;
        if (Head == nullptr)
        {
            Tail = nullptr;
        }
    }
    else
    {
        PreviousNode = Head;
        while ((PreviousNode->Next != nullptr) && (PreviousNode->Next->Data != InData)) // 삭제할 노드의 앞 노드 ->Next니까 삭제할 노드가 안 비었거나, 그 값이 파라메터가 아니면 계속 다음을 선택
        {
            PreviousNode = PreviousNode->Next;
        }

        if (PreviousNode->Next != nullptr)  // 위에 반복에서 결국 둘 중 하나가 걸렸기에 이게 돌아가겠지, 삭제할 노드의 데이터가 파라메터와 같을경우
        {
            NodeToDelete = PreviousNode->Next;          // 삭제할 노드의 그 앞에 노드로 연결
            PreviousNode->Next = NodeToDelete->Next;    // 다시 그 앞에 노드의 다음 연결을 삭제할 노드의 그 다음에 연결
            if (NodeToDelete == Tail)
            {
                Tail = PreviousNode;    //삭제할 노드가 마지막 노드면 그 앞에 노드로 새로운 마지막 노드라고 선언 (자연스럽게 마지막 부분을 지운거임)
            }
        }
    }
    if (NodeToDelete != nullptr)
    {
        delete NodeToDelete;
        NodeToDelete = nullptr;
        Size--;
    }
    else
    {
        printf("%d값을 가진 노드가 없습니다\n", InData);
    }

}

void LinkedList::RemoveAt(uint32 InPosition)
{
    if (InPosition >= Size)
    {
        printf("%u위치는 범위를 벗어났습니다.(현재 크기: %u)\n", InPosition, Size);
        return;
    }

    ListNode* NodeToDelete = nullptr;
    if (InPosition == 0)    // 헤드를 삭제하는 경우
    {
        NodeToDelete = Head;
        Head = Head->Next;
        if (Head == nullptr)
        {
            Tail = nullptr;
        }
    }
    else
    {   // 헤드가 아닌 경우
        ListNode* Current = Head;
        for (uint32 i = 0; i < InPosition - 1; i++)
        {
            Current = Current->Next;
        }

        NodeToDelete = Current->Next;
        Current->Next = NodeToDelete->Next;

        if (NodeToDelete == Tail)
            Tail = Current;
    }

    delete NodeToDelete;
    NodeToDelete = nullptr;
    Size--;
}

ListNode* LinkedList::Search(int32 InData) const
{
    ListNode* Result = nullptr;
    ListNode* Current = Head;
    while (Current != nullptr)
    {
        if (Current->Data == InData)
        {
            Result = Current;   // 찾은거니까 그 값을 저장함
            break;
        }
        Current = Current->Next;    // 계속 다음 노드로 가는거임 (찾거나 못 찾을 때 까지)
    }

    return Result;
}

void LinkedList::PrintList() const
{
    if (Head == nullptr)
    {
        printf("리스트가 비었습니다.\n");
        return;
    }
    
    printf("리스트의 크기[%u] : ", Size);
    ListNode* Current = Head;   // 현재 헤드부터 출발하기 위해서 포인터 변수 선언
    while (Current != nullptr)  // 현재 값이 있을경우
    {
        printf("[%d] -> ", Current->Data);
        Current = Current->Next;
    }
    printf("nullptr\n");

}
