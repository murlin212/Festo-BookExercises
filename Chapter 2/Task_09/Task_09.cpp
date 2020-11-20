// Task_09.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <float> vector1;
    vector <float> vector2;
    vector <float> vector3;

    for (int i = 1; i <= 25; i++){
        vector1.push_back(i * 2.05);
        vector2.push_back(i * 2.59);
        vector3.push_back(vector1[i] + vector2[i]);
    }

    for (int i = 0; i < vector1.size(); i++){
        cout << vector1[i] << "|";
    }
        cout << "\n";
    for (int i = 0; i < vector2.size(); i++){
        cout << vector2[i] << "|";
    }
        cout << "\n";
    for (int i = 0; i < vector3.size(); i++){
        cout << vector3[i] << "|";
    }


    //programata ne iska da trugne, pishe "vector subscript out of range" i prosto ne mi dava da go runna, nadqvam se pri teb da stane 
}
