// Task3_15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


typedef struct {
   
    std::string string1;
    std::string string2;
    int num;

} Structure;

int main()
{
    
    Structure structure;
    structure.string1 = "ok";
    structure.string2 = "ok2";
    structure.num = 7;

    std::cout << structure.string1 << std::endl;
    std::cout << structure.string2 << std::endl;
    std::cout << structure.num << std::endl;

    Structure* pstructure = &structure;
    pstructure->string1 = ":)";
    pstructure->string2 = ":P";
    pstructure->num = 8;
    
    std::cout << pstructure->string1 << std::endl;
    std::cout << pstructure->string2 << std::endl;
    std::cout << pstructure->num << std::endl;
    
}
