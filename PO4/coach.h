#ifndef COACH_H
#define COACH_H

#include "stock.h"

class Coach : public Stock {

	private:
	int _passengers;

	public:
	Coach();
	void add_passengers(int _passengers);
	//double weight() /*override*/;

};

#endif
