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
	void reset();
	friend std::ostream& operator << (std::ostream& output, Average& ave);
	friend void operator >> (std::istream& is, Average& ave);
	void operator+=(double value);

};

#endif

