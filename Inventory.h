#pragma once
#include"Item.h"
#include"Club.h"
#include <vector>

	class Inventory
	{
	private:
		//인벤토리는 Item 포인터를 담는 vector를 하나만 가지고 있다.
		std::vector<Item*> m_Items; // 게임내에 모든 아이템을 여기에 보관함

	public:

		// m_items 벡터를 외부에서 안전하게 읽을 수 있도록 const 참조로 반환합니다.
		const std::vector<Item*>& GetItems();

		//소멸자 :인벤토리가 사라질 때 모든 아이템의 메모리를 해제
		~Inventory();

		//아이템을 인벤토리에 추가하는 기능
		void AddItem(Item* newItem);

		// 인벤토리 내의 아이템을 보여주는 기능
		void PrintAllItems()const;

		// 인벤토리 내의 모든 아이템을 삭제하는 기능
		void Clear();


		//이름이 일치하는 첫번째 아이템을 찾아 인벤토리에서 삭제하는 기능
		void RemoveItem(const std::string& ItemName);

		
	
	};


