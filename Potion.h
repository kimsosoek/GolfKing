#pragma once
#include"Item.h"

	enum class PotionEffect
	{
		Power_Boost,     //�Ŀ� �Ͻ� ���
		Accuracy_Boost,  // ��Ȯ�� �Ͻ� ���
		Fatigue_Boost    // �Ƿε� ȸ��
	};

class Potion : public Item
{
public:
	// ������: Potion�� ���� �� �ʿ��� ��� ������ �޽��ϴ�.

	Potion(const std::string& Name, PotionEffect Effect);

	//������ ȿ���� �˷��ִ� �Լ�
	PotionEffect GetEffect()const;

private:
	//���Ǹ��� ���� ������
	PotionEffect m_Effect;
};