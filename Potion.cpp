#include "Potion.h"

Potion::Potion(const std::string& Name, PotionEffect Effect) : Item(Name, Tier:: ����) // ���� ������ �̸��� Ƽ�� ������ �θ𿡰� ����
{
	this->m_Effect = Effect;
}

PotionEffect Potion::GetEffect() const
{
	return m_Effect;
}
