// Task3_02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    
    const int a = 20;
    bool test;

    for(int i = 2; i <= a; i++){
    
        test = true;

        for (int j = 2; j <= i / 2; j++) {
            
            if (i % 2 == 0) {

               test = false;
               
               break;
            }

        }
         
        for (int j = 2; j <= i / 3; j++) {

            if (i % 3 == 0) {

                test = false;

                break;
            }

        }

        if (test) {
            
            std::cout << i << "|";
        }

    }

}
