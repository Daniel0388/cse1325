#include <cstdlib>
#include <iostream>
#include "average.h"


void print(double sum, int val, Average avg);
double random(double min, double max);



int main () {
	
	
int input = -1;
double value = -1;
Average avg;
double x = avg.getSum();
int y = avg.getValues();
std::cout << "sum = " << x << " values = " << y << std::endl;
	
	while(input != 0){
		print(avg.getSum(), avg.getValues(), avg);
		std::cin >> input;

		if(input == 1) {
		std::cout << "Value?" << std::endl;
		std::cin >> avg;
		//avg._values++;
		//avg._sum = avg._sum + value;
		std::cout << "_sum = " << avg.getSum() << std::endl;
	
		}
		else if(input == 2) {
		
		}
		else if(input == 9) {
		avg.reset();
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

void print(double sum, int val, Average avg) {
	std::cout << "\t=========================" << std::endl;
	std::cout << "\tMerely Average Calculator" << std::endl;
	std::cout << "\t=========================" << std::endl;
	std::cout << "The current count is " << val << "  " << sum << std::endl;
	std::cout << "The current average is " << avg << "\n" << std::endl;
	std::cout << "1 - Enter a new value" << std::endl;
	std::cout << "2 - Auto enter a random value" << std::endl;
	std::cout << "9 - Clear the calculator" << std::endl;
	std::cout << "0 - Exit\n" << std::endl;
	std::cout << "Command?" << std::endl;
	return;
}


double random(double min, double max) {
	double r;
	r = (max - min) * ((double)rand() / (double)RAND_MAX) + min;
	return r;
}

