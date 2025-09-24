#pragma once
#include<string>
#include "Item.h"



	enum class ClubTier // Ŭ�����
	{
		����,
		�Ϲ�,
		���,
		����,
		��ȭ
	};

	class Club : public Item
	{
public:

	// ������
	Club(const std::string& name, int baseDistance, int accuracy, ClubTier tier)
		: Item(name), baseDistance(baseDistance), accuracy(accuracy), tier(tier)
	{
		// ������ ���� (�ʿ�� �߰� �ʱ�ȭ �۾� ����)
	}
	// Ŭ���̸�
	std::string name; 

	// �⺻�Ŀ�
	int baseDistance; 

	// ��Ȯ��
	int accuracy; 

	// Ŭ�����
	ClubTier tier; 

};