
#include "average.h"

Average::Average() { //constructor

	_sum = 0;
	_values = 0;
}


double Average::getSum() { //return sum

	return _sum;

}


int Average:: getValues() { //return values

	return _values;

}

void Average::reset() {
	_sum = 0;
	_values = 0;
}

std::ostream& operator << (std::ostream& os, Average& ave) {


}


void operator >> (std::istream& input, Average& ave) {
	std::cout << "start of >> function" << std::endl;
 	int num;
	input >> num;
	std::cout << "num = " << num << std::endl;

	ave._sum = ave._sum + num;
	ave._values++;
}


void Average::operator += (double value) {
	

}

