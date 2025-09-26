#include "Gamemanager.h"
#include <iostream> 
#include <cstdio>   
#include <cstdlib>  
#include <ctime>    
#include"GameData.h"


//GameManager 의 생성자 구현
GameManager::GameManager()

{
    printf("기본 장비를 지급합니다...\n");
    // WORN_SET_DATA 배열을 순회하며 각 클럽을 복사하여 인벤토리에 추가

    for (const Club& clubData : WORN_SET_DATA) {

        // new Club(clubData)를 통해 동적 할당된 새 클럽 객체를 생성하고
        // 그 주소를 인벤토리에 추가합니다.

        m_Player.AddItemToInventory(new Club(clubData));
    }

    // 난수 시드를 설정하여 매번 다른 랜덤 결과를 얻도록 합니다.
    srand(time(0));


	// GameManager 객체가 생성되는 순간, 코스 정보를 설정하는 함수를 호출합니다.
	InitializeCourse();


}

void GameManager::InitializeCourse()
{
    // --- 1번 홀 ---
    m_Course[0].Name = "1번 홀: 초원의 시작";
    m_Course[0].Distance = 350;
    m_Course[0].FairwayWidth = 40;
    m_Course[0].Par = 4;
    m_Course[0].ForwardWind = 10;  // 순풍 10m
    m_Course[0].SideWind = 5;      // 오른쪽으로 5m 부는 바람
    m_Course[0].GreenDifficulty = 1; // 그린 난이도 (쉬움)
    m_Course[0].HasBunker = false; // 벙커 없음

    // --- 2번 홀 ---
    m_Course[1].Name = "2번 홀: 위험한 계곡";
    m_Course[1].Distance = 480;
    m_Course[1].FairwayWidth = 30;
    m_Course[1].Par = 5;
    m_Course[1].ForwardWind = -15; // 역풍 15m
    m_Course[1].SideWind = 0;
    m_Course[1].GreenDifficulty = 3; // 그린 난이도 (어려움)
    m_Course[1].HasBunker = true;  // 벙커 있음
    m_Course[1].BunkerDistance = 220;
    m_Course[1].BunkerRange = 80;  //벙커가 큼
    m_Course[1].BunkerChance = 100; //무조건 벙커에 빠짐

    // --- 3번 홀 ---



    m_Course[2].Name = "3번 홀: 바람의 섬";
    m_Course[2].Distance = 180;
    m_Course[2].FairwayWidth = 30;
    m_Course[2].Par = 3;
    m_Course[2].ForwardWind = -30; // 역풍 15m
    m_Course[2].SideWind = 20;
    m_Course[2].GreenDifficulty = 4; // 그린 난이도 (어려움)
    m_Course[2].HasBunker = true;  // 벙커 있음
    m_Course[2].BunkerDistance = 100;
    m_Course[2].BunkerRange = 20;
    m_Course[2].BunkerChance = 30;


    //4번
    m_Course[3].Name = "4번 홀: 고요한 평지";
    m_Course[3].Distance = 380;
    m_Course[3].FairwayWidth = 50;
    m_Course[3].Par = 4;
    m_Course[3].ForwardWind = -5;
    m_Course[3].SideWind = 5;
    m_Course[3].GreenDifficulty = 2; // 그린 난이도 
    m_Course[3].HasBunker = true;  // 벙커 있음
    m_Course[3].BunkerDistance = 200;
    m_Course[3].BunkerRange = 10;
    m_Course[3].BunkerChance = 80;

    //5
    m_Course[4].Name = "5번 홀: 거인의 등";
    m_Course[4].Distance = 520;
    m_Course[4].FairwayWidth = 50;
    m_Course[4].Par = 5;
    m_Course[4].ForwardWind = 25;
    m_Course[4].SideWind = 10;
    m_Course[4].GreenDifficulty = 3; // 그린 난이도 
    m_Course[4].HasBunker = true;  // 벙커 있음
    m_Course[4].BunkerDistance = 250;
    m_Course[4].BunkerRange = 10;
    m_Course[4].BunkerChance = 50;

    //6
    m_Course[5].Name = "6번 홀: 역풍의 언덕";
    m_Course[5].Distance = 400;
    m_Course[5].FairwayWidth = 40;
    m_Course[5].Par = 4;
    m_Course[5].ForwardWind = -20;
    m_Course[5].SideWind = -5;
    m_Course[5].GreenDifficulty = 3; // 그린 난이도 
    m_Course[5].HasBunker = true;  // 벙커 있음
    m_Course[5].BunkerDistance = 360;
    m_Course[5].BunkerRange = 20;
    m_Course[5].BunkerChance = 60;

    //7
    m_Course[6].Name = "7번 홀: 모래의 유혹";
    m_Course[6].Distance = 175;
    m_Course[6].FairwayWidth = 40;
    m_Course[6].Par = 3;
    m_Course[6].ForwardWind = 0;
    m_Course[6].SideWind = 0;
    m_Course[6].GreenDifficulty = 5; // 그린 난이도 
    m_Course[6].HasBunker = true;  // 벙커 있음
    m_Course[6].BunkerDistance = 160;
    m_Course[6].BunkerRange = 25;
    m_Course[6].BunkerChance = 100;

    //8
    m_Course[7].Name = "8번 홀: 굽이진 길";
    m_Course[7].Distance = 395;
    m_Course[7].FairwayWidth = 30;
    m_Course[7].Par = 4;
    m_Course[7].ForwardWind = 10;
    m_Course[7].SideWind = 25;
    m_Course[7].GreenDifficulty = 2; // 그린 난이도 
    m_Course[7].HasBunker = true;  // 벙커 있음
    m_Course[7].BunkerDistance = 230;
    m_Course[7].BunkerRange = 45;
    m_Course[7].BunkerChance = 55;

    //9
    m_Course[8].Name = "9번 홀: 별에게 가는 길";
    m_Course[8].Distance = 650;
    m_Course[8].FairwayWidth = 30;
    m_Course[8].Par = 5;
    m_Course[8].ForwardWind = -10;
    m_Course[8].SideWind = 20;
    m_Course[8].GreenDifficulty =5; // 그린 난이도 
    m_Course[8].HasBunker = true;  // 벙커 있음
    m_Course[8].BunkerDistance = 240;
    m_Course[8].BunkerRange = 45;
    m_Course[8].BunkerChance = 70;

}

