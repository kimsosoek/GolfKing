#include "Club.h"


//Club�� ������ ����
Club::Club(const std::string& Name, int Distance, int Accuracy, ClubTier Tier)// 1. ���� ���� �� 'name'�� �θ��� Item�� �����ڿ��� �Ѱ��ݴϴ�.
	: Item(Name)
{
	// ������� �ʱ�ȭ
	this->BaseDistance = Distance;
	this->AccuracyModifier = Accuracy;
	this->Tier = Tier;
}
