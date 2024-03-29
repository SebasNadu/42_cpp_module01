/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:31:27 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/03/15 11:41:48 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

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
