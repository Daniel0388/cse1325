
#include "locomotive.h"

Locomotive::Locomotive() : Stock(), _power{13500} {};

double Locomotive::power() {
	return _power;
};
