#include "cat.h"

// Constructor / Destructor - note how delegation to base class works!
Cat::Cat(Cat_breed breed, std::string name, Gender gender, int age)
    : Animal(name, gender, age), _breed{breed} { }
Cat::~Cat() { }

// Overrides for pure virtual methods
std::string Cat::family() const {return "cat";}
std::string Cat::breed() const {return ::to_string(_breed);}

// Convert breed to string and stream - use a std::map for other derived classes!
std::string to_string(const Cat_breed& breed) {
    switch(breed) {
        case  Cat_breed::MAINE_COON:        return "Maine Coon";
        case  Cat_breed::RAGDOLL:   return "Ragdoll";
        case  Cat_breed::PERSIAN:  return "Persian"; 
        case  Cat_breed::SIAMESE:   return "Siamese"; 
        case  Cat_breed::SPHYNX:    return "Sphynx";
        default:                     return "UNKNOWN";
    }
}
std::ostream& operator<<(std::ostream& ost, const Cat_breed& breed) {
    ost << ::to_string(breed);
    return ost;
}
