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
		printf("- %s\n",item->GetName().c_str());
	}
	printf("--------------------\n");
}

//인벤토리 비우기 기능
void Inventory::Clear()
{
	//아이템 포인터를 순회하며 메모리를 해제 한다.
	for (Item* item : m_Items)
	{
		// new로 생성된 각 아이템 객체를 "delete로 삭제
		delete item;
	}
	m_Items.clear();
}

void Inventory::RemoveItem(const std::string& ItemName)
{
   // 1. 삭제할 아이템을 찾습니다.
   // auto 키워드는 컴파일러가 타입을 자동으로 추론하게 합니다.
   // 람다 표현식을 사용하여 '이름이 ItemName과 같은 첫 번째 아이템'을 찾습니다.
	auto it = std::find_if(m_Items.begin(), m_Items.end(), [&](Item* Item)
		{
			return Item->GetName() == ItemName;
		});

	if (it != m_Items.end())
	{
		// it은 삭제할 아이템의 위치(반복자)를 가리킵니다.
		Item* ItemToDelete = *it; // 삭제할 아이템의 주소를 임시 저장합니다.
		m_Items.erase(it); // 벡터에서 해당 아이템의 '포인터'를 제거합니다.
		delete ItemToDelete; // 실제 아이템 객체를 메모리에서 삭제합니다.
		printf("'%s' 아이템을 사용(삭제)했습니다.\n", ItemName.c_str());
	}
}

const std::vector<Item*>& Inventory::GetItems()  {
	return m_Items;
}

