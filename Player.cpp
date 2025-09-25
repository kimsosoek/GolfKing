#include "Player.h"




Player::Player()
{
	m_Power = 50;
	m_Accuracy = 50;
	m_Putting = 50;
	m_Fatigue = 50;
}

int Player::GetPower() const
{
	return m_Power;
}

int Player::GetAccuracy() const
{
	return m_Accuracy;
}

int Player::GetPutting() const
{
	return m_Putting;
}

int Player::GetFatigue() const
{
	return m_Fatigue;
}

// 인벤토리 아이템 추가 기능
void Player::AddItemToInventory(Item* newItem)
{
	m_Inventory.AddItem(newItem);
}

void Player::PrintUnventory() const
{
	m_Inventory.PrintAllItems();
}

void Player::UseItem(const std::string& ItemName)
{
	m_Inventory.RemoveItem(ItemName);
}
