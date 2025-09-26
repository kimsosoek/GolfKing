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

const int Course_Hole_Count = 9;  //게임의 홀은 9홀로 진행됩니다.


class GameManager
{
private:
	// 게임메니저의 핵식 객체들
	Player m_Player; // 주인공 객제
	StoryManager m_StoryManager; //스토리 담당 객체
	Hole m_Course[Course_Hole_Count]; // 9개 홀 정보를 담는 배열(게임코스)

	// 게임의 내부 흐름을 처리하는  privata함수들
	void InitializeCourse(); // 9개의 홀 데이터를 설정하는 초기화 함수
	int ShowMainMenu(); // 훈련,경기,휴식 메뉴를 보여주는 함수
	void PlayRound(); // 골프 경기 한 라운드를 진행하는 함수
	void DoTraining(); // 훈련을 진행하는 함수
	void TakeRest(); // 휴식을 진행하는 함수

	// 퍼팅 미니게임을 처리하고, 퍼팅에 사용된 타수를 반환하는 함수
	int HandlePutting(int RemainingDistance, int GreenDifficulty);


public:
	//GamemManager가 생성될 때 호출되는 생성자
	GameManager();

	//main.cpp 에서 호출할, 게임 전체를 시작하고 실행하는 함수
	void Run();
};
