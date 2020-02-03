#ifndef PASSWORDMAKER_H
#define PASSWORDMAKER_H

#include <iostream>
#include <string>
#include <sstream>

/*******************************************************************
 Student Name:JAMES RUTGER
 File Name: PasswordMaker.hpp
 Assignment: Project 1 - Hash Table

 Data Structures and Algorithms 2
 Dr.John Coffey

 Class Description:

 PasswordMaker is a very simple class which only makes random 9 char
 passwords for "raw.txt"and also ciphers them for "encrypted.txt"
*******************************************************************/
class PasswordMaker
{
	public:
		std::string PasswordGenerator();
		std::string Cipherer(std::string password);

};

#endif
