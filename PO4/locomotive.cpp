
#include "locomotive.h"

Locomotive::Locomotive() : Stock(80000), _power{13500} {};

double Locomotive::power() {
	return _power;
};
