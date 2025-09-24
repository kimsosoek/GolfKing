#pragma once
#include "Item.h"
#include <vector>

class Player {
private:
    // --- �÷��̾��� ��� �����ʹ� private���� ��ȣ�մϴ� ---

    // �⺻ �ɷ�ġ
    int m_power;
    int m_accuracy;
    int m_putting;

    // ����
    int m_fatigue;

    // �κ��丮: ���� Club�Ӹ� �ƴ϶� Item�� ��ӹ޴� ��� �������� ���� �� �ֽ��ϴ�.
    std::vector<Item*> m_inventory;

public:
    // ������: Player ��ü�� ó�� ������ �� ȣ��˴ϴ�.
    Player();
    // �Ҹ���: Player ��ü�� ����� �� ȣ��˴ϴ�. (�޸� ������)
    ~Player();

    // --- private �����͸� �ܺο��� �����ϰ� ����ϱ� ���� �Լ��� ---

    // �ɷ�ġ�� �о���� Getter �Լ���
    int GetPower() const;
    int GetAccuracy() const;
    int GetPutting() const;
    int GetFatigue() const;

    // �κ��丮 ���� �Լ���
    void AddItemToInventory(Item* newItem);
    void ClearInventory();
};