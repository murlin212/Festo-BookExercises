// Task03_06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

#define PRINTNUMS(EXP) \
cout << #EXP << ":" << (long)&EXP << endl;   \

int main()
{
   
	char char1, char2, char3;
	int int1, int2, int3;
	short int sint1, sint2, sint3;
	long int lint1, lint2, lint3;
	float fl1, fl2, fl3;
	double doub1, doub2, doub3;
	long double ldoub1, ldoub2, ldoub3;


	PRINTNUMS(char1);
	PRINTNUMS(char2);
	PRINTNUMS(char3);
	
	cout << endl;
	PRINTNUMS(int1);
	PRINTNUMS(int2);
	PRINTNUMS(int3);

	cout << endl;
	PRINTNUMS(sint1);
	PRINTNUMS(sint2);
	PRINTNUMS(sint3);

	cout << endl;
	PRINTNUMS(lint1);
	PRINTNUMS(lint2);
	PRINTNUMS(lint3);

	cout << endl;
	PRINTNUMS(fl1);
	PRINTNUMS(fl2);
	PRINTNUMS(fl3);

	cout << endl;
	PRINTNUMS(doub1);
	PRINTNUMS(doub2);
	PRINTNUMS(doub3);

	cout << endl;
	PRINTNUMS(ldoub1);
	PRINTNUMS(ldoub2);
	PRINTNUMS(ldoub3);

}
