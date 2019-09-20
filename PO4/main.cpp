#include <iostream>
#include <string>
#include "stock.h"
#include "coach.h"
#include "locomotive.h"
#include "train.h"

int main() {


	std::cout << "hello world" << std::endl;
	Locomotive loco;
	Stock stock;
	Coach coach;
	//double x = loco.power();
	std::cout << "power is " << loco.power() << std::endl;
	std::cout << "weight of stock is " << stock.weight() << std::endl;
	std::cout << "weight of coach is " << coach.weight() << std::endl;
	std::cout << "weight of loco is " << loco.weight() << std::endl;
	std::cout << "power of loco is " << loco.power() << std::endl;
	
	return 0;

}
