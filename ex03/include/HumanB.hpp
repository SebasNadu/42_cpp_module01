/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 18:02:36 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/03/15 18:02:37 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"
#include <string>

class HumanB {
public:
  HumanB(std::string name) : _name(name), _weapon(nullptr){};
  ~HumanB(void){};

  void attack(void) const;
  void setWeapon(Weapon &weapon);

private:
  std::string _name;
  Weapon *_weapon;
};
