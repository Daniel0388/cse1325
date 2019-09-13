#include <iostream>
#include "average.h"


void print(int input);

int main () {
	
	
int input = -1;
double value = -1;
Average avg;
double x = avg.getSum();
int y = avg.getValues();
std::cout << "sum = " << x << " values = " << y << std::endl;
	
	while(input != 0){
		print(avg.getSum());
		std::cin >> input;

		if(input == 1) {
		std::cout << "Value?" << std::endl;
		std::cin >> value;
		//avg._values++;
		//avg._sum = avg._sum + value;
		std::cout << "_sum = " << avg.getSum() << std::endl;
	
		}
		else if(input == 2) {
	
		}
		else if(input == 9) {
	
		}
		else if(input == 9) {
	
		}
		else if(input == 0) {
		std::cout << "The program will now exit.\n" << std::endl;
		}
		else {
		std::cout << "Invalid input. Try again.\n" << std::endl;
		}

	
	//std::cout << input << std::endl; //THIS IS FOR TESTING
	}
	
	return 0;


}

void print(int sum) {
	std::cout << "\t=========================" << std::endl;
	std::cout << "\tMerely Average Calculator" << std::endl;
	std::cout << "\t=========================" << std::endl;
	std::cout << "The current average is " << sum << "\n" << std::endl;
	std::cout << "1 - Enter a new value" << std::endl;
	std::cout << "2 - Auto enter a random value" << std::endl;
	std::cout << "9 - Clear the calculator" << std::endl;
	std::cout << "0 - Exit\n" << std::endl;
	std::cout << "Command?" << std::endl;
	return;
}
