// Task_07.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
	ifstream f("TextForTask_07.txt");
	
    while (getline(f, s)){
       vector.push_back(s);
    }

    for (int i = 0; i < vector.size(); i++){
        cout << i << " line  -> " << vector[i];
        cin.get();
    }
}
