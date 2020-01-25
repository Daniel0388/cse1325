#include "coach.h"

Coach::Coach() : Stock(28000), _passengers{0} {

	_art = {
	"               ",
        " ______________",
        " | [] [] [] []|",
        " |            |",
        "='OO--------OO'",
        "###############",
	};

};

int Coach::add_passengers(int passengers) {
	_passengers = _passengers + passengers;
	return _passengers;
};
