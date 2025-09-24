#pragma once
#include <string> // std::string을 사용하기 위해 포함


struct Hole
{
	std::string name; // 홀의 이름
	int Distance; // 홀의 거리 (미터 단위)
	int Par; // 홀의 파 (기준 타수)
	int ForwardWind; // 바람 속도 (앞뒤 역풍은 음수로 km/s 단위)
	int SideWind; // 바람 방향 (양수는 오른쪽 음수는 왼쪽)
	int GreenDifficulty;// 그린 난이도


};