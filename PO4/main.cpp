#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

#include "stock.h"
#include "coach.h"
#include "locomotive.h"
#include "train.h"

void print(Train train);

int main() {

	int choice = -1;

	Train train;
	Locomotive loco;
	Stock stock;
	Coach coach;

	/*
	std::cout << "power is " << loco.power() << std::endl;
	std::cout << "weight of stock is " << stock.weight() << std::endl;
	std::cout << "weight of coach is " << coach.weight() << std::endl;
	std::cout << "weight of loco is " << loco.weight() << std::endl;
	std::cout << "power of loco is " << loco.power() << std::endl;
	*/

	//START OF MENU SECTION
	

	while (choice != 1 || choice != 2 || choice != 9 || choice != 0 ) {
		print(train);
		std::cin >> choice;
		if (choice == 1) {
			train.add_locomotive(loco);
			std::cout << "size of _locomotives is "  << train.size_loco() << std::endl;
		}
		else if (choice == 2) {
			train.add_coach(coach);
			std::cout << "size of _coaches is " << train.size_coach() << std::endl;
		}
		else if (choice == 9) {
			train.clear_train();
		}
		else if (choice == 0) {
			std::cout << "the program will now exit." << std::endl;
			return 0;
		}
		else {
		std::cout << "unreckognized input, please try again." << std::endl;
		}
		choice = -1;
	};

};

void print(Train train) {

	std::cout << "\t=========================" << std::endl;
	std::cout << "\t   The CSE1325 Express" << std::endl;
	std::cout << "\t=========================" << std::endl;
	std::cout << std::endl;

	//code to print train goes here
	//std::cout << train.to_art() << std::endl; //UNCOMMENT THIS LINE ONCE FIXED
	//code to print train goes here

	std::cout << std::endl;
	std::cout << "Minutes |\t1\t  5\t    15\t      30\t60" << std::endl;
	std::cout << "--------|---------|---------|---------|---------|---------|" << std::endl;

	std::cout << std::setprecision(4) << "Speed/s |" << std::setw(9) << train.speed(1) << "|" << std::setw(9) << train.speed(5) << "|" << std::setw(9) << train.speed(15) << "|" << std::setw(9) << train.speed(30) << "|" << std::setw(9) << train.speed(60) << "|" << std::setw(9) << std::endl;

	std::cout << std::endl;
	std::cout << "1 - Add a locomotive" << std::endl;
	std::cout << "2 - Add an empty coach" << std::endl;
	std::cout << "9 - Clear the train" << std::endl;
	std::cout << "0 - Exit" << std::endl;
	std::cout << std::endl;
	std::cout << "Command?" << std::endl;
	std::cout << std::endl;

};






