/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 01:07:53 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/03/17 13:50:44 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int ac, char **av) {
  Harl harl;

  if (ac != 2) {
    std::cout << "Error: Wrong number of arguments:\n\tUsage: ./harl "
                 "[DEBUG|INFO|WARNING|ERROR]"
              << std::endl;
    return 1;
  }
  harl.complain(av[1]);
  return 0;
}
