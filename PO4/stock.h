#ifndef STOCK_H
#define STOCK_H
#include <string>
#include <cmath>

class Stock {

	private:
	double _weight;
	

	protected:
	std::string _art;


	public:
	Stock();
	Stock(double weight);
	


	/*std::string artgetter() {
		return _art;
	}*/


};

#endif
