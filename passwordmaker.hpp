#ifndef PASSWORDMAKER_H
#define PASSWORDMAKER_H

// JAMES RUTGER
// Data Structures and Algorithsm 2
// Dr.John Coffey
// 
// PasswordMaker is a very simple class which only makes random 9 char
// passwords for "raw.txt"and also ciphers them for "encrypted.txt"


#include <iostream>
#include <string>
#include <sstream>
class PasswordMaker
{
	public:
		std::string PasswordGenerator();
		std::string Cipherer(std::string password);

};

#endif
