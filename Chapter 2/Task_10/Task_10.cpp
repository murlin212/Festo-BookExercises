// Task_10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <float> vector;

    for (int i = 1; i <= 25; i++){
        vector.push_back(i * 2.05);
    }
    cout << "Before the multiplication: " << endl;
    for (int i = 0; i < vector.size(); i++){
        cout << vector[i] << "|";
    }
    cout << "\n";
    cout << "After the multiplication: " << endl;
    for (int i = 0; i < vector.size(); i++){
        vector[i] *= vector[i];
        cout << vector[i] << "|";
    }
    cout << endl;

}
