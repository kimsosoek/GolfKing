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
	Club(const std::string& Name, int Distance, int Accuracy, ClubTier Tier)
		: Item(Name), BaseDistance(Distance), AccuracyModifier(Accuracy), Tier(Tier)
	{
		// 생성자 본문 (필요시 추가 초기화 작업 가능)
	}
	// 클럽이름
	std::string Name; 

	// 기본파워
	int BaseDistance; 

	// 정확도
	int AccuracyModifier;

	// 클럽등급
	ClubTier Tier; 

};