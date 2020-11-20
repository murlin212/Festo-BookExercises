// Task_02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    double circleRadius, circleArea;
    
    cout << "Input a value for  the circle of the radius: " << endl;
     cin >> circleRadius;
    
    circleArea = (circleRadius * circleRadius) * 3.14;
    cout << "The area of the circle is: " << circleArea;
}
