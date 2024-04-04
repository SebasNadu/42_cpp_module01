/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 18:02:27 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/04/04 21:47:15 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanA {
public:
  HumanA(std::string name, Weapon &weapon);
  ~HumanA(void);

  void attack(void) const;

private:
  Weapon &_weapon;
  std::string _name;
};
