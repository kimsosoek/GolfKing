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
		printf("");
	}

}

//������ ���� ���
void Inventory::Clear()
{
}

