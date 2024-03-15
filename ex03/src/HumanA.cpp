/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 18:02:13 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/03/15 18:02:15 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

void HumanA::attack(void) const {
  std::cout << this->_name << " attacks with their " << this->_weapon.getType()
            << std::endl;
}
