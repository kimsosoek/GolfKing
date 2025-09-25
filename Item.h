#pragma once
#include <string> // std::string�� ����ϱ� ���� ����


enum class Tier // Ŭ�����
{
	����,
	����,
	�Ϲ�,
	���,
	����,
	��ȭ
};

class Item
{
public:

		// ������	
		Item(const std::string& Name, Tier tier);

		// ���� �Ҹ���
		virtual ~Item() = default; 

		// ������ �̸��� ��ȯ
		std::string GetName() const;
		Tier GetTier() const;

protected:
		// ������ �̸� �ڽ� Ŭ�������� ���� ����	
	   std::string m_Name; 
	   Tier m_Tier;
	
};

