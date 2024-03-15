/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:27:44 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/03/15 11:40:56 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main() {
  Zombie charles("Charles");
  Zombie *john;

  charles.announce();

  john = newZombie("John");
  john->announce();

  randomChump("Bob");
  std::cout << std::endl;
  delete john;
  return 0;
}
