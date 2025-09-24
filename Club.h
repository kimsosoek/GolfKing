#pragma once
#include<string>
#include "Item.h"



	enum class ClubTier // 클럽등급
	{
		낡은,
		일반,
		희귀,
		전설,
		신화
	};

	class Club : public Item
	{
public:

	// 생성자
	Club(const std::string& name, int baseDistance, int accuracy, ClubTier tier)
		: Item(name), baseDistance(baseDistance), accuracy(accuracy), tier(tier)
	{
		// 생성자 본문 (필요시 추가 초기화 작업 가능)
	}
	// 클럽이름
	std::string name; 

	// 기본파워
	int baseDistance; 

	// 정확도
	int accuracy; 

	// 클럽등급
	ClubTier tier; 

};