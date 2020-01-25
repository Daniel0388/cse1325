#ifndef LOCOMOTIVE_H
#define LOCOMOTIVE_H

#include "stock.h"

class Locomotive : public Stock {
	
	private:
	double _power;

	public:
	Locomotive();
	double power();	

};

#endif
