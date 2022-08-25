#pragma once

struct Ipart {

	float first, second;
	Ipart Init(int f, int s);	//	Ініціалізація змінних
	Ipart Read();	//	Введення з клавіатури
	void Display();	//	Розрахунок та виведення
};