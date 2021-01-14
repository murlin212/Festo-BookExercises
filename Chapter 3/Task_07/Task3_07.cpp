// Task3_07.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void pointing(string* str) {

    *str = "idk what to type here";

}


void adressRef(string &str) {

    str = "idk what to type here 2";

}

int main()
{
   
    string str;

    pointing(&str);
    
    cout << str << endl;
    adressRef(str);
    
    cout << str << endl;

}
