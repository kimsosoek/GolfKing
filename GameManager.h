#pragma once
#include "StoryManager.h"
#include "Player.h"
#include "Hole.h"
#include"Inventory.h"
#include"Item.h"
#include"Club.h"

enum class BallLocation {
	TEE,
	FAIRWAY,
	ROUGH,
	BUNKER,
	GREEN
};

const int Course_Hole_Count = 9;  //������ Ȧ�� 9Ȧ�� ����˴ϴ�.


class GameManager
{
private:
	// ���Ӹ޴����� �ٽ� ��ü��
	Player m_Player; // ���ΰ� ����
	StoryManager m_StoryManager; //���丮 ��� ��ü
	Hole m_Course[Course_Hole_Count]; // 9�� Ȧ ������ ��� �迭(�����ڽ�)

	// ������ ���� �帧�� ó���ϴ�  privata�Լ���
	void InitializeCourse(); // 9���� Ȧ �����͸� �����ϴ� �ʱ�ȭ �Լ�
	int ShowMainMenu(); // �Ʒ�,���,�޽� �޴��� �����ִ� �Լ�
	void PlayRound(); // ���� ��� �� ���带 �����ϴ� �Լ�
	void DoTraining(); // �Ʒ��� �����ϴ� �Լ�
	void TakeRest(); // �޽��� �����ϴ� �Լ�

	// ���� �̴ϰ����� ó���ϰ�, ���ÿ� ���� Ÿ���� ��ȯ�ϴ� �Լ�
	int HandlePutting(int RemainingDistance, int GreenDifficulty);


public:
	//GamemManager�� ������ �� ȣ��Ǵ� ������
	GameManager();

	//main.cpp ���� ȣ����, ���� ��ü�� �����ϰ� �����ϴ� �Լ�
	void Run();
};
