#include "train.h"

void Train::add_locomotive(Locomotive& locomotive) {_locomotives.push_back(&locomotive);};

void Train::add_coach(Coach& coach) {_coaches.push_back(&coach);};

double Train::speed(double minutes, std::vector <Locomotive*> _locomotives, std::vector <Coach*> _coaches) {
	
	int i = 0;
	double result = 0;
	double seconds = minutes * 60;
	double power = 13500 * _locomotives.size();
	double weight = (80000 * _locomotives.size()) + (28000 * _coaches.size());
	
	result = std::sqrt(2*power*seconds*weight);
	return result;

};

std::string to_art() {



};

// WORK IN PROGRESS

int Train::size_loco() {
	int x = _locomotives.size();
	return x;
};

int Train::size_coach() {
	int x = _coaches.size();
	return x;
};
