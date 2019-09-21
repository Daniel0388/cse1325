#include "locomotive.h"

Locomotive::Locomotive() : Stock(80000), _power{13500} {
	
	_art = { // Locomotive
	" * # @ ",
	" . ______",
	" _()_||__||",
	" ( cse1325 |",
	" /-OO----OO''",
	"#############",
	};


};

double Locomotive::power() {
	return _power;
};
