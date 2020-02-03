#ifndef PASSWORDMAKER_H
#define PASSWORDMAKER_H

#include <iostream>
#include <string>
#include <sstream>

// JAMES RUTGER
// Data Structures and Algorithms 2
// Dr.John Coffey
// 
// Class Description:
//
// PasswordMaker is a very simple class which only makes random 9 char
// passwords for "raw.txt"and also ciphers them for "encrypted.txt"
//
// Main Functions:
//
// PasswordGenerator(); creates random 9 char password and returns it
// Cipherer(string) takes in the random password and returns the ciphered one

class PasswordMaker
{
	public:
		std::string PasswordGenerator();
		std::string Cipherer(std::string password);

};

#endif
