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
