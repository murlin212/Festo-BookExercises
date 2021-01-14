#include <iostream>

void BooleanOps(){
	int i, j;

	std::cout << "Enter an integer: ";
	std::cin >> i;

	std::cout << "Enter another integer: ";
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