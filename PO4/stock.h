#ifndef STOCK_H
#define STOCK_H

#include <string>
#include <cmath>
#include <vector>

class Stock {

	private:
	double _weight;
	
	protected:
	std::vector <std::string> _art;

	public:
	Stock();
	Stock(double weight);
	double weight();
	
	/*std::string artgetter() {
		return _art;
	}*/

};

#endif
