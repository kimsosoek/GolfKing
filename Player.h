#pragma once
#include "Inventory.h"


class Player
{
private:
    // --- 플레이어의 모든 데이터는 private으로 보호합니다 ---

    // 기본 능력치
    int m_Power;
    int m_Accuracy;
    int m_Putting;

    // 상태
    int m_Fatigue;

    // 인벤토리: 이제 Club뿐만 아니라 Item을 상속받는 모든 아이템을 담을 수 있습니다.
    Inventory m_Inventory;


public:
    // 생성자: Player 객체가 처음 생성될 때 호출됩니다.
    Player();

    // 선택한 번호(index)에 해당하는 클럽을 돌려주는 함수

    Club* GetClubFromBag(int index);
    
    // --- private 데이터를 외부에서 안전하게 사용하기 위한 함수들 ---

    // 능력치를 읽어오는 Getter 함수들
    int GetPower() const;
    int GetAccuracy() const;
    int GetPutting() const;
    int GetFatigue() const;

    // 인벤토리 관리 함수들
    void AddItemToInventory(Item* newItem);
    void PrintInventory();
    void UseItem(const std::string& ItemName); // 아이템 사용(삭제) 기능 

    void AddPower(int amount);         // 파워를 amount만큼 증가시킵니다.
    void AddAccuracy(int amount);      // 정확도를 amount만큼 증가시킵니다.
    void AddPutting(int amount);       // 퍼팅을 amount만큼 증가시킵니다.
    void AddFatigue(int amount);       // 피로도를 amount만큼 증가시킵니다.
    void RecoverAllFatigue();          // 피로도를 0으로 완전히 회복합니다.


    // 인벤토리에서 '클럽'만 찾아서 번호와 함께 목록을 보여주는 함수
    void ShowClubSelection();

   // 선택한 번호(index)에 해당하는 클럽을 돌려주는 함수
   
   
public:
    void ClearInventory();

};

