#include "Item.h"

//������
Item::Item(const std::string& Name, Tier Tier) :m_Name(Name), m_Tier(Tier)
{
}

//GetName�Լ� ����
std::string Item::GetName() const
{
	return m_Name;
}
//GetTier �Լ�����
Tier Item::GetTier() const
{
	return m_Tier;
}
