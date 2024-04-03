/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 16:35:13 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/04/03 10:43:27 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie *zombieHorde(int N, std::string name) {
  Zombie *horde(NULL);
  if (N <= 0) {
    std::cout << "You need to create at least one Zombie for the horde"
              << std::endl;
    return NULL;
  }
  try {
    horde = new Zombie[N];
  } catch (const std::bad_alloc &error) {
    std::cout << "Allocation of the horde failed: " << error.what()
              << std::endl;
    return NULL;
  }
  for (int i(0); i < N; i++) {
    horde[i].setName(name);
  }
  return horde;
}
