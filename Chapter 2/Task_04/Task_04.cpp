// Task_04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string s = "";
    ifstream f("TextForTask_04.txt");
    int wordCount = 0;
    
    while (f >> s){
        if (s == "ok"){
        
         wordCount++;
        }
    }

    cout << "The word OK is found " << wordCount << " times" << endl;

}
