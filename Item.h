#pragma once
#include <string> // std::string을 사용하기 위해 포함


enum class Tier // 클럽등급
{
	없음,
	낡은,
	일반,
	희귀,
	전설,
	신화
};

class Item
{
public:

		// 생성자	
		Item(const std::string& Name, Tier tier);

		// 가상 소멸자
		virtual ~Item() = default; 

		// 아이템 이름을 반환
		std::string GetName() const;
		Tier GetTier() const;

protected:
		// 아이템 이름 자식 클래스에서 접근 가능	
	   std::string m_Name; 
	   Tier m_Tier;
	
};

