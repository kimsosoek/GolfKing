#pragma once
#include <string> // std::string�� ����ϱ� ���� ����


struct Hole
{
	std::string name; // Ȧ�� �̸�
	int Distance; // Ȧ�� �Ÿ� (���� ����)
	int Par; // Ȧ�� �� (���� Ÿ��)
	int ForwardWind; // �ٶ� �ӵ� (�յ� ��ǳ�� ������ km/s ����)
	int SideWind; // �ٶ� ���� (����� ������ ������ ����)
	int GreenDifficulty;// �׸� ���̵�


};