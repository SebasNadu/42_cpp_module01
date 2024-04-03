/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 16:35:06 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/04/03 10:42:21 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main(void) {
  int N(5);
  std::cout << "\nNumber: " << N << std::endl;

  Zombie *horde = zombieHorde(N, "ZomiE1");
  if (horde == NULL) {
    std::cout << "The horde could not be created" << std::endl;
  } else {
    for (int i(0); i < N; i++)
      horde[i].announce();
    std::cout << "Horde address: " << horde << std::endl;
    delete[] horde;
  }

  N = 2;
  std::cout << "\nNumber: " << N << std::endl;
  horde = zombieHorde(N, "ZomiE2");
  if (horde == NULL) {
    std::cout << "The horde could not be created" << std::endl;
  } else {
    for (int i(0); i < N; i++)
      horde[i].announce();
    std::cout << "Horde address: " << horde << std::endl;
    delete[] horde;
  }

  N = 0;
  std::cout << "\nNumber: " << N << std::endl;
  horde = zombieHorde(N, "ZomiE3");
  if (horde == NULL) {
    std::cout << "The horde could not be created" << std::endl;
  } else {
    for (int i(0); i < N; i++)
      horde[i].announce();
    std::cout << "Horde address: " << horde << std::endl;
    delete[] horde;
  }

  N = -1;
  std::cout << "\nNumber: " << N << std::endl;
  horde = zombieHorde(N, "ZomiE3");
  if (horde == NULL) {
    std::cout << "The horde could not be created" << std::endl;
  } else {
    for (int i(0); i < N; i++)
      horde[i].announce();
    std::cout << "Horde address: " << horde << std::endl;
    delete[] horde;
  }
  return 0;
}
