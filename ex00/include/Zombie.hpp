/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:11:56 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/03/15 11:40:28 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Header protection
#pragma once

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
