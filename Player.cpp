#include "Player.h"
#include"Club.h"



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

// �κ��丮 ������ �߰� ���
void Player::AddItemToInventory(Item* newItem)
{
	m_Inventory.AddItem(newItem);
}

void Player::PrintInventory()
{
	m_Inventory.PrintAllItems();
}

void Player::UseItem(const std::string& ItemName)
{
	m_Inventory.RemoveItem(ItemName);
}

void Player::AddPower(int amount) {
	// �ڽ��� m_power ��� ������ amount ���� ���մϴ�.
	m_Power += amount;
}

void Player::AddAccuracy(int amount) {
	m_Accuracy += amount;
}

void Player::AddPutting(int amount) {
	m_Putting += amount;
}

void Player::AddFatigue(int amount) {
	m_Fatigue += amount;
	// (���߿� �ִ� �Ƿε��� �����ؼ� 100�� ���� �ʰ� �� ���� �ֽ��ϴ�.)
}

void Player::RecoverAllFatigue() {
	// �Ƿε��� 0���� �����մϴ�.
	m_Fatigue = 0;
}


void Player::ShowClubSelection(){
	printf("--- Ŭ�� ���� ---\n");
	int clubIndex = 1;
	float fatiguePenalty = 1.0f - (m_Fatigue / 200.0f);

	// 1. �κ��丮�� ��� ������ ����� �����ɴϴ�.
	for (const Item* item : m_Inventory.GetItems()) {

		// 2. dynamic_cast�� ����� �������� Club Ÿ������ '�����ϰ�' Ȯ���մϴ�.

		const Club* club = dynamic_cast<const Club*>(item);
		if (club) { // ���� Club Ÿ���� �´ٸ�,
			// 3. Ŭ�� ������ ����մϴ�.
			int estimatedDistance = (club->BaseDistance + m_Power) * fatiguePenalty;
			printf("%d. %s (���� ��Ÿ�: %dm)\n", clubIndex, club->GetName().c_str(), estimatedDistance);
			clubIndex++;
		}
	}
	printf("-----------------\n");
}


// �ڽ��� m_Inventory���� �κ��丮�� ����޶�� ��û(����)�մϴ�.
void Player::ClearInventory()
{
	m_Inventory.Clear();
}


Club* Player::GetClubFromBag(int index) 
{
	int ClubIndex = 0;
	for (Item* item : m_Inventory.GetItems()) 
	{ 
		Club* club = dynamic_cast<Club*>(item); 
		if (club) 
		{
			if (ClubIndex == index) 
			{
				return club; // index�� ��ġ�ϴ� Ŭ���� ã���� ��ȯ
			}
			ClubIndex++;
		}
	}
	return nullptr; // �� ã������ nullptr ��ȯ
}