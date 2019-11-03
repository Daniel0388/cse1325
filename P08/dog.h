#ifndef __DOG_H
#define __DOG_H

#include "animal.h"


enum Dog_Breed {Breed1, Breed2, Breed3, Breed4};

class Dog: public Animal {
  public:
	Dog(/*Dog_Breed breed*/); //constructor
	~Dog();
    
  private:
	enum Dog_Breed breed;

  protected:
    
};
#endif
