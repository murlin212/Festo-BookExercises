// Task3_16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

enum Colors {

    Black,
    Brown,
    DarkGreen,
    Red,
    Blue,
    Orange,
    Var
};

int main()
{
   
    std::string arrayColorNames[Colors::Var] = { "Black", "Brown", "DarkGreen", "Red", "Blue", "Orange" };
    Colors arrayColors[Colors::Var] = { Black, Brown, DarkGreen, Red, Blue, Orange };

    for (int i = 0; i < Colors::Var; i++) {

        std::cout << arrayColorNames[i] << " - -> " << arrayColors[i] << std::endl;
    }
}
