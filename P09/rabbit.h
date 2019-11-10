#ifndef __RABBIT_H
#define __RABBIT_H

#include "animal.h"

// List of rabbit breeds, conversion to/from string and stream, and iteration
enum class Rabbit_breed {
    LIONHEAD,
    JERSEY_WOOLY,
    ENGLISH_LOP,
    MINI_REX,
    DWARF_HOTOT,
};
constexpr Rabbit_breed rabbit_breeds[] = {
    Rabbit_breed::LIONHEAD,
    Rabbit_breed::JERSEY_WOOLY,
    Rabbit_breed::ENGLISH_LOP,
    Rabbit_breed::MINI_REX,
    Rabbit_breed::DWARF_HOTOT,
};
std::string to_string(const Rabbit_breed& breed);
std::ostream& operator<<(std::ostream& ost, const Rabbit_breed& breed);

// Class Rabbit with overrides for family and breed
class Rabbit : public Animal {
  public:
    Rabbit(Rabbit_breed breed, std::string name, Gender gender, int age);
    virtual ~Rabbit();
    virtual std::string family() const override;
    virtual std::string breed() const override;
  private:
    Rabbit_breed _breed;
};

#endif
