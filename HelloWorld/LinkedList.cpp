#include "LinkedList.h"


LinkedList::~LinkedList()
{
    
}

void LinkedList::Add(int32 InData)
{
    ListNode* List = new ListNode(InData);
    if (Head == nullptr)    // 리스트가 비었을 때
    {
        Head = List;
        Tail = List;
    }
    else
    {
        Tail->Next = List;
        Tail = List;
    }
    Size++;
}

void LinkedList::InsertAt(int32 InData, uint32 InPosition)
{
    ListNode* List = new ListNode(InData);
    if (Head == nullptr)    // 리스트가 비었을 때
    {
        Head = List;
        Tail = List;
        Size++;
    }
    else if (Size <= InPosition) // 범위를 벗어날 때
    {
        Tail->Next = List;
        Tail = List;
        Size++;
    }
    else if (InPosition == 0)   // 맨 앞을 선택할 때
    {
        List->Next = Head;
        Head = List;
        Size++;
    }
    else
    {
        int Index = 0;
        ListNode* Current = Head;
        while (Current != nullptr)
        {
            Index++;
            Current = Current->Next;
            if (Index == InPosition)
            {
                break;
            }
        }
    

    }

}

void LinkedList::Remove(int32 InData)
{
    ListNode* List = new ListNode(InData);

    int Index = 0;
    ListNode* Current = Head;
    while (Current != nullptr)
    {
        Index++;
        Current = Current->Next;
        if (Index == InData)
        {

        }
    }

}

void LinkedList::RemoveAt(uint32 InPosition)
{
}

ListNode* LinkedList::Search(int32 InData) const
{
    return nullptr;
}

void LinkedList::PrintList() const
{
    
}
