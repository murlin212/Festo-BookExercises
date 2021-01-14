// Task3_09.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void func() {
    int i = 0;
    std::cout << "i = " << ++i << std::endl;
}

int main()
{
    for (int x = 0; x < 10; x++)
        func();
}

// Ако променливата i е статична, отговорът ще бъде следният: i = 1 i = 2  и тн. до 10, но ако не е статична ще се отпечата 10 пъти i = 1. Това се дължи на  факта,
// че се създава наново при изпълнение на функцията (защото не е статична).

