#pragma once
#include "Club.h"
#include "Shoes.h"
#include "Potion.h"

// ======================================================================
// ## 클럽 세트 데이터 ##
// ======================================================================

// --- 낡은 세트 (WORN) - 시작 장비 ---
const Club WORN_SET_DATA[] = {
    Club("할아버지의 낡은 드라이버", Tier::낡은, 180, -5),
    Club("할아버지의 낡은 아이언", Tier::낡은, 120, -5),
    Club("할아버지의 낡은 웨지", Tier::낡은, 70, -5),
    Club("할아버지의 낡은 퍼터", Tier::낡은, 0, -10)
};

// --- 일반 세트 (COMMON) - 첫 번째 보상 ---
const Club COMMON_SET_DATA[] = {
    Club("일반 드라이버", Tier::일반, 200, 0),
    Club("일반 아이언", Tier::일반, 130, 0),
    Club("일반 웨지", Tier::일반, 80, 0),
    Club("일반 퍼터", Tier::일반, 0, 0)
};

// --- 희귀 세트 (RARE) - 두 번째 보상 ---
const Club RARE_SET_DATA[] = {
    Club("희귀 드라이버", Tier::희귀, 220, 5),
    Club("희귀 아이언", Tier::희귀, 140, 5),
    Club("희귀 웨지", Tier::희귀, 90, 5),
    Club("희귀 퍼터", Tier::희귀, 0, 5)
};

// --- 전설 세트 (LEGENDARY) - 세 번째 보상 ---
const Club LEGENDARY_SET_DATA[] = {
    Club("전설의 드라이버", Tier::전설, 240, 10),
    Club("전설의 아이언", Tier::전설, 150, 10),
    Club("전설의 웨지", Tier::전설, 100, 10),
    Club("전설의 퍼터", Tier::전설, 0, 10)
};

// --- 신화 세트 (MYTHIC) - 최종 보상 ---
const Club MYTHIC_SET_DATA[] = {
    Club("신화의 드라이버 '갤럭시아'", Tier::신화, 260, 15),
    Club("신화의 아이언 '이그니스'", Tier::신화, 160, 15),
    Club("신화의 웨지 '네뷸라'", Tier::신화, 110, 15),
    Club("신화의 퍼터 '솔라리스'", Tier::신화, 0, 20)
};

// ======================================================================
// ## 개별 아이템 데이터 (신발, 포션) ##
// ======================================================================

// --- 신발 ---
const Shoes BASIC_SHOES("기본 골프화", Tier::일반, 0, 0);
const Shoes PRO_SHOES("프로 골프화", Tier::희귀, 5, 10);

// --- 포션 ---
const Potion POWER_DRINK("파워 드링크", PotionEffect::Power_Boost);
const Potion ACCURACY_JELLY("집중력 젤리",  PotionEffect::Accuracy_Boost);