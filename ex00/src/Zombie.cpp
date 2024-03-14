#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name){};
Zombie::~Zombie() {
  std::cout << this->_name
            << ": noooOOO ... no moooore braiiinz... time to "
               "diiiieeEEEE..."
            << std::endl;
};

void Zombie::announce(void) const {
  std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie *newZombie(std::string name) {
  Zombie *zombie = new Zombie(name);
  return zombie;
}

void randomChump(std::string name) {
  Zombie zombie(name);
  zombie.announce();
}
