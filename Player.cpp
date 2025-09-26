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

// 인벤토리 아이템 추가 기능
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
	// 자신의 m_power 멤버 변수에 amount 값을 더합니다.
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
	// (나중에 최대 피로도를 설정해서 100을 넘지 않게 할 수도 있습니다.)
}

void Player::RecoverAllFatigue() {
	// 피로도를 0으로 리셋합니다.
	m_Fatigue = 0;
}


void Player::ShowClubSelection(){
	printf("--- 클럽 선택 ---\n");
	int clubIndex = 1;
	float fatiguePenalty = 1.0f - (m_Fatigue / 200.0f);

	// 1. 인벤토리의 모든 아이템 목록을 가져옵니다.
	for (const Item* item : m_Inventory.GetItems()) {

		// 2. dynamic_cast를 사용해 아이템이 Club 타입인지 '안전하게' 확인합니다.

		const Club* club = dynamic_cast<const Club*>(item);
		if (club) { // 만약 Club 타입이 맞다면,
			// 3. 클럽 정보를 출력합니다.
			int estimatedDistance = (club->BaseDistance + m_Power) * fatiguePenalty;
			printf("%d. %s (예상 비거리: %dm)\n", clubIndex, club->GetName().c_str(), estimatedDistance);
			clubIndex++;
		}
	}
	printf("-----------------\n");
}


// 자신의 m_Inventory에게 인벤토리를 비워달라고 요청(위임)합니다.
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
				return club; // index와 일치하는 클럽을 찾으면 반환
			}
			ClubIndex++;
		}
	}
	return nullptr; // 못 찾았으면 nullptr 반환
}