int GameManager::ShowMainMenu()
{
    printf("--- 메인 메뉴 ---\n");
    printf("현재 상태 | 파워: %d | 정확도: %d | 퍼팅: %d | 피로도: %d\n",
    m_Player.GetPower(), m_Player.GetAccuracy(), m_Player.GetPutting(), m_Player.GetFatigue());
    m_Player.PrintInventory(); // 현재 인벤토리 목록 표시
    printf("-----------------\n");
    printf("1. 훈련하기\n");
    printf("2. 경기에 참가하기 ('별빛 골프 코스')\n");
    printf("3. 휴식하기\n");
    printf("4. 은퇴하기 (게임 종료)\n");
    printf("-----------------\n> ");

    int input = 0;
    std::cin >> input;
    return input;
}

void GameManager::PlayRound()
{
    if (m_Player.GetFatigue() >= 100) {
        printf("피로도가 너무 높아서 경기에 참가할 수 없습니다! 휴식이 필요합니다.\n");
        return; // 함수를 즉시 종료
    }

    printf("\n 별빛 골프 코스 경기를 시작합니다!\n");

    m_Player.PrintInventory(); // 경기에 앞서 현재 장비를 확인합니다.



    int TotalScore = 0;  //9홀의 총 타수를 기록

    //9개홀을 순서대로 플레이
    for (int i = 0; i < Course_Hole_Count; ++i)
    {
        Hole& CurrentHole = m_Course[i];

        // --- 홀 시작 준비 ---
        int RemainingDistance = CurrentHole.Distance;
        int CurrentLateralPosition = 0; // 좌우 위치 (0: 중앙)
        int StrokeCount = 0;

        BallLocation ballLocation = BallLocation::TEE; // 첫 샷은 항상 티(Tee)에서 시작



        // >> 홀 시작 직전에 스토리 출력 <<
        m_StoryManager.PlayPreHoleStory(i);

        //홀정보 출력
        printf("\n--- %s (Par: %d, Distance: %d m) ---\n",
            CurrentHole.Name.c_str(), CurrentHole.Par, CurrentHole.Distance);


        // 2. 안쪽 while 루프: 홀인할 때까지 샷을 반복합니다.
        while (RemainingDistance > 0)
        {
            StrokeCount++;
            float PowerPenalty = 1.0f; // 1.0이면 페널티 없음
            // (정확도 페널티 변수도 추가 가능)

            if (ballLocation == BallLocation::ROUGH) {
                printf("러프에서의 샷입니다! (파워 20%% 감소)\n");
                PowerPenalty = 0.8f; // 파워 20% 감소
            }
            else if (ballLocation == BallLocation::BUNKER) {
                printf("벙커에서의 샷입니다! (파워 50%% 감소)\n");
                PowerPenalty = 0.5f; // 파워 50% 감소
            }

            printf("\n--- %s [%d번째 샷 | Par: %d] ---\n", CurrentHole.Name.c_str(), StrokeCount, CurrentHole.Par);
            printf("홀까지 남은 거리: %dm\n", RemainingDistance);
            printf("현재 공 위치: 중앙에서 %dm 지점\n", CurrentLateralPosition);
            printf("바람: 앞뒤 %+d m/s, 좌우 %+d m/s\n", CurrentHole.ForwardWind, CurrentHole.SideWind);


            // 현재 홀에 벙커가 있다면, 그 정보를 플레이어에게 알려줍니다.
            if (CurrentHole.HasBunker)
            {
                printf("!! 주의: %dm 지점부터 %dm 길이의 벙커가 있습니다. (위험도: %d%%)\n",
                    CurrentHole.BunkerDistance, CurrentHole.BunkerRange, CurrentHole.BunkerChance);
            }

            // --- 1. 클럽 선택 입력 ---
            m_Player.ShowClubSelection();// 플레이어의 클럽 목록을 화면에 보여줌

            printf("사용할 클럽 번호: ");
            int ClubChoice = 0;
            std::cin >> ClubChoice;

            Club* SelectedClub = m_Player.GetClubFromBag(ClubChoice - 1); // 배열은 0부터 시작하므로 -1

            if (SelectedClub == nullptr) {
                printf("잘못된 클럽 선택입니다. 첫 번째 클럽으로 샷합니다.\n");
                SelectedClub = m_Player.GetClubFromBag(0);
            }

            // --- 2. 방향 조준 입력 ---
            printf("방향 조준 (예: -10은 왼쪽 끝, 0은 중앙, +10은 오른쪽 끝): ");
            int PlayerAim = 0;
            std::cin >> PlayerAim;

            // --- 3. 파워 입력 ---
            printf("\n               샷 파워 가이드\n");
            printf("[  더프샷  |    컨트롤 구간 (5~35)   | 오버 스윙 ]\n");
            printf("[<<<<<<<<<<|=======================|>>>>>>>>>>]\n");
            printf("                   파워 입력\n ");
            std::string PowerInputString;
            std::cin >> PowerInputString;
            int PowerInputLength = PowerInputString.length();

            // --- 샷 결과 계산 ---
            float PowerPercentage = 0.0f;
            bool IsOverSwing = false;
            int FinalDistance = 0;
            int FinalSidewaysPosition = 0;

            // ballLocation 변수는 이전에 선언된 것을 그대로 사용합니다.

            if (PowerInputLength < 5) { // 더프 샷
                printf("너무 약하게 쳤습니다! 공이 바로 앞에 떨어집니다.\n");
                FinalDistance = rand() % 16 + 5; // 5 ~ 20m 사이 랜덤 비거리
                // 좌우 편차는 거의 없으므로 FinalSidewaysPosition은 0으로 유지
            }
            else { // 컨트롤 샷 또는 오버 스윙
                if (PowerInputLength > 35) { // 오버 스윙
                    printf("너무 강하게 휘둘렀습니다! 공이 엉뚱한 방향으로 날아갑니다!\n");
                    PowerPercentage = (rand() % 21 + 90) / 90.0f;
                    IsOverSwing = true;
                }
                else { // 컨트롤 샷
                    PowerPercentage = static_cast<float>(PowerInputLength - 5) / 30.0f;
                }

                // B. 잠재 비거리 계산 (능력치 + 클럽 성능 + 지형 페널티)

                float FatiguePenalty = 1.0f - (m_Player.GetFatigue() / 200.0f); // 피로도 100이면 파워 50% 감소
                float PotentialDistance = (SelectedClub->BaseDistance + m_Player.GetPower()) * PowerPenalty * FatiguePenalty;

                // C. 최종 비거리 계산 (잠재 비거리 * 파워 비율 + 바람)
                FinalDistance = static_cast<int>(PotentialDistance * PowerPercentage) + CurrentHole.ForwardWind;

                // D. 좌우 편차 계산
                int MaxRandomError = 20 * (1.0f - m_Player.GetAccuracy() / 100.0f);
                if (IsOverSwing) {
                    int randomPenaltyMultiplier = rand() % 5 + 4;
                    MaxRandomError *= randomPenaltyMultiplier;
                }
                int randomError = 0;
                if (MaxRandomError > 0) {
                    randomError = (rand() % (2 * MaxRandomError)) - MaxRandomError;
                }
                FinalSidewaysPosition = PlayerAim + randomError + CurrentHole.SideWind;
            }

            // --- 샷 결과 판정 및 피드백 ---
            if (FinalDistance > RemainingDistance && RemainingDistance > 20) { // 그린 위가 아닐 때만
                printf("너무 강했습니다! 공이 그린을 훌쩍 넘어갔습니다. (+1 벌타)\n");
                StrokeCount++; // 벌타 1 추가
                RemainingDistance = 25; // 그린 주변 25m 지점으로 공을 옮김
                continue; // 이번 샷 계산을 여기서 종료하고 다음 샷으로 넘어감
            }
            RemainingDistance -= FinalDistance;
            CurrentLateralPosition = FinalSidewaysPosition;

            printf(" -> 샷 결과: 비거리 %dm, 좌우 편차 %dm\n", FinalDistance, FinalSidewaysPosition);

            int ballAbsolutePos = CurrentHole.Distance - RemainingDistance;
            if (CurrentHole.HasBunker &&
                ballAbsolutePos >= CurrentHole.BunkerDistance &&
                ballAbsolutePos <= CurrentHole.BunkerDistance + CurrentHole.BunkerRange)
            {
                // 1. 벙커판정
                int FinalBunkerChance = CurrentHole.BunkerChance - m_Player.GetAccuracy() / 10; // 정확도에 따른 확률 감소
                if ((rand() % 100) < FinalBunkerChance) {
                    ballLocation = BallLocation::BUNKER;
                    printf("이런! 공이 벙커에 빠졌습니다. 다음 샷이 어려워집니다.\n");
                }
            }
            // 2. 러프 판정 (벙커에 빠지지 않았을 경우에만 확인)
            if (ballLocation != BallLocation::BUNKER) {
                // 공의 최종 좌우 위치가 페어웨이 폭의 절반보다 크다면 (페어웨이를 벗어났다면)
                if (abs(FinalSidewaysPosition) > CurrentHole.FairwayWidth / 2) {
                    ballLocation = BallLocation::ROUGH;
                    printf("공이 페어웨이를 벗어나 러프에 빠졌습니다.\n");
                }
            }
            //3. 페어웨이 안착(벙커와 러프 둘 다 아닐 경우)
            if (ballLocation == BallLocation::FAIRWAY) {
                printf("공이 페어웨이에 안전하게 안착했습니다.\n");
            }

            // --- 4. 그린 진입 판정 ---
            if (RemainingDistance <= 20) {
                printf("공이 그린 위에 안착했습니다! 퍼팅을 시작합니다.\n");

                // 퍼팅 미니게임을 호출하고, 퍼팅 타수를 받아옵니다.
                int putts = HandlePutting(RemainingDistance, CurrentHole.GreenDifficulty);

                // 기존 샷 타수에 퍼팅 타수를 더합니다. (단, 첫 퍼팅은 이미 1타로 쳤으므로 -1)
                StrokeCount += (putts - 1);

                RemainingDistance = 0; // 홀인 처리
            }

        }
        // --- 홀 종료 ---
       // (실제 퍼팅 로직에서 최종 타수를 확정해야 함)
        printf("\n%d타로 홀아웃! (Par: %d)\n", StrokeCount, CurrentHole.Par);
        TotalScore += StrokeCount;

        if (StrokeCount <= CurrentHole.Par) {
            printf("Par 세이브 성공! 추가 보상을 확인합니다...\n");
            if ((rand() % 100) < 40) { // 20% 확률로
                printf("특별한 아이템을 발견했습니다!\n");
               
            }
            m_StoryManager.PlayPostHoleStory(i);
        }

        if (i < Course_Hole_Count - 1)
        {
            printf("\n--- 어떻게 하시겠습니까? ---\n");
            printf("1. 다음 홀로 진행하기\n");
            printf("2. 메인 메뉴로 돌아가기 (훈련/휴식)\n");
            printf("--------------------------\n> ");
            int choice = 0;
            std::cin >> choice;

            if (choice == 2) {
                printf("경기를 중단하고 메인 메뉴로 돌아갑니다...\n");
                break; // for 루프를 즉시 탈출합니다.
            }
        }
        // --- 경기 종료 ---
        printf("\n--- 경기 종료 ---\n");
        printf("9홀 총 타수: %d\n", TotalScore);
        m_Player.AddFatigue(60); // 경기 후 피로도 60 증가

        // (보상 지급 로직 추가)
        printf("경기 결과에 따른 보상을 확인합니다...\n");

        // 1. 플레이어의 현재 장비 등급 확인 (첫 번째 클럽 기준)
        Club* currentClub = m_Player.GetClubFromBag(0);
        Tier currentTier = currentClub->GetTier();

        // 2. 목표 타수 설정 (예: 9홀 전체 Par 합계)
        int targetScore = 0;
        for (int j = 0; j < Course_Hole_Count; ++j) {
            targetScore += m_Course[j].Par;
        }


        // 3. 결과 판정 및 보상 지급
        if (TotalScore <= targetScore) {
            printf("훌륭한 성적입니다! 목표 타수(%d) 이하를 기록했습니다!\n", targetScore);

            // 현재 등급에 따라 다음 등급의 세트를 지급
            if (currentTier == Tier::낡은) {
                printf("보상으로 [일반 클럽 세트]를 획득했습니다!\n");
                m_Player.ClearInventory(); // 기존 장비 비우기
                for (const auto& ClubData : COMMON_SET_DATA) {
                    m_Player.AddItemToInventory(new Club(ClubData));
                }
            }
            else if (currentTier == Tier::일반) {
                printf("보상으로 [희귀 클럽 세트]를 획득했습니다!\n");
                m_Player.ClearInventory();
                for (const auto& ClubData : RARE_SET_DATA) {
                    m_Player.AddItemToInventory(new Club(ClubData));
                }
            }
            else if (currentTier == Tier::희귀) {
                printf("보상으로 [전설 클럽 세트]를 획득했습니다!\n");
                m_Player.ClearInventory();
                for (const auto& ClubData : LEGENDARY_SET_DATA) {
                    m_Player.AddItemToInventory(new Club(ClubData));
                }
            }
            else if (currentTier == Tier::전설) {
                printf("보상으로 [신화 클럽 세트]를 획득했습니다!\n");
                m_Player.ClearInventory();
                for (const auto& ClubData : MYTHIC_SET_DATA) {
                    m_Player.AddItemToInventory(new Club(ClubData));
                }
            }

            else {
                printf("이미 최고의 장비를 가지고 있습니다!\n");
            }

            printf("\n--- 획득한 새 장비를 확인합니다 ---\n");
            m_Player.PrintInventory(); // 새 아이템이 들어온 인벤토리를 바로 출력!
        }
        else {
            printf("아쉽지만 목표 타수를 넘겼습니다. 다음 기회에 도전해주세요.\n");
        }
    }


}

