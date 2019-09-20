
#include "train.h"

void Train::add_locomotive(Locomotive& locomotive) {_locomotives.push_back(&locomotive);};

void Train::add_coach(Coach& coach) {_coaches.push_back(&coach);};

double speed(double minutes, std::vector <Locomotive*> _locomotives) {
	
	int i = 0;
	double result = 0;
	double seconds = minutes * 60;
	double power = 13500 * _locomotives.size(); 

	for (i = 0; i < _locomotives.size(); i++) {
		//power = power + _locomotives(i).power();
	}
	
	result = std::sqrt(2*seconds);
	return result;

};
