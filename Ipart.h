#pragma once

struct Ipart {

	float first, second;
	Ipart Init(int f, int s);	//	Ініціалізація змінних
	Ipart Read();	//	Введення з клавіатури
	int ipart();		//	Виділення цілої частини дробу first / second
	void Display();	//	Виведення
};