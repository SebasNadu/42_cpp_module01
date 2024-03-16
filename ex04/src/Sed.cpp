/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasnadu <johnavar@student.42berlin.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:18:56 by sebasnadu         #+#    #+#             */
/*   Updated: 2024/03/16 16:18:59 by sebasnadu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"
#include <iostream>

Sed::Sed(std::string const &fileName) {
  this->_inputFile.open(fileName.c_str(), std::fstream::ate);
  if (!this->_inputFile.is_open()) {
    std::cerr << "Error: " << fileName << ": No such file or directory"
              << std::endl;
    exit(1);
  }

  this->_fileSize = this->_inputFile.tellg();
  this->_inputFile.seekg(0, this->_inputFile.beg);

  this->_outputFile.open((fileName + ".replace").c_str(), std::fstream::trunc);
  if (!this->_outputFile.is_open()) {
    std::cerr << "Error: " << fileName
              << ".replace: Problem creating the file, please try again."
              << std::endl;
    this->_inputFile.close();
    exit(1);
  }
  this->_readFile();
}

Sed::~Sed(void) {
  this->_inputFile.close();
  this->_outputFile.close();
}

void Sed::_readFile(void) {
  this->_buffer.resize(this->_fileSize);
  this->_inputFile.read(&this->_buffer[0], this->_fileSize);
  if (!this->_inputFile) {
    std::cerr << "Error: readFile: Problem reading the file, please try again."
              << std::endl;
    this->_inputFile.close();
    this->_outputFile.close();
    exit(1);
  }
}

void Sed::_writeFile(void) {
  this->_outputFile << this->_buffer;
  if (!this->_outputFile) {
    std::cerr
        << "Error: writeFile: Problem writing to the file, please try again."
        << std::endl;
    this->_inputFile.close();
    this->_outputFile.close();
    exit(1);
  }
}

void Sed::setFile(std::string const &fileName) {
  this->_inputFile.close();
  this->_outputFile.close();
  this->_inputFile.open(fileName.c_str(), std::fstream::ate);
  if (!this->_inputFile.is_open()) {
    std::cerr << "Error: " << fileName << ": No such file or directory"
              << std::endl;
    exit(1);
  }
  this->_fileSize = this->_inputFile.tellg();
  std::cout << "File size: " << this->_fileSize << std::endl;
  this->_inputFile.seekg(0, this->_inputFile.beg);

  _outputFile.open((fileName + ".replace").c_str(), std::fstream::trunc);
  if (!_outputFile.is_open()) {
    std::cerr << "Error: " << fileName
              << ".replace: Problem creating the file, please try again."
              << std::endl;
    this->_inputFile.close();
    exit(1);
  }
  this->_readFile();
}

void Sed::replace(std::string const &s1, std::string const &s2) {
  if (s1.empty()) {
    std::cout << "Error: Sed: The string to replace may not be empty."
              << std::endl;
    return;
  }
  for (size_t pos(this->_buffer.find(s1, 0)); pos != std::string::npos;
       pos = this->_buffer.find(s1, pos)) {
    if (pos != std::string::npos) {
      this->_buffer.erase(pos, s1.size());
      this->_buffer.insert(pos, s2);
      pos += s2.size();
    }
  }
  this->_writeFile();
}
