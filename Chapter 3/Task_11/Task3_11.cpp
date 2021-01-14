// Task3_11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	double i, j;
	
	std::cout << "Enter a double number: ";
	std::cin >> i;

	std::cout << "Enter another double number: ";
	std::cin >> j;

	std::cout << "i > j is " << (i > j) << std::endl;
	std::cout << "i < j is " << (i < j) << std::endl;
	std::cout << "i >= j is " << (i >= j) << std::endl;
	std::cout << "i <= j is " << (i <= j) << std::endl;
	std::cout << "i == j is " << (i == j) << std::endl;
	std::cout << "i != j is " << (i != j) << std::endl;
	std::cout << "i && j is " << (i && j) << std::endl;
	std::cout << "i || j is " << (i || j) << std::endl;
	std::cout << " (i < 10) && (j < 10) is " << ((i < 10) && (j < 10)) << std::endl;
}
