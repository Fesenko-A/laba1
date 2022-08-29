/* Copyright(C) 2022, Anton Fesenko 202-TH №23
Завдання 3
Поле first — ціле додатньє число, чисельник; поле second — ціле додатнє
число, знаменник. Реалізувати метод ipart() — виділення цілої частини
дробу first / second. Метод повинен перевіряти нерівність знаменника нулю.*/

#include <iostream>
#include "Ipart.h"
using namespace std;

int main()
{
    Ipart test;
    test = test.Read(); //  Введення з клавіатури
    test.Display(); //	Розрахунок та виведення
}
