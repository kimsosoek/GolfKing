#pragma once
#include <string> // std::string�� ����ϱ� ���� ����


struct Hole
{
	//Ȧ�� �⺻ ����
	std::string Name; // Ȧ�� �̸�

	int Distance; // Ȧ�� �Ÿ� (���� ����)

	int Par; // Ȧ�� �� (���� Ÿ�� dP; 5,4,3)


	// Ȧ�� ȯ�� ���
	int ForwardWind; // �ٶ� �ӵ� (�յ� ��ǳ�� ������ km/s ����)

	int SideWind; // �ٶ� ���� (����� ������ ������ ����)

	int GreenDifficulty;// ���� ���̵�



	// Ȧ�� Ư����
	int fairwayWidth;        // �������� �¿� �� (meter). �� ���� ����� ����.

	bool hasBunker;          // �� Ȧ�� ��Ŀ�� �ִ��� ����

	int bunkerDistance;      // Ƽ�� �������κ��� ��Ŀ������ �Ÿ�

	
};

