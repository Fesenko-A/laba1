#pragma once

struct Ipart {

	float first, second;
	Ipart Init(int f, int s);	//	����������� ������
	Ipart Read();	//	�������� � ���������
	int ipart();		//	�������� ���� ������� ����� first / second
	void Display();	//	���������
};