#include "Club.h"
#include"Item.h"


//Club�� ������ ����
Club::Club(const std::string& Name, Tier Tier, int Distance, int Accuracy) // 1. ���� ���� �� 'name'�� �θ��� Item�� �����ڿ��� �Ѱ��ݴϴ�.
	: Item(Name, Tier)
{
	// ������� �ʱ�ȭ
	this->BaseDistance = Distance;
	this->AccuracyModifier = Accuracy;
}