void GameManager::DoTraining()
{
    if (m_Player.GetFatigue() >= 100) {
        printf("피로도가 너무 높아서 경기에 참가할 수 없습니다! 휴식이 필요합니다.\n");
        return; // 함수를 즉시 종료
    }


    printf("\n어떤 훈련을 하시겠습니까? (피로도 20 소모)\n");
    printf("1. 파워 훈련 (+2)\n");
    printf("2. 정확도 훈련 (+2)\n");
    printf("3. 퍼팅 훈련 (+2)\n");
    printf("> ");

    int choice = 0;
    std::cin >> choice;

  
    if (choice == 1) {
        m_Player.AddPower(2);
        printf("파워 훈련으로 능력치가 상승했습니다! (현재 파워: %d)\n", m_Player.GetPower());
    }
    else if (choice == 2) {
        m_Player.AddAccuracy(2);
        printf("정확도 훈련으로 능력치가 상승했습니다! (현재 정확도: %d)\n", m_Player.GetAccuracy());
    }
    else if (choice == 3) {
        m_Player.AddPutting(2);
        printf("퍼팅 훈련으로 능력치가 상승했습니다! (현재 퍼팅: %d)\n", m_Player.GetPutting());
    }
    else {
        printf("잘못된 선택입니다. 훈련을 취소합니다.\n");
        return; // 훈련을 안 했으니 피로도도 오르면 안 됨
    }
    m_Player.AddFatigue(20);
}

