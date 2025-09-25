#include "Club.h"


//Club의 생성자 구현
Club::Club(const std::string& Name, int Distance, int Accuracy, ClubTier Tier)// 1. 받은 정보 중 'name'은 부모인 Item의 생성자에게 넘겨줍니다.
	: Item(Name)
{
	// 멤버변수 초기화
	this->BaseDistance = Distance;
	this->AccuracyModifier = Accuracy;
	this->Tier = Tier;
}
