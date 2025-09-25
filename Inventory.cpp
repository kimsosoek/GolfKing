#include "Inventory.h"
#include<iostream>
#include<cstdio>


//소멸자 구현

Inventory::~Inventory()
{
	// 인벤토리가 소멸 될 때 ,clear 함수를 호출하여 메모리 정리
	Clear();
}

// 아이템 추가 기능
void Inventory::AddItem(Item* newItem)
{
   // vector의 push_back기능을 사용하여 맨 뒤에 새 아이템을 추가
	m_Items.push_back(newItem);
}

//인벤토리 출력 기능
void Inventory::PrintAllItems() const
{
	printf("-------My Inventory-------\n");

	//범위 기반의 for 루프를 활용 모든 아이템 순회.
	for (const Item* item : m_Items)
	{
		// 각 아이템의 GetName() 함수를 호출하여 이름을 출력합니다.
		// c_str()은 std::string을 printf에서 출력하기 위해 필요
		printf("");
	}

}

//아이템 삭제 기능
void Inventory::Clear()
{
}

