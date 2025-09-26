#pragma once
#include <string> // std::string을 사용하기 위해 포함


struct Hole
{
	//홀의 기본 정보
	std::string Name; // 홀의 이름

	int Distance; // 홀의 거리 (미터 단위)

	int Par; // 홀의 파 (기준 타수 dP; 5,4,3)


	// 홀의 환경 요소
	int ForwardWind; // 바람 속도 (앞뒤 역풍은 음수로 km/s 단위)

	int SideWind; // 바람 방향 (양수는 오른쪽 음수는 왼쪽)

	int GreenDifficulty;// 퍼팅 난이도



	// 홀의 특수성

	int FairwayWidth;        // 페어웨이의 좌우 폭 (meter). 이 폭을 벗어나면 러프.

	bool HasBunker;          // 이 홀에 벙커가 있는지 여부

	int BunkerDistance;      // 티샷 지점으로부터 벙커까지의 거리

	int BunkerRange;   //  벙커의 범위 ( 길이만 포함 그 범윟안에 들어갈 경우 확률적으로 벙커에 빠지게 됨)

	int BunkerChance;   // 해당 구간에 공이 떨어졌을 때 벙커에 빠질 기본 확률
};

