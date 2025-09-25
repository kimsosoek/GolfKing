#pragma once
#include"Item.h"
#include <vector>

	class Inventory
	{
	private:
		//�κ��丮�� Item �����͸� ��� vector�� �ϳ��� ������ �ִ�.
		std::vector<Item*> m_Items; // ���ӳ��� ��� �������� ���⿡ ������

	public:

		//�Ҹ��� :�κ��丮�� ����� �� ��� �������� �޸𸮸� ����
		~Inventory();

		//�������� �κ��丮�� �߰��ϴ� ���
		void AddItem(Item* newItem);

		// �κ��丮 ���� �������� �����ִ� ���
		void PrintAllItems()const;

		// �κ��丮 ���� ��� �������� �����ϴ� ���
		void Clear();


	
	};


