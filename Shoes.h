#pragma once
#include"Item.h"

//Shose 는 Item의 한 종류이다. 상속받은 관계

class Shoes : public Item
{

public:

	//생성자
	Shoes(const std::string& Name, Tier Tier, int AccuracyBonus, int FatigueReduction);

	//슈즈 데이터
	int AccuracyBonus;  //샷의 좌우 편차를 줄여주는 값
	int FatigueReduction;  // 경기 종료 후 피로도 감소
	 
};

