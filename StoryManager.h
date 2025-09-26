#pragma once
#include <string>

class StoryManager
{

private:
	// 9�� Ȧ�� ����/���� �̾߱⸦ ������ �迭
	std::string m_PreHoleStories[9];
	std::string m_PostHoleStories[9];

	// ���丮 �迭�� �ʱ�ȭ�ϴ� ���� �Լ�
	void InitializeStories();

public:

	// ������: StoryManager�� ������� �� ���丮�� ��� �غ��մϴ�.
	StoryManager();

	void PlayPreHoleStory(int holeIndex);
	void PlayPostHoleStory(int holeIndex);


	void PrintOpeningStory(); // ������ ���丮�� ���
	void PrintEndingStory(); // ������ ���丮�� ���


};