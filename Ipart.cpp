#include "Ipart.h"
#include <iostream>
using namespace std;

Ipart Ipart::Init(int f, int s)
{
	Ipart tmp;
	tmp.first = f;
	tmp.second = s;
	return tmp;
}

Ipart Ipart::Read()
{
	Ipart tmp;
	cout << "Enter the 1st num: ";
	cin >> tmp.first;
	cout << "Enter the 2nd num: ";
	cin >> tmp.second;
	return tmp;
}

int Ipart::ipart()
{
	if (second != 0) {	//	Перевірка ділення на 0
		cout << "The result is " << round(first / second) << endl;
		return round(first / second);
	}
	else {
		cout << "Zero exception" << endl;
		return 0;
	}
}

void Ipart::Display()
{
	ipart();
}

