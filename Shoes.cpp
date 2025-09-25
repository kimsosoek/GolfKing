#include "Shoes.h"


// 1. 받은 정보 중 'name'은 부모인 Item의 생성자에게 전달합니다.
Shoes::Shoes(const std::string& Name, int AccuracyBonus, int FatigueReduction) : Item(Name)
{

	//나머지 정보들은 자기 자신의 멤버 변수를 초기화하는 데 사용합니다.
	this->AccuracyBonus = AccuracyBonus;
	this->FatigueReduction = FatigueReduction;

}
