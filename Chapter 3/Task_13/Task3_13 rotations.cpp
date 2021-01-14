#include <iostream>

extern void printBinary(const unsigned char val);

unsigned char rol(unsigned char val) {
	
	int highbit;
	
	if (val & 0x80) {
		
		highbit = 1;
	
	}else{
		
		highbit = 0;
	}
	
	std::cout << std::endl;
	std::cout << "High bit: " << highbit << std::endl;
	
	val <<= 1;
	std::cout << "Shifted number to right: ";
	printBinary(val);
	std::cout << std::endl;
	
	val |= highbit;
	std::cout << "The high bit is rotated to the bottom: ";
	return val;
}

unsigned char ror(unsigned char val) {
	
	int lowbit;
	
	if (val & 1) {

		lowbit = 1;
	
	}else{

		lowbit = 0;
	}
	
	std::cout << std::endl;
	std::cout << "Low bit: " << lowbit << std::endl;
	
	val >>= 1;
	std::cout << "The number is shifted by one position to the left: ";
	printBinary(val);
	std::cout << std::endl;
	
	val |= (lowbit << 7);
	std::cout << "The low bit is rotated to the top: ";
	return val;
}
