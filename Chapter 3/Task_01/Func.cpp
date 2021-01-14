#include <iostream>
#include "Func.h"

 void printName(std::string name) {
  
	 std::cout << "function: " << "void printName(std::string name)" << std::endl;
	 std::cout << "print: " << name << std::endl;
 }

 char Char(char a) {

	 std::cout << "function: " << "char Char(char a)" << std::endl;
	 std::cout << "print: " << a << std::endl;
	 
	 return a;
 }

 int intNumber(int num) {

	 std::cout << "function: " << "int intNumber(int num)" << std::endl;
	 std::cout << "print: " << num << std::endl;

	 return num;
 }

 float floatNumber(float fnum) {

     std::cout << "function: " << "float floatNumber(float fnum)" << std::endl;
	 std::cout << "print: " << fnum << std::endl;

	 return fnum;
 }
