#include "rabbit.h"

// Constructor / Destructor - note how delegation to base class works!
Rabbit::Rabbit(Rabbit_breed breed, std::string name, Gender gender, int age)
    : Animal(name, gender, age), _breed{breed} { }
Rabbit::~Rabbit() { }

// Overrides for pure virtual methods
std::string Rabbit::family() const {return "rabbit";}
std::string Rabbit::breed() const {return ::to_string(_breed);}

// Convert breed to string and stream - use a std::map for other derived classes!
std::string to_string(const Rabbit_breed& breed) {
    switch(breed) {
        case  Rabbit_breed::LIONHEAD:        return "Lionhead";
        case  Rabbit_breed::JERSEY_WOOLY:   return "Jersey Wooly";
        case  Rabbit_breed::ENGLISH_LOP:  return "English Lop"; 
        case  Rabbit_breed::MINI_REX:   return "Mini Rex"; 
        case  Rabbit_breed::DWARF_HOTOT:    return "Dwarf Hotot"; 
        default:                     return "UNKNOWN";
    }
}
std::ostream& operator<<(std::ostream& ost, const Rabbit_breed& breed) {
    ost << ::to_string(breed);
    return ost;
}
