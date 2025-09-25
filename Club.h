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
	Club(const std::string& Name, int Distance, int Accuracy, ClubTier Tier)
		: Item(Name), BaseDistance(Distance), AccuracyModifier(Accuracy), Tier(Tier)
	{
		// ������ ���� (�ʿ�� �߰� �ʱ�ȭ �۾� ����)
	}
	// Ŭ���̸�
	std::string Name; 

	// �⺻�Ŀ�
	int BaseDistance; 

	// ��Ȯ��
	int AccuracyModifier;

	// Ŭ�����
	ClubTier Tier; 

};