// Task_06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	vector <string> vector;
	string s;
	ifstream f("TextForTask_06.txt");

	while (getline(f, s)) {
	   vector.push_back(s);
	}
	   
	  s = "";

	for (int i = 0; i < vector.size(); i++) {
		s += vector.at(i) + " ";
	}

	  cout << s;
}
