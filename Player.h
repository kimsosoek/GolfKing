#pragma once
#include "Item.h"
#include <vector>

class Player {
private:
    // --- 플레이어의 모든 데이터는 private으로 보호합니다 ---

    // 기본 능력치
    int m_Power;
    int m_Accuracy;
    int m_Putting;

    // 상태
    int m_Fatigue;

    // 인벤토리: 이제 Club뿐만 아니라 Item을 상속받는 모든 아이템을 담을 수 있습니다.
    std::vector<Item*> m_Inventory;

public:
    // 생성자: Player 객체가 처음 생성될 때 호출됩니다.
    Player();
    // 소멸자: Player 객체가 사라질 때 호출됩니다. (메모리 정리용)
    ~Player();

    // --- private 데이터를 외부에서 안전하게 사용하기 위한 함수들 ---

    // 능력치를 읽어오는 Getter 함수들
    int GetPower() const;
    int GetAccuracy() const;
    int GetPutting() const;

    int GetFatigue() const;

    // 인벤토리 관리 함수들
    void AddItemToInventory(Item* newItem);
    void ClearInventory();
};