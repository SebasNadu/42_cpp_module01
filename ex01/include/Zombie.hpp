// Header protection
#pragma once

#include <string>

class Zombie {
public:
  Zombie(void);
  Zombie(std::string name);
  ~Zombie();

  void announce(void) const;
  void setName(std::string const &name);

private:
  std::string _name;
};

Zombie *zombieHorde(int N, std::string name);
