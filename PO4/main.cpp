#include <iostream>
#include <string>

#include "stock.h"
#include "coach.h"
#include "locomotive.h"
#include "train.h"

void print();

int main() {

	int choice = -1;

	Train train;
	Locomotive loco;
	Stock stock;
	Coach coach;

	train.add_locomotive(loco);

	/*
	std::cout << "power is " << loco.power() << std::endl;
	std::cout << "weight of stock is " << stock.weight() << std::endl;
	std::cout << "weight of coach is " << coach.weight() << std::endl;
	std::cout << "weight of loco is " << loco.weight() << std::endl;
	std::cout << "power of loco is " << loco.power() << std::endl;
	*/

	//START OF MENU SECTION
	

	while (choice != 1 || choice != 2 || choice != 9 || choice != 0 ) {
		print();
		std::cin >> choice;
		if (choice == 1) {
			//DO THIS
		}
		else if (choice == 2) {
			//DO THIS
		}
		else if (choice == 9) {
			//DO THIS
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

void print() {

std::cout << "\t=========================" << std::endl;
std::cout << "\t   The CSE1325 Express" << std::endl;
std::cout << "\t=========================" << std::endl;
std::cout << std::endl;

//code to print train goes here
//code to print train goes here
//code to print train goes here

std::cout << std::endl;
std::cout << "Minutes |\t1\t  5\t    15\t      30\t60" << std::endl;
std::cout << "--------|---------|---------|---------|---------|---------|" << std::endl;
std::cout << "Speed/s |---------|---------|---------|---------|---------|" << std::endl;
std::cout << std::endl;
std::cout << "1 - Add a locomotive" << std::endl;
std::cout << "2 - Add an empty coach" << std::endl;
std::cout << "9 - Clear the train" << std::endl;
std::cout << "0 - Exit" << std::endl;
std::cout << std::endl;
std::cout << "Command?" << std::endl;
std::cout << std::endl;

};






