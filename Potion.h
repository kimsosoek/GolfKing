#pragma once
#include"Item.h"

	enum class PotionEffect
	{
		Power_Boost,     //파워 일시 상승
		Accuracy_Boost,  // 정확도 일시 상승
		Fatigue_Boost    // 피로도 회복
	};

class Potion : public Item
{
public:
	// 생성자: Potion을 만들 때 필요한 모든 정보를 받습니다.

	Potion(const std::string& Name, PotionEffect Effect);

	//포션의 효과를 알려주는 함수
	PotionEffect GetEffect()const;

private:
	//포션만의 고유 데이터
	PotionEffect m_Effect;
};