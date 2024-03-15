/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:31:27 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/03/15 14:25:35 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void) : _name("DummyZombie") {
  std::cout << "A " << this->_name << " has appeared!" << std::endl;
}

Zombie::Zombie(std::string name) : _name(name) {}

Zombie::~Zombie() {
  std::cout << this->_name
            << ": noooOOO ... no moooore braiiinz... time to "
               "diiiieeEEEE..."
            << std::endl;
}

void Zombie::announce(void) const {
  std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string const &name) {
  if (name.empty())
    std::cout << "The zombie needs a name!" << std::endl;
  else
    this->_name = name;
}
