#include "Shoes.h"


// 1. ���� ���� �� 'name'�� �θ��� Item�� �����ڿ��� �����մϴ�.
Shoes::Shoes(const std::string& Name, int AccuracyBonus, int FatigueReduction) : Item(Name)
{

	//������ �������� �ڱ� �ڽ��� ��� ������ �ʱ�ȭ�ϴ� �� ����մϴ�.
	this->AccuracyBonus = AccuracyBonus;
	this->FatigueReduction = FatigueReduction;

}
