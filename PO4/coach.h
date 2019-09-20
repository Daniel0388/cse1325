#ifndef COACH_H
#define COACH_H

#include "stock.h"

class Coach : public Stock {

	private:
	int _passengers;
	//double _weight; //THIS NEEDS TO BE REMOVED ONCE STOCK CLASS IS MADE

	public:
	Coach(); //constructor
	void add_passengers(int _passengers);
	double weight() /*override*/;

};

#endif
