#pragma once
#include <cstdint>

using int32 = int32_t;
using uint32 = uint32_t;

struct DoublyListNode
{
    int32 Data = 0;
    DoublyListNode* Prev = nullptr; // 앞에 노드의 주소
    DoublyListNode* Next = nullptr; // 뒤에 노드의 주소

    DoublyListNode(int32 InData) : Data(InData) {}
};

class DoublyLinkedList
{
public:
    DoublyLinkedList() = default;

    // 만들어진 노드들을 정리하기 위해 필요
    ~DoublyLinkedList();

    // 데이터를 리스트에 뒤에 추가
    void AddToBack(int32 InData);

    // 데이터를 리스트에 앞에 추가
    void AddToFront(int32 InData);

    // 데이터를 특정 위치에 추가하는 함수(범위를 벗어나면 마지막에 추가)
    void DoublyInsertAt(int32 InData, uint32 InPosition);

    // 데이터를 삭제하는 함수(InData와 같은 값을 가지는 노드를 삭제하는 함수. 중복 없음.)
    void DoublyRemove(int32 InData);

    // 데이터를 삭제하는 함수(Position번째의 데이터를 삭제하는 함수. 범위 벗어나면 에러만 출력.)
    void DoublyRemoveAt(uint32 InPosition);

    // InData를 가진 노드를 찾아 리턴하는 함수(없으면 nullptr 리턴)
    DoublyListNode* DoublySearch(int32 InData) const;

    // 리스트 내용을 출력하는 함수
    void PrintDoublyList() const;
    

private:
    //더블 리스트의 첫번째 노드
    DoublyListNode* Head = nullptr;

    //더블 리스트의 마지막 노드
    DoublyListNode* Tail = nullptr;

    //더블 리스트의 노드 개수
    uint32 Size = 0;
};

