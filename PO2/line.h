#include <string>
#include <cmath>

class Line {

	private:

	double x1;
	double y1;
	double x2;
	double y2;


	public:
	
	Line(double X1, double Y1, double X2, double Y2) {
		x1 = X1;
		y1 = Y1;
		x2 = X2;
		y2 = Y2;
	}


	std::string to_string() {
		std::string str = "(" + std::to_string(x1) + "," + std::to_string(y1) + ")-(" + std::to_string(x2) + "," + std::to_string(y2) + ")";
		return str;
	}

	
	int length() {
		double x = (x1-x2);
		double y = (y1-y2);
		double xsqr = x*x;
		double ysqr = y*y;
		double len = xsqr+ysqr;
		double len2 = sqrt(len);
		return len2;
	}

	

};