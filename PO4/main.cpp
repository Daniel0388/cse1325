#include <iostream>
#include <string>
#include "stock.h"
#include "coach.h"
#include "locomotive.h"
#include "train.h"

int main() {


	std::cout << "hello world" << std::endl;
	Locomotive loco;
	Stock s;
	Coach c;
	//double x = loco.power();
	std::cout << "power is " << loco.power() <<std::endl;
	return 0;

}
