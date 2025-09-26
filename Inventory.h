#pragma once
#include"Item.h"
#include"Club.h"
#include <vector>

	class Inventory
	{
	private:
		//�κ��丮�� Item �����͸� ��� vector�� �ϳ��� ������ �ִ�.
		std::vector<Item*> m_Items; // ���ӳ��� ��� �������� ���⿡ ������

	public:

		// m_items ���͸� �ܺο��� �����ϰ� ���� �� �ֵ��� const ������ ��ȯ�մϴ�.
		const std::vector<Item*>& GetItems();

		//�Ҹ��� :�κ��丮�� ����� �� ��� �������� �޸𸮸� ����
		~Inventory();

		//�������� �κ��丮�� �߰��ϴ� ���
		void AddItem(Item* newItem);

		// �κ��丮 ���� �������� �����ִ� ���
		void PrintAllItems()const;

		// �κ��丮 ���� ��� �������� �����ϴ� ���
		void Clear();


		//�̸��� ��ġ�ϴ� ù��° �������� ã�� �κ��丮���� �����ϴ� ���
		void RemoveItem(const std::string& ItemName);

		
	
	};


