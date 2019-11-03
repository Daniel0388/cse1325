#ifndef __SHELTER_H
#define __SHELTER_H

#include <vector>
#include <string>
#include "animal.h"
#include "dog.h"

class Shelter{
  public:
    Shelter(); // constructor
    std::string name();
    void add_animal(Animal& animal);
    int num_animals();
    Animal& animal(int index);
  private:
    std::string _name;
    std::vector <Animal> _animals;
};
#endif
