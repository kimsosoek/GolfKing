#pragma once
#include"Item.h"

//Shose �� Item�� �� �����̴�. ��ӹ��� ����

class Shoes : public Item
{

public:

	//������
	Shoes(const std::string& Name, int AccuracyBonus, int FatigueReduction);

	//���� ������
	int AccuracyBonus;  //���� �¿� ������ �ٿ��ִ� ��
	int FatigueReduction;  // ��� ���� �� �Ƿε� ����
	 
};

