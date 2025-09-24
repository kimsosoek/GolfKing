#pragma once
#include <string> // std::string�� ����ϱ� ���� ����


class Item
{
public:

		// ������	
		Item(const std::string& name); 

		// ���� �Ҹ���
		virtual ~Item() = default; 

		// ������ �̸��� ��ȯ
		std::string GetName() const;


protected:


		// ������ �̸� �ڽ� Ŭ�������� ���� ����	
	   std::string m_name; 
	


};

