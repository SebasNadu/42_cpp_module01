/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:19:05 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/04/03 10:54:28 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <fstream>
#include <string>

class Sed {
public:
  Sed(std::string const &fileName);
  ~Sed(void);

  void replace(std::string const &s1, std::string const &s2);
  void setFile(std::string const &fileName);

private:
  std::ifstream _inputFile;
  std::ofstream _outputFile;
  long _fileSize;
  std::string _buffer;

  void _readFile(void);
  void _writeFile(void);
};
