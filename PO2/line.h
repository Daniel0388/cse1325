

class Line {

	private:

	double _x1
	double _y1
	double _x2
	double _y2


	public:
	
	Line(X1, Y1, X2, Y2) {
		x1 = X1;
		y1 = Y1;
		x2 = X2;
		y2 = Y2
	}


	string to_string() {
		std::string str = "(" + x1 + "," + y1 + ")-(" + x2 + "," + y2 + ")"
		return str;
	}

	
	int length() {
		int x = (x1-x2)*2;
		int y = (y1-y2)*2;
		int len = x+y;
		return len;
	}

	

}
