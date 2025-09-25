#pragma once
#include<string>
#include "Item.h"





	class Club : public Item
	{
public:

	// 생성자
	Club(const std::string& name, Tier tier, int distance, int accuracy);
	

	// 기본파워
	int BaseDistance; 

	// 정확도
	int AccuracyModifier;

	
};