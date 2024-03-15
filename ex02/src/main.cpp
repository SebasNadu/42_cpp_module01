/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 16:35:40 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/03/15 16:35:41 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void) {
  std::string str("Hi THIS IS BRAIN");
  std::string *stringPTR = &str;
  std::string &stringREF = str;

  std::cout << "The memory address of the string: " << &str << '\n';
  std::cout << "The memory address of the pointer: " << stringPTR << '\n';
  std::cout << "The memory address of the reference: " << &stringREF << "\n\n";

  std::cout << "The vaule of the string: " << str << '\n';
  std::cout << "The value pointed by the pointer: " << *stringPTR << '\n';
  std::cout << "The value pointed by the reference: " << stringREF << "\n\n";

  std::cout << "Every one of them has the same memory address, so they are "
               "pointing to the same memory location."
            << std::endl;
  return 0;
}
