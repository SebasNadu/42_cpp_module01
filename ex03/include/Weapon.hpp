/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 18:02:40 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/03/15 18:02:42 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Weapon {
public:
  Weapon(std::string type) : _type(type){};
  ~Weapon(void){};

  std::string const &getType(void) const;
  void setType(std::string type);

private:
  std::string _type;
};
