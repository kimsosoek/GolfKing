#pragma once
#include "Inventory.h"


class Player
{
private:
    // --- �÷��̾��� ��� �����ʹ� private���� ��ȣ�մϴ� ---

    // �⺻ �ɷ�ġ
    int m_Power;
    int m_Accuracy;
    int m_Putting;

    // ����
    int m_Fatigue;

    // �κ��丮: ���� Club�Ӹ� �ƴ϶� Item�� ��ӹ޴� ��� �������� ���� �� �ֽ��ϴ�.
    Inventory m_Inventory;


public:
    // ������: Player ��ü�� ó�� ������ �� ȣ��˴ϴ�.
    Player();

    // ������ ��ȣ(index)�� �ش��ϴ� Ŭ���� �����ִ� �Լ�

    Club* GetClubFromBag(int index);
    
    // --- private �����͸� �ܺο��� �����ϰ� ����ϱ� ���� �Լ��� ---

    // �ɷ�ġ�� �о���� Getter �Լ���
    int GetPower() const;
    int GetAccuracy() const;
    int GetPutting() const;
    int GetFatigue() const;

    // �κ��丮 ���� �Լ���
    void AddItemToInventory(Item* newItem);
    void PrintInventory();
    void UseItem(const std::string& ItemName); // ������ ���(����) ��� 

    void AddPower(int amount);         // �Ŀ��� amount��ŭ ������ŵ�ϴ�.
    void AddAccuracy(int amount);      // ��Ȯ���� amount��ŭ ������ŵ�ϴ�.
    void AddPutting(int amount);       // ������ amount��ŭ ������ŵ�ϴ�.
    void AddFatigue(int amount);       // �Ƿε��� amount��ŭ ������ŵ�ϴ�.
    void RecoverAllFatigue();          // �Ƿε��� 0���� ������ ȸ���մϴ�.


    // �κ��丮���� 'Ŭ��'�� ã�Ƽ� ��ȣ�� �Բ� ����� �����ִ� �Լ�
    void ShowClubSelection();

   // ������ ��ȣ(index)�� �ش��ϴ� Ŭ���� �����ִ� �Լ�
   
   
public:
    void ClearInventory();

};

