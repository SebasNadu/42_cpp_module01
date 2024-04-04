/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 18:02:09 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/04/04 21:46:57 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL){};
HumanB::~HumanB(void){};

void HumanB::attack(void) const {
  if (this->_weapon == NULL)
    std::cout << this->_name << " has no weapon to attack with" << std::endl;
  else
    std::cout << this->_name << " attack with their "
              << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) { this->_weapon = &weapon; }
