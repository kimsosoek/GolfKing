#include "StoryManager.h"
#include <iostream>
#include <cstdio>


StoryManager::StoryManager()
{  // ��ü�� ������ ��, ��� ���丮 ������ �̸� �غ��մϴ�.
    InitializeStories();
}

void StoryManager::PrintOpeningStory()
{

    printf("����� �Ҿƹ����� ���� �ְ��� ���ۿ����ϴ�.\n");
    printf("�׿��Դ� �� �ϳ��� ���� �̷� ���� �־�����... �ٷ� ������ '���� ���� �ڽ�'���� ����ϴ� ���̾���.\n");

    printf("\n(����Ϸ��� Enter Ű�� ��������)");
    std::cin.ignore(); // ���� �Է� ���۸� ����� �� �ֽ��ϴ�.
    std::cin.get();
    printf("\n");

    printf("������ �귯, ����� â���� ���� ���� �Ҿƹ����� ���� ���� ������ �߰��մϴ�...\n");
    // ...���� ���丮 ���...

}

void StoryManager::InitializeStories() 
{
    // 1�� Ȧ ���丮
    m_PreHoleStories[0] = "�Ҿƹ����� ���� �޸𿡴� �̷��� �����ִ�. 'ù Ȧ������ ���� ���� �ٶ��� �帧�� ��������...'";
    m_PostHoleStories[0] = "�ٶ��� �д� ���� ������ �� �� ����. �Ҿƹ����� �̷� ����̾�����?";

    // 2�� Ȧ ���丮
    m_PreHoleStories[1] = "�޸��� ���� �忡�� ��� �׸��� �Բ� '����� �ݹ�'�̶�� �����ִ�. �����ϰ� ���߰ڴ�.";
    m_PostHoleStories[1] = "�ƽ��ƽ��ߴ�. �����ϰ� �÷����ϴ� ���� �߿��ϱ���.";

    // ... �̷� ������ 9�� Ȧ������ ��� ���丮�� ���⿡ �߾� �����մϴ� ...
    m_PreHoleStories[8] = "������ Ȧ. �Ҿƹ����� ���� ���տ� �ִ�. ��� ���� ��ƺ���!";
    m_PostHoleStories[8] = "����... �س¾�! �Ҿƹ���, ���� �輼��?";
}

// Ư�� Ȧ�� ���� �̾߱� ���
void StoryManager::PlayPreHoleStory(int holeIndex) 
{
    printf("\n%s\n", m_PreHoleStories[holeIndex].c_str());
}

// Ư�� Ȧ�� ���� �̾߱� ���
void StoryManager::PlayPostHoleStory(int holeIndex)
{
    printf("\n%s\n", m_PostHoleStories[holeIndex].c_str());
}


void StoryManager::PrintEndingStory()
{


}


