#ifndef AVERAGE_H
#define AVERAGE_H
#include <iostream>

class Average {

	private:
	double _sum;
	int _values;

	public:
	Average();
	double getSum();
	int getValues();
	friend std::ostream& operator << (std::ostream& os, Average& ave);
	friend std::istream& operator >> (std::istream& is, Average& ave);
	double operator+=(double value);

};

#endif

