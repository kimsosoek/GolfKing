#include "Potion.h"

Potion::Potion(const std::string& Name, PotionEffect Effect) : Item(Name, Tier:: 없음) // 받은 정보중 이름과 티어 없음을 부모에게 전달
{
	this->m_Effect = Effect;
}

PotionEffect Potion::GetEffect() const
{
	return m_Effect;
}
