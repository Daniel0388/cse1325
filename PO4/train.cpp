
#include "train.h"

void Train::add_locomotive(Locomotive& locomotive) {_locomotives.push_back(&locomotive);}

void Train::add_coach(Coach& coach) {_coaches.push_back(&coach);}