void GameManager::TakeRest()
{
    m_Player.RecoverAllFatigue();
    printf("\n충분한 휴식을 취해 피로도가 모두 회복되었습니다.\n");
    
}


// 게임 전체를 시작하고 실행하는 메인 함수
void GameManager::Run()
{
    
        //오프닝 스토리 보여주기
        m_StoryManager.PrintOpeningStory();

        // 2. 메인 게임 루프 시작
        while (true) {
            int choice = ShowMainMenu(); // 메인 메뉴를 보여주고 선택을 받음

            if (choice == 1) {
                DoTraining(); // 훈련 실행
            }
            else if (choice == 2) {
                PlayRound(); // 경기 시작
            }
            else if (choice == 3) {
                TakeRest(); // 휴식
            }
            else if (choice == 4) {
                printf("게임을 종료합니다. 할아버지의 꿈은 다음 기회에...\n");
                break; // while 루프를 빠져나가 게임 종료
            }
            else {
                printf("잘못된 입력입니다. 1~4 사이의 숫자를 입력해주세요.\n");
            }
            printf("\n");
        }
        
    
}
int GameManager::HandlePutting(int RemainingDistance, int GreenDifficulty) {
    int PuttCount = 0; // 이번 홀에서 퍼팅한 횟수

    // 홀인할 때까지 퍼팅을 반복합니다.
    while (RemainingDistance > 0) {
        PuttCount++;
        printf("\n--- 퍼팅 [%d번째] ---\n", PuttCount);
        printf("홀까지 남은 거리: %dm\n", RemainingDistance);

        // --- 1. 퍼팅 입력 받기 (샷과 동일) ---
        printf("방향 조준 (-10 ~ +10): ");
        int PlayerAim = 0;
        std::cin >> PlayerAim;

        printf("\n                  파워 가이드\n");
        printf("\n[  약함  |      컨트롤 구간 (5~25)      |  강함  ]\n[<<<<<|=============|>>>>>]\n");
        printf("                     파워 입력\n ");
        std::string PowerInputString;
        std::cin >> PowerInputString;
        int PowerInputLength = PowerInputString.length();

        // --- 2. 성공 판정 ---
        bool IsHoleIn = false;

        // 2-1. '스위트 스팟' 판정 (100% 성공)
        // (남은 거리에 따라 완벽한 파워 길이가 달라지는 로직. 예: 1m당 1씩 증가)
        int SweetSpotLength = 5 + RemainingDistance;
        if (PowerInputLength == SweetSpotLength) {
            printf("완벽한 퍼팅! 그대로 홀컵으로 빨려 들어갑니다!\n");
            IsHoleIn = true;
        }
        else {
            // 2-2. '성공률' 판정 (확률적 성공)
            int SuccessRate = 100 - (GreenDifficulty * 15);
            if (SuccessRate < 5) SuccessRate = 5; // 최소 성공률 5% 보장

            printf("(성공 확률: %d%%)\n", SuccessRate);

            if ((rand() % 100) < SuccessRate) {
                printf("운이 좋았네요! 공이 컵에 쏙 들어갑니다!\n");
                IsHoleIn = true;
            }
            else {
                printf("이런! 아슬아슬하게 홀컵을 비껴갑니다.\n");
                // 실패 시, 1~2m 정도의 거리를 남김
                RemainingDistance = rand() % 2 + 1;
            }
        }

        // 홀인에 성공했다면 루프 종료
        if (IsHoleIn) {
            RemainingDistance = 0;
        }
    }
    return PuttCount; // 최종 퍼팅 타수 반환
}