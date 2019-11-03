#ifndef __ANIMAL_H
#define __ANIMAL_H

#include <string>


enum Gender {Male, Female};

class Animal {
  public:
	//Animal(std::string name, Gender gender, int age); //constructor
	//~Animal();
	std::string family();
	std::string breed();
	std::string name();
	Gender gender();
	int age();
	std::string to_string();
    
  private:

  protected:
	std::string _name;
	Gender _gender;
	int _age;
    
};
#endif
