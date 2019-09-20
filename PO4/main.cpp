#include <iostream>
#include <string>
#include "coach.h"
#include "locomotive.h"
#include "stock.h"

int main() {


	std::cout << "hello world" << std::endl;
	Locomotive loco;
	Stock stock;
	//double x = loco.power();
	std::cout << "power is " << loco.power() <<std::endl;
	std::cout << stock.artgetter() << std::endl;
	return 0;

}
