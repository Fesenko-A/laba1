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
	cout << "Input the 1st num: ";
	cin >> tmp.first;
	cout << "Input the 2nd num: ";
	cin >> tmp.second;
	return tmp;
}

void Ipart::Display()
{
	if (second != 0)
		cout << "The result is " << round(first / second) << endl;
	else
		cout << "Zero exception" << endl;
}

