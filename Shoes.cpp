#include "Shoes.h"


// 1. ���� ���� �� 'name'�� �θ��� Item�� �����ڿ��� �����մϴ�.
Shoes::Shoes(const std::string& Name, Tier Tier, int AccuracyBonus, int FatigueReduction) : Item(Name, Tier)
{

	//������ �������� �ڱ� �ڽ��� ��� ������ �ʱ�ȭ�ϴ� �� ����մϴ�.
	this->AccuracyBonus = AccuracyBonus;
	this->FatigueReduction = FatigueReduction;

}
