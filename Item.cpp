#include "Item.h"

//������
Item::Item(const std::string& Name) :m_Name(Name)
{
}

std::string Item::GetName() const
{
	return m_Name;
}
