#include "Gamemanager.h"
#include <iostream> 
#include <cstdio>   
#include <cstdlib>  
#include <ctime>    
#include"GameData.h"


//GameManager �� ������ ����
GameManager::GameManager()

{
    printf("�⺻ ��� �����մϴ�...\n");
    // WORN_SET_DATA �迭�� ��ȸ�ϸ� �� Ŭ���� �����Ͽ� �κ��丮�� �߰�

    for (const Club& clubData : WORN_SET_DATA) {

        // new Club(clubData)�� ���� ���� �Ҵ�� �� Ŭ�� ��ü�� �����ϰ�
        // �� �ּҸ� �κ��丮�� �߰��մϴ�.

        m_Player.AddItemToInventory(new Club(clubData));
    }

    // ���� �õ带 �����Ͽ� �Ź� �ٸ� ���� ����� �򵵷� �մϴ�.
    srand(time(0));


	// GameManager ��ü�� �����Ǵ� ����, �ڽ� ������ �����ϴ� �Լ��� ȣ���մϴ�.
	InitializeCourse();


}

void GameManager::InitializeCourse()
{
    // --- 1�� Ȧ ---
    m_Course[0].Name = "1�� Ȧ: �ʿ��� ����";
    m_Course[0].Distance = 350;
    m_Course[0].FairwayWidth = 40;
    m_Course[0].Par = 4;
    m_Course[0].ForwardWind = 10;  // ��ǳ 10m
    m_Course[0].SideWind = 5;      // ���������� 5m �δ� �ٶ�
    m_Course[0].GreenDifficulty = 1; // �׸� ���̵� (����)
    m_Course[0].HasBunker = false; // ��Ŀ ����

    // --- 2�� Ȧ ---
    m_Course[1].Name = "2�� Ȧ: ������ ���";
    m_Course[1].Distance = 480;
    m_Course[1].FairwayWidth = 30;
    m_Course[1].Par = 5;
    m_Course[1].ForwardWind = -15; // ��ǳ 15m
    m_Course[1].SideWind = 0;
    m_Course[1].GreenDifficulty = 3; // �׸� ���̵� (�����)
    m_Course[1].HasBunker = true;  // ��Ŀ ����
    m_Course[1].BunkerDistance = 220;
    m_Course[1].BunkerRange = 80;  //��Ŀ�� ŭ
    m_Course[1].BunkerChance = 100; //������ ��Ŀ�� ����

    // --- 3�� Ȧ ---



    m_Course[2].Name = "3�� Ȧ: �ٶ��� ��";
    m_Course[2].Distance = 180;
    m_Course[2].FairwayWidth = 30;
    m_Course[2].Par = 3;
    m_Course[2].ForwardWind = -30; // ��ǳ 15m
    m_Course[2].SideWind = 20;
    m_Course[2].GreenDifficulty = 4; // �׸� ���̵� (�����)
    m_Course[2].HasBunker = true;  // ��Ŀ ����
    m_Course[2].BunkerDistance = 100;
    m_Course[2].BunkerRange = 20;
    m_Course[2].BunkerChance = 30;


    //4��
    m_Course[3].Name = "4�� Ȧ: ����� ����";
    m_Course[3].Distance = 380;
    m_Course[3].FairwayWidth = 50;
    m_Course[3].Par = 4;
    m_Course[3].ForwardWind = -5;
    m_Course[3].SideWind = 5;
    m_Course[3].GreenDifficulty = 2; // �׸� ���̵� 
    m_Course[3].HasBunker = true;  // ��Ŀ ����
    m_Course[3].BunkerDistance = 200;
    m_Course[3].BunkerRange = 10;
    m_Course[3].BunkerChance = 80;

    //5
    m_Course[4].Name = "5�� Ȧ: ������ ��";
    m_Course[4].Distance = 520;
    m_Course[4].FairwayWidth = 50;
    m_Course[4].Par = 5;
    m_Course[4].ForwardWind = 25;
    m_Course[4].SideWind = 10;
    m_Course[4].GreenDifficulty = 3; // �׸� ���̵� 
    m_Course[4].HasBunker = true;  // ��Ŀ ����
    m_Course[4].BunkerDistance = 250;
    m_Course[4].BunkerRange = 10;
    m_Course[4].BunkerChance = 50;

    //6
    m_Course[5].Name = "6�� Ȧ: ��ǳ�� ���";
    m_Course[5].Distance = 400;
    m_Course[5].FairwayWidth = 40;
    m_Course[5].Par = 4;
    m_Course[5].ForwardWind = -20;
    m_Course[5].SideWind = -5;
    m_Course[5].GreenDifficulty = 3; // �׸� ���̵� 
    m_Course[5].HasBunker = true;  // ��Ŀ ����
    m_Course[5].BunkerDistance = 360;
    m_Course[5].BunkerRange = 20;
    m_Course[5].BunkerChance = 60;

    //7
    m_Course[6].Name = "7�� Ȧ: ���� ��Ȥ";
    m_Course[6].Distance = 175;
    m_Course[6].FairwayWidth = 40;
    m_Course[6].Par = 3;
    m_Course[6].ForwardWind = 0;
    m_Course[6].SideWind = 0;
    m_Course[6].GreenDifficulty = 5; // �׸� ���̵� 
    m_Course[6].HasBunker = true;  // ��Ŀ ����
    m_Course[6].BunkerDistance = 160;
    m_Course[6].BunkerRange = 25;
    m_Course[6].BunkerChance = 100;

    //8
    m_Course[7].Name = "8�� Ȧ: ������ ��";
    m_Course[7].Distance = 395;
    m_Course[7].FairwayWidth = 30;
    m_Course[7].Par = 4;
    m_Course[7].ForwardWind = 10;
    m_Course[7].SideWind = 25;
    m_Course[7].GreenDifficulty = 2; // �׸� ���̵� 
    m_Course[7].HasBunker = true;  // ��Ŀ ����
    m_Course[7].BunkerDistance = 230;
    m_Course[7].BunkerRange = 45;
    m_Course[7].BunkerChance = 55;

    //9
    m_Course[8].Name = "9�� Ȧ: ������ ���� ��";
    m_Course[8].Distance = 650;
    m_Course[8].FairwayWidth = 30;
    m_Course[8].Par = 5;
    m_Course[8].ForwardWind = -10;
    m_Course[8].SideWind = 20;
    m_Course[8].GreenDifficulty =5; // �׸� ���̵� 
    m_Course[8].HasBunker = true;  // ��Ŀ ����
    m_Course[8].BunkerDistance = 240;
    m_Course[8].BunkerRange = 45;
    m_Course[8].BunkerChance = 70;

}

