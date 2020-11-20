// Task_03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;

int main()
{ 
    string s;
    ifstream f("TextForTask_03.txt");
    int wordCount = 0;
    
    while (f >> s){
     wordCount++;
    }

    cout << "The total of separated words in the file is: " << wordCount << endl;
}
