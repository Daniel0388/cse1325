#include "train.h"
#include "stock.h"
#include "locomotive.h"
#include "coach.h"

void Train::add_locomotive(Locomotive& locomotive) {_locomotives.push_back(&locomotive);};

void Train::add_coach(Coach& coach) {_coaches.push_back(&coach);};

double Train::speed(double minutes) {
	
	double result = 0;
	double seconds = minutes * 60;
	double power = 13500 * _locomotives.size();
	double weight_loco = 80000 * _locomotives.size();
	double weight_coach = 28000 * _coaches.size();
	double weight = weight_loco + weight_coach;
	double x = 2 * power * seconds / weight;
	result = std::sqrt(x);
	return result;

};

/*
std::string Train::to_art() { //WORK IN PROGRESS
	if (_locomotives.size() > 0) {
	return _locomotives.at(0).ascii_art(0);
	}

};
*/


int Train::size_loco() {
	int x = _locomotives.size();
	return x;
};

int Train::size_coach() {
	int x = _coaches.size();
	return x;
};

void Train::clear_train() {
	
	_locomotives.clear();
	_coaches.clear();
	return;
};
