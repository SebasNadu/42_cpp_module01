/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 01:07:40 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/03/17 01:07:42 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

const std::string Harl::_Levels[_NLevels] = {"DEBUG", "INFO", "WARNING",
                                             "ERROR"};

Harl::Harl(void) {}

Harl::~Harl(void) {}

void Harl::_debug(void) {
  std::cout
      << "DEBUG:\n\tI love having extra bacon for my "
         "7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
      << std::endl;
}

void Harl::_info(void) {
  std::cout << "INFO:\n\tI cannot believe adding extra bacon costs more money. "
               "You didn’t put enough bacon in my burger! If you did, I "
               "wouldn’t be asking for more!"
            << std::endl;
}

void Harl::_warning(void) {
  std::cout << "WARNING:\n\tI think I deserve to have some extra bacon for "
               "free. I’ve been coming for years whereas you started working "
               "here since last month."
            << std::endl;
}

void Harl::_error(void) {
  std::cout
      << "ERROR:\n\tThis is unacceptable! I want to speak to the manager now."
      << std::endl;
}

// this is a typedef for a pointer to a member function of Harl
// without this typedef, the syntax is quite unreadable:
// void (Harl::*levelFcn[_NLevels])() = {};
void Harl::complain(std::string level) {
  fcnPtr levelFcn[_NLevels] = {
      &Harl::_debug,
      &Harl::_info,
      &Harl::_warning,
      &Harl::_error,
  };

  for (int i(0); i < this->_NLevels; ++i) {
    if (level == this->_Levels[i]) {
      (this->*levelFcn[i])();
      return;
    }
  }
  std::cerr << "Invalid level: \n\t\"" << level << '\"' << std::endl;
}
