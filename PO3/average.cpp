
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


std::ostream& operator<<(std::ostream& os, Average& ave) {


}


std::istream& operator >> (std::istream& is, Average& ave) {

}


double Average::operator += (double value) {

	//_values++;
	//_sum = _sum + value;
	//return _sum

}

