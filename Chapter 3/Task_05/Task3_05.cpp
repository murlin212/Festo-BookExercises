// Task3_05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int x = 10, y = 7, z = 8, sum = 0;
   
	sum = x + y - 2 / 2 + z;
	
	std::cout << sum << std::endl;
	
	sum = x + (y - 2) / (2 + z);
	
	std::cout << sum;
}
