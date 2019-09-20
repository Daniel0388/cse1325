#ifndef TRAIN_H
#define TRAIN_H

#include <iostream>
#include <string>
#include <vector>

#include "locomotive.h"
#include "coach.h"

class Train { //AGGREGATION LECTURE 7 SLIDE ~14

	private:
	std::vector <Locomotive*> _locomotives; //Locomotive* _locomotives;
	std::vector <Coach*> _coaches;//Coach* _coaches;

	public:
	void add_locomotive(Locomotive& locomotive);
	void add_coach(Coach& coach);
	double speed(double minutes);
	std::string to_art();

};

#endif