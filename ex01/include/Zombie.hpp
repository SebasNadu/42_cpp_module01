/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 16:35:21 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/03/15 16:35:22 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
