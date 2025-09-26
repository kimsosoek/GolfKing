#include "Inventory.h"
#include<iostream>
#include<cstdio>


//�Ҹ��� ����

Inventory::~Inventory()
{
	// �κ��丮�� �Ҹ� �� �� ,clear �Լ��� ȣ���Ͽ� �޸� ����
	Clear();
}

// ������ �߰� ���
void Inventory::AddItem(Item* newItem)
{
   // vector�� push_back����� ����Ͽ� �� �ڿ� �� �������� �߰�
	m_Items.push_back(newItem);
}

//�κ��丮 ��� ���
void Inventory::PrintAllItems() const
{
	printf("-------My Inventory-------\n");

	//���� ����� for ������ Ȱ�� ��� ������ ��ȸ.
	for (const Item* item : m_Items)
	{
		// �� �������� GetName() �Լ��� ȣ���Ͽ� �̸��� ����մϴ�.
		// c_str()�� std::string�� printf���� ����ϱ� ���� �ʿ�
		printf("- %s\n",item->GetName().c_str());
	}
	printf("--------------------\n");
}

//�κ��丮 ���� ���
void Inventory::Clear()
{
	//������ �����͸� ��ȸ�ϸ� �޸𸮸� ���� �Ѵ�.
	for (Item* item : m_Items)
	{
		// new�� ������ �� ������ ��ü�� "delete�� ����
		delete item;
	}
	m_Items.clear();
}

void Inventory::RemoveItem(const std::string& ItemName)
{
   // 1. ������ �������� ã���ϴ�.
   // auto Ű����� �����Ϸ��� Ÿ���� �ڵ����� �߷��ϰ� �մϴ�.
   // ���� ǥ������ ����Ͽ� '�̸��� ItemName�� ���� ù ��° ������'�� ã���ϴ�.
	auto it = std::find_if(m_Items.begin(), m_Items.end(), [&](Item* Item)
		{
			return Item->GetName() == ItemName;
		});

	if (it != m_Items.end())
	{
		// it�� ������ �������� ��ġ(�ݺ���)�� ����ŵ�ϴ�.
		Item* ItemToDelete = *it; // ������ �������� �ּҸ� �ӽ� �����մϴ�.
		m_Items.erase(it); // ���Ϳ��� �ش� �������� '������'�� �����մϴ�.
		delete ItemToDelete; // ���� ������ ��ü�� �޸𸮿��� �����մϴ�.
		printf("'%s' �������� ���(����)�߽��ϴ�.\n", ItemName.c_str());
	}
}

const std::vector<Item*>& Inventory::GetItems()  {
	return m_Items;
}

