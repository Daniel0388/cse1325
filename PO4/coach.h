#ifndef COACH_H
#define COACH_H

class Coach {

	private:
	int _passengers;
	double _weight;

	public:
	Coach() : _weight{28000} {};
	add_passengers(int _passengers);
	double weight() <overide>;

};

#endif
