// Task_05.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
	ifstream f("TextForTask_05.txt");
	
	while (getline(f, s)){
      vector.push_back(s);
	}

	for (int i = vector.size() - 1; i >= 0; i--){
	   cout << vector[i] << endl;
	}

}
