// Header protection
#pragma once

#include <iostream>
#include <string>

class Zombie {
public:
  /* Zombie(void); */
  Zombie(std::string name);
  ~Zombie();

  void announce(void) const;

private:
  std::string _name;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);
