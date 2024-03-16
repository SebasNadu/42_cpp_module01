/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:19:26 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/03/16 16:19:28 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"
#include <iostream>

int main(int ac, char **av) {
  if (ac != 4) {
    std::cout << "Error: invalid number of arguments." << '\n';
    std::cout << "\tUsage: ./sedIs filename str_to_replace new_str"
              << std::endl;
    return 1;
  }
  Sed sed(av[1]);
  sed.replace(av[2], av[3]);
  return 0;
}
