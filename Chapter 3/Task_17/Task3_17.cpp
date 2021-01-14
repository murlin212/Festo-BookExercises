// Task3_17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

union  Packed{

    char i;
    short j;
    int k;
    long l;
    float f;
    double d;

};

int main()
{
    std::cout << "sizeof(Packed) = " << sizeof(Packed) << std::endl;
    
   
    Packed x;
    
    x.l = 51;
   
    std::cout << "Printing via i: " << x.i << std::endl;
    
    x.f = 7.77;
    
    std::cout << "Printing via i: " << x.i << std::endl;
}