int GameManager::ShowMainMenu()
{
    printf("--- ���� �޴� ---\n");
    printf("���� ���� | �Ŀ�: %d | ��Ȯ��: %d | ����: %d | �Ƿε�: %d\n",
    m_Player.GetPower(), m_Player.GetAccuracy(), m_Player.GetPutting(), m_Player.GetFatigue());
    m_Player.PrintInventory(); // ���� �κ��丮 ��� ǥ��
    printf("-----------------\n");
    printf("1. �Ʒ��ϱ�\n");
    printf("2. ��⿡ �����ϱ� ('���� ���� �ڽ�')\n");
    printf("3. �޽��ϱ�\n");
    printf("4. �����ϱ� (���� ����)\n");
    printf("-----------------\n> ");

    int input = 0;
    std::cin >> input;
    return input;
}

void GameManager::PlayRound()
{
    if (m_Player.GetFatigue() >= 100) {
        printf("�Ƿε��� �ʹ� ���Ƽ� ��⿡ ������ �� �����ϴ�! �޽��� �ʿ��մϴ�.\n");
        return; // �Լ��� ��� ����
    }

    printf("\n ���� ���� �ڽ� ��⸦ �����մϴ�!\n");

    m_Player.PrintInventory(); // ��⿡ �ռ� ���� ��� Ȯ���մϴ�.



    int TotalScore = 0;  //9Ȧ�� �� Ÿ���� ���

    //9��Ȧ�� ������� �÷���
    for (int i = 0; i < Course_Hole_Count; ++i)
    {
        Hole& CurrentHole = m_Course[i];

        // --- Ȧ ���� �غ� ---
        int RemainingDistance = CurrentHole.Distance;
        int CurrentLateralPosition = 0; // �¿� ��ġ (0: �߾�)
        int StrokeCount = 0;

        BallLocation ballLocation = BallLocation::TEE; // ù ���� �׻� Ƽ(Tee)���� ����



        // >> Ȧ ���� ������ ���丮 ��� <<
        m_StoryManager.PlayPreHoleStory(i);

        //Ȧ���� ���
        printf("\n--- %s (Par: %d, Distance: %d m) ---\n",
            CurrentHole.Name.c_str(), CurrentHole.Par, CurrentHole.Distance);


        // 2. ���� while ����: Ȧ���� ������ ���� �ݺ��մϴ�.
        while (RemainingDistance > 0)
        {
            StrokeCount++;
            float PowerPenalty = 1.0f; // 1.0�̸� ���Ƽ ����
            // (��Ȯ�� ���Ƽ ������ �߰� ����)

            if (ballLocation == BallLocation::ROUGH) {
                printf("���������� ���Դϴ�! (�Ŀ� 20%% ����)\n");
                PowerPenalty = 0.8f; // �Ŀ� 20% ����
            }
            else if (ballLocation == BallLocation::BUNKER) {
                printf("��Ŀ������ ���Դϴ�! (�Ŀ� 50%% ����)\n");
                PowerPenalty = 0.5f; // �Ŀ� 50% ����
            }

            printf("\n--- %s [%d��° �� | Par: %d] ---\n", CurrentHole.Name.c_str(), StrokeCount, CurrentHole.Par);
            printf("Ȧ���� ���� �Ÿ�: %dm\n", RemainingDistance);
            printf("���� �� ��ġ: �߾ӿ��� %dm ����\n", CurrentLateralPosition);
            printf("�ٶ�: �յ� %+d m/s, �¿� %+d m/s\n", CurrentHole.ForwardWind, CurrentHole.SideWind);


            // ���� Ȧ�� ��Ŀ�� �ִٸ�, �� ������ �÷��̾�� �˷��ݴϴ�.
            if (CurrentHole.HasBunker)
            {
                printf("!! ����: %dm �������� %dm ������ ��Ŀ�� �ֽ��ϴ�. (���赵: %d%%)\n",
                    CurrentHole.BunkerDistance, CurrentHole.BunkerRange, CurrentHole.BunkerChance);
            }

            // --- 1. Ŭ�� ���� �Է� ---
            m_Player.ShowClubSelection();// �÷��̾��� Ŭ�� ����� ȭ�鿡 ������

            printf("����� Ŭ�� ��ȣ: ");
            int ClubChoice = 0;
            std::cin >> ClubChoice;

            Club* SelectedClub = m_Player.GetClubFromBag(ClubChoice - 1); // �迭�� 0���� �����ϹǷ� -1

            if (SelectedClub == nullptr) {
                printf("�߸��� Ŭ�� �����Դϴ�. ù ��° Ŭ������ ���մϴ�.\n");
                SelectedClub = m_Player.GetClubFromBag(0);
            }

            // --- 2. ���� ���� �Է� ---
            printf("���� ���� (��: -10�� ���� ��, 0�� �߾�, +10�� ������ ��): ");
            int PlayerAim = 0;
            std::cin >> PlayerAim;

            // --- 3. �Ŀ� �Է� ---
            printf("\n               �� �Ŀ� ���̵�\n");
            printf("[  ������  |    ��Ʈ�� ���� (5~35)   | ���� ���� ]\n");
            printf("[<<<<<<<<<<|=======================|>>>>>>>>>>]\n");
            printf("                   �Ŀ� �Է�\n ");
            std::string PowerInputString;
            std::cin >> PowerInputString;
            int PowerInputLength = PowerInputString.length();

            // --- �� ��� ��� ---
            float PowerPercentage = 0.0f;
            bool IsOverSwing = false;
            int FinalDistance = 0;
            int FinalSidewaysPosition = 0;

            // ballLocation ������ ������ ����� ���� �״�� ����մϴ�.

            if (PowerInputLength < 5) { // ���� ��
                printf("�ʹ� ���ϰ� �ƽ��ϴ�! ���� �ٷ� �տ� �������ϴ�.\n");
                FinalDistance = rand() % 16 + 5; // 5 ~ 20m ���� ���� ��Ÿ�
                // �¿� ������ ���� �����Ƿ� FinalSidewaysPosition�� 0���� ����
            }
            else { // ��Ʈ�� �� �Ǵ� ���� ����
                if (PowerInputLength > 35) { // ���� ����
                    printf("�ʹ� ���ϰ� �ֵѷ����ϴ�! ���� ������ �������� ���ư��ϴ�!\n");
                    PowerPercentage = (rand() % 21 + 90) / 90.0f;
                    IsOverSwing = true;
                }
                else { // ��Ʈ�� ��
                    PowerPercentage = static_cast<float>(PowerInputLength - 5) / 30.0f;
                }

                // B. ���� ��Ÿ� ��� (�ɷ�ġ + Ŭ�� ���� + ���� ���Ƽ)

                float FatiguePenalty = 1.0f - (m_Player.GetFatigue() / 200.0f); // �Ƿε� 100�̸� �Ŀ� 50% ����
                float PotentialDistance = (SelectedClub->BaseDistance + m_Player.GetPower()) * PowerPenalty * FatiguePenalty;

                // C. ���� ��Ÿ� ��� (���� ��Ÿ� * �Ŀ� ���� + �ٶ�)
                FinalDistance = static_cast<int>(PotentialDistance * PowerPercentage) + CurrentHole.ForwardWind;

                // D. �¿� ���� ���
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

            // --- �� ��� ���� �� �ǵ�� ---
            if (FinalDistance > RemainingDistance && RemainingDistance > 20) { // �׸� ���� �ƴ� ����
                printf("�ʹ� ���߽��ϴ�! ���� �׸��� ��½ �Ѿ���ϴ�. (+1 ��Ÿ)\n");
                StrokeCount++; // ��Ÿ 1 �߰�
                RemainingDistance = 25; // �׸� �ֺ� 25m �������� ���� �ű�
                continue; // �̹� �� ����� ���⼭ �����ϰ� ���� ������ �Ѿ
            }
            RemainingDistance -= FinalDistance;
            CurrentLateralPosition = FinalSidewaysPosition;

            printf(" -> �� ���: ��Ÿ� %dm, �¿� ���� %dm\n", FinalDistance, FinalSidewaysPosition);

            int ballAbsolutePos = CurrentHole.Distance - RemainingDistance;
            if (CurrentHole.HasBunker &&
                ballAbsolutePos >= CurrentHole.BunkerDistance &&
                ballAbsolutePos <= CurrentHole.BunkerDistance + CurrentHole.BunkerRange)
            {
                // 1. ��Ŀ����
                int FinalBunkerChance = CurrentHole.BunkerChance - m_Player.GetAccuracy() / 10; // ��Ȯ���� ���� Ȯ�� ����
                if ((rand() % 100) < FinalBunkerChance) {
                    ballLocation = BallLocation::BUNKER;
                    printf("�̷�! ���� ��Ŀ�� �������ϴ�. ���� ���� ��������ϴ�.\n");
                }
            }
            // 2. ���� ���� (��Ŀ�� ������ �ʾ��� ��쿡�� Ȯ��)
            if (ballLocation != BallLocation::BUNKER) {
                // ���� ���� �¿� ��ġ�� ������ ���� ���ݺ��� ũ�ٸ� (�����̸� ����ٸ�)
                if (abs(FinalSidewaysPosition) > CurrentHole.FairwayWidth / 2) {
                    ballLocation = BallLocation::ROUGH;
                    printf("���� �����̸� ��� ������ �������ϴ�.\n");
                }
            }
            //3. ������ ����(��Ŀ�� ���� �� �� �ƴ� ���)
            if (ballLocation == BallLocation::FAIRWAY) {
                printf("���� �����̿� �����ϰ� �����߽��ϴ�.\n");
            }

            // --- 4. �׸� ���� ���� ---
            if (RemainingDistance <= 20) {
                printf("���� �׸� ���� �����߽��ϴ�! ������ �����մϴ�.\n");

                // ���� �̴ϰ����� ȣ���ϰ�, ���� Ÿ���� �޾ƿɴϴ�.
                int putts = HandlePutting(RemainingDistance, CurrentHole.GreenDifficulty);

                // ���� �� Ÿ���� ���� Ÿ���� ���մϴ�. (��, ù ������ �̹� 1Ÿ�� �����Ƿ� -1)
                StrokeCount += (putts - 1);

                RemainingDistance = 0; // Ȧ�� ó��
            }

        }
        // --- Ȧ ���� ---
       // (���� ���� �������� ���� Ÿ���� Ȯ���ؾ� ��)
        printf("\n%dŸ�� Ȧ�ƿ�! (Par: %d)\n", StrokeCount, CurrentHole.Par);
        TotalScore += StrokeCount;

        if (StrokeCount <= CurrentHole.Par) {
            printf("Par ���̺� ����! �߰� ������ Ȯ���մϴ�...\n");
            if ((rand() % 100) < 40) { // 20% Ȯ����
                printf("Ư���� �������� �߰��߽��ϴ�!\n");
               
            }
            m_StoryManager.PlayPostHoleStory(i);
        }

        if (i < Course_Hole_Count - 1)
        {
            printf("\n--- ��� �Ͻðڽ��ϱ�? ---\n");
            printf("1. ���� Ȧ�� �����ϱ�\n");
            printf("2. ���� �޴��� ���ư��� (�Ʒ�/�޽�)\n");
            printf("--------------------------\n> ");
            int choice = 0;
            std::cin >> choice;

            if (choice == 2) {
                printf("��⸦ �ߴ��ϰ� ���� �޴��� ���ư��ϴ�...\n");
                break; // for ������ ��� Ż���մϴ�.
            }
        }
        // --- ��� ���� ---
        printf("\n--- ��� ���� ---\n");
        printf("9Ȧ �� Ÿ��: %d\n", TotalScore);
        m_Player.AddFatigue(60); // ��� �� �Ƿε� 60 ����

        // (���� ���� ���� �߰�)
        printf("��� ����� ���� ������ Ȯ���մϴ�...\n");

        // 1. �÷��̾��� ���� ��� ��� Ȯ�� (ù ��° Ŭ�� ����)
        Club* currentClub = m_Player.GetClubFromBag(0);
        Tier currentTier = currentClub->GetTier();

        // 2. ��ǥ Ÿ�� ���� (��: 9Ȧ ��ü Par �հ�)
        int targetScore = 0;
        for (int j = 0; j < Course_Hole_Count; ++j) {
            targetScore += m_Course[j].Par;
        }


        // 3. ��� ���� �� ���� ����
        if (TotalScore <= targetScore) {
            printf("�Ǹ��� �����Դϴ�! ��ǥ Ÿ��(%d) ���ϸ� ����߽��ϴ�!\n", targetScore);

            // ���� ��޿� ���� ���� ����� ��Ʈ�� ����
            if (currentTier == Tier::����) {
                printf("�������� [�Ϲ� Ŭ�� ��Ʈ]�� ȹ���߽��ϴ�!\n");
                m_Player.ClearInventory(); // ���� ��� ����
                for (const auto& ClubData : COMMON_SET_DATA) {
                    m_Player.AddItemToInventory(new Club(ClubData));
                }
            }
            else if (currentTier == Tier::�Ϲ�) {
                printf("�������� [��� Ŭ�� ��Ʈ]�� ȹ���߽��ϴ�!\n");
                m_Player.ClearInventory();
                for (const auto& ClubData : RARE_SET_DATA) {
                    m_Player.AddItemToInventory(new Club(ClubData));
                }
            }
            else if (currentTier == Tier::���) {
                printf("�������� [���� Ŭ�� ��Ʈ]�� ȹ���߽��ϴ�!\n");
                m_Player.ClearInventory();
                for (const auto& ClubData : LEGENDARY_SET_DATA) {
                    m_Player.AddItemToInventory(new Club(ClubData));
                }
            }
            else if (currentTier == Tier::����) {
                printf("�������� [��ȭ Ŭ�� ��Ʈ]�� ȹ���߽��ϴ�!\n");
                m_Player.ClearInventory();
                for (const auto& ClubData : MYTHIC_SET_DATA) {
                    m_Player.AddItemToInventory(new Club(ClubData));
                }
            }

            else {
                printf("�̹� �ְ��� ��� ������ �ֽ��ϴ�!\n");
            }

            printf("\n--- ȹ���� �� ��� Ȯ���մϴ� ---\n");
            m_Player.PrintInventory(); // �� �������� ���� �κ��丮�� �ٷ� ���!
        }
        else {
            printf("�ƽ����� ��ǥ Ÿ���� �Ѱ���ϴ�. ���� ��ȸ�� �������ּ���.\n");
        }
    }


}

void GameManager::DoTraining()
{
    if (m_Player.GetFatigue() >= 100) {
        printf("�Ƿε��� �ʹ� ���Ƽ� ��⿡ ������ �� �����ϴ�! �޽��� �ʿ��մϴ�.\n");
        return; // �Լ��� ��� ����
    }


    printf("\n� �Ʒ��� �Ͻðڽ��ϱ�? (�Ƿε� 20 �Ҹ�)\n");
    printf("1. �Ŀ� �Ʒ� (+2)\n");
    printf("2. ��Ȯ�� �Ʒ� (+2)\n");
    printf("3. ���� �Ʒ� (+2)\n");
    printf("> ");

    int choice = 0;
    std::cin >> choice;

  
    if (choice == 1) {
        m_Player.AddPower(2);
        printf("�Ŀ� �Ʒ����� �ɷ�ġ�� ����߽��ϴ�! (���� �Ŀ�: %d)\n", m_Player.GetPower());
    }
    else if (choice == 2) {
        m_Player.AddAccuracy(2);
        printf("��Ȯ�� �Ʒ����� �ɷ�ġ�� ����߽��ϴ�! (���� ��Ȯ��: %d)\n", m_Player.GetAccuracy());
    }
    else if (choice == 3) {
        m_Player.AddPutting(2);
        printf("���� �Ʒ����� �ɷ�ġ�� ����߽��ϴ�! (���� ����: %d)\n", m_Player.GetPutting());
    }
    else {
        printf("�߸��� �����Դϴ�. �Ʒ��� ����մϴ�.\n");
        return; // �Ʒ��� �� ������ �Ƿε��� ������ �� ��
    }
    m_Player.AddFatigue(20);
}

void GameManager::TakeRest()
{
    m_Player.RecoverAllFatigue();
    printf("\n����� �޽��� ���� �Ƿε��� ��� ȸ���Ǿ����ϴ�.\n");
    
}


// ���� ��ü�� �����ϰ� �����ϴ� ���� �Լ�
void GameManager::Run()
{
    
        //������ ���丮 �����ֱ�
        m_StoryManager.PrintOpeningStory();

        // 2. ���� ���� ���� ����
        while (true) {
            int choice = ShowMainMenu(); // ���� �޴��� �����ְ� ������ ����

            if (choice == 1) {
                DoTraining(); // �Ʒ� ����
            }
            else if (choice == 2) {
                PlayRound(); // ��� ����
            }
            else if (choice == 3) {
                TakeRest(); // �޽�
            }
            else if (choice == 4) {
                printf("������ �����մϴ�. �Ҿƹ����� ���� ���� ��ȸ��...\n");
                break; // while ������ �������� ���� ����
            }
            else {
                printf("�߸��� �Է��Դϴ�. 1~4 ������ ���ڸ� �Է����ּ���.\n");
            }
            printf("\n");
        }
        
    
}
int GameManager::HandlePutting(int RemainingDistance, int GreenDifficulty) {
    int PuttCount = 0; // �̹� Ȧ���� ������ Ƚ��

    // Ȧ���� ������ ������ �ݺ��մϴ�.
    while (RemainingDistance > 0) {
        PuttCount++;
        printf("\n--- ���� [%d��°] ---\n", PuttCount);
        printf("Ȧ���� ���� �Ÿ�: %dm\n", RemainingDistance);

        // --- 1. ���� �Է� �ޱ� (���� ����) ---
        printf("���� ���� (-10 ~ +10): ");
        int PlayerAim = 0;
        std::cin >> PlayerAim;

        printf("\n                  �Ŀ� ���̵�\n");
        printf("\n[  ����  |      ��Ʈ�� ���� (5~25)      |  ����  ]\n[<<<<<|=============|>>>>>]\n");
        printf("                     �Ŀ� �Է�\n ");
        std::string PowerInputString;
        std::cin >> PowerInputString;
        int PowerInputLength = PowerInputString.length();

        // --- 2. ���� ���� ---
        bool IsHoleIn = false;

        // 2-1. '����Ʈ ����' ���� (100% ����)
        // (���� �Ÿ��� ���� �Ϻ��� �Ŀ� ���̰� �޶����� ����. ��: 1m�� 1�� ����)
        int SweetSpotLength = 5 + RemainingDistance;
        if (PowerInputLength == SweetSpotLength) {
            printf("�Ϻ��� ����! �״�� Ȧ������ ���� ���ϴ�!\n");
            IsHoleIn = true;
        }
        else {
            // 2-2. '������' ���� (Ȯ���� ����)
            int SuccessRate = 100 - (GreenDifficulty * 15);
            if (SuccessRate < 5) SuccessRate = 5; // �ּ� ������ 5% ����

            printf("(���� Ȯ��: %d%%)\n", SuccessRate);

            if ((rand() % 100) < SuccessRate) {
                printf("���� ���ҳ׿�! ���� �ſ� �� ���ϴ�!\n");
                IsHoleIn = true;
            }
            else {
                printf("�̷�! �ƽ��ƽ��ϰ� Ȧ���� �񲸰��ϴ�.\n");
                // ���� ��, 1~2m ������ �Ÿ��� ����
                RemainingDistance = rand() % 2 + 1;
            }
        }

        // Ȧ�ο� �����ߴٸ� ���� ����
        if (IsHoleIn) {
            RemainingDistance = 0;
        }
    }
    return PuttCount; // ���� ���� Ÿ�� ��ȯ
}