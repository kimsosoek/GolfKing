#include "Club.h"
#include"Item.h"


//Club의 생성자 구현
Club::Club(const std::string& Name, Tier Tier, int Distance, int Accuracy) // 1. 받은 정보 중 'name'은 부모인 Item의 생성자에게 넘겨줍니다.
	: Item(Name, Tier)
{
	// 멤버변수 초기화
	this->BaseDistance = Distance;
	this->AccuracyModifier = Accuracy;
}
