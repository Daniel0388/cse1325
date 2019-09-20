#include "stock.h"

Stock::Stock() : _weight{NAN} {};

Stock::Stock(double weight) : _weight{weight} {};

double Stock::weight() {
	return _weight;
};
