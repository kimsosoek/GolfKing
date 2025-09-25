#include "Item.h"

//생성자
Item::Item(const std::string& Name, Tier Tier) :m_Name(Name), m_Tier(Tier)
{
}

//GetName함수 구현
std::string Item::GetName() const
{
	return m_Name;
}
//GetTier 함수구현
Tier Item::GetTier() const
{
	return m_Tier;
}
