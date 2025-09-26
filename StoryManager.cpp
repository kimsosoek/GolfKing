#include "StoryManager.h"
#include <iostream>
#include <cstdio>


StoryManager::StoryManager()
{  // 객체가 생성될 때, 모든 스토리 내용을 미리 준비합니다.
    InitializeStories();
}

void StoryManager::PrintOpeningStory()
{

    printf("당신의 할아버지는 마을 최고의 골퍼였습니다.\n");
    printf("그에게는 단 하나의 못다 이룬 꿈이 있었으니... 바로 전설의 '별빛 골프 코스'에서 우승하는 것이었죠.\n");

    printf("\n(계속하려면 Enter 키를 누르세요)");
    std::cin.ignore(); // 이전 입력 버퍼를 비워줄 수 있습니다.
    std::cin.get();
    printf("\n");

    printf("세월이 흘러, 당신은 창고에서 먼지 쌓인 할아버지의 낡은 골프 가방을 발견합니다...\n");
    // ...이후 스토리 계속...

}

void StoryManager::InitializeStories() 
{
    // 1번 홀 스토리
    m_PreHoleStories[0] = "할아버지의 낡은 메모에는 이렇게 적혀있다. '첫 홀에서는 힘을 빼고 바람의 흐름을 느껴보렴...'";
    m_PostHoleStories[0] = "바람을 읽는 법을 조금은 알 것 같다. 할아버지도 이런 기분이었을까?";

    // 2번 홀 스토리
    m_PreHoleStories[1] = "메모의 다음 장에는 계곡 그림과 함께 '욕심은 금물'이라고만 쓰여있다. 신중하게 가야겠다.";
    m_PostHoleStories[1] = "아슬아슬했다. 안전하게 플레이하는 것이 중요하구나.";

    // ... 이런 식으로 9번 홀까지의 모든 스토리를 여기에 중앙 관리합니다 ...
    m_PreHoleStories[8] = "마지막 홀. 할아버지의 꿈이 눈앞에 있다. 모든 것을 쏟아붓자!";
    m_PostHoleStories[8] = "드디어... 해냈어! 할아버지, 보고 계세요?";
}

// 특정 홀의 사전 이야기 출력
void StoryManager::PlayPreHoleStory(int holeIndex) 
{
    printf("\n%s\n", m_PreHoleStories[holeIndex].c_str());
}

// 특정 홀의 사후 이야기 출력
void StoryManager::PlayPostHoleStory(int holeIndex)
{
    printf("\n%s\n", m_PostHoleStories[holeIndex].c_str());
}


void StoryManager::PrintEndingStory()
{


}


