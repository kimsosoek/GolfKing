#pragma once
#include<string>
#include "Item.h"





	class Club : public Item
	{
public:

	// ������
	Club(const std::string& name, Tier tier, int distance, int accuracy);
	

	// �⺻�Ŀ�
	int BaseDistance; 

	// ��Ȯ��
	int AccuracyModifier;

	
};