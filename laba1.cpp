// Copyright (C) 2022, Anton Fesenko

#include <iostream>
#include "Ipart.h"
using namespace std;

int main()
{
    Ipart test;
    test = test.Read(); //  Введення з клавіатури
    test.Display(); //	Розрахунок та виведення
}
