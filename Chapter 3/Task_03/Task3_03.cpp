// Task3_03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
   
	std::string keyword;
	int choice = 0;
	bool var = false;

	while (true) {

		std::cout << "Which character do you want to play?" << std::endl;
	    std::cout << "1.Viper" << std::endl;
		std::cout << "2.Cypher" << std::endl;
		std::cout << "3.Skye" << std::endl;

		std::cout << "Enter your choice: " << std::endl;
		std::cin >> keyword;

		if (keyword == "Viper") {
			
			choice = 1;
		}else if (keyword == "Cypher") {

			choice = 2;
		}else if (keyword == "Skye") {

			choice = 3;
		}else {

			break;
		}
		
		switch (choice) {

			case 1: std::cout << "You chose to play Viper! Get ready, the match is about to begin!" << std::endl; break;
		   
			case 2: std::cout << "You chose to play Cypher! Get ready, the match is about to begin!" << std::endl; break;

			case 3: std::cout << "You chose to play Skye! Get ready, the match is about to begin!" << std::endl; break;

			default: std::cout << "Invalid selection of a character! The lobby disconected you due to inactivity, please queue up for another game." << std::endl;
		}
	}
}
