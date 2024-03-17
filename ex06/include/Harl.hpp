/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 01:07:02 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/03/17 01:07:05 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Harl {
public:
  Harl(void);
  ~Harl(void);

  void complain(std::string level);

private:
  static const int _NLevels = 4;
  static const std::string _Levels[_NLevels];
  typedef void (Harl::*fcnPtr)();

  void _debug(void);
  void _info(void);
  void _warning(void);
  void _error(void);
};
