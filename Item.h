#pragma once
#include <string> // std::string을 사용하기 위해 포함


class Item
{
public:

		// 생성자	
		Item(const std::string& Name); 

		// 가상 소멸자
		virtual ~Item() = default; 

		// 아이템 이름을 반환
		std::string GetName() const;


protected:
		// 아이템 이름 자식 클래스에서 접근 가능	
	   std::string m_Name; 
	
};

