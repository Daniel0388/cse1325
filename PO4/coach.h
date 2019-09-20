#ifndef COACH_H
#define COACH_H

#include "stock.h"

class Coach : public Stock {

	private:
	int _passengers;

	public:
	Coach();
	int add_passengers(int passengers);
	//double weight() /*override*/;

};

#endif
