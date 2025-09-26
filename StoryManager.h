#pragma once
#include <string>

class StoryManager
{

private:
	// 9개 홀의 사전/사후 이야기를 저장할 배열
	std::string m_PreHoleStories[9];
	std::string m_PostHoleStories[9];

	// 스토리 배열을 초기화하는 내부 함수
	void InitializeStories();

public:

	// 생성자: StoryManager가 만들어질 때 스토리를 모두 준비합니다.
	StoryManager();

	void PlayPreHoleStory(int holeIndex);
	void PlayPostHoleStory(int holeIndex);


	void PrintOpeningStory(); // 오프닝 스토리를 출력
	void PrintEndingStory(); // 오프닝 스토리를 출력


};