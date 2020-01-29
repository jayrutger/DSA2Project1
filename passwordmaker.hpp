#ifndef PASSWORDMAKER_H
#define PASSWORDMAKER_H

#include <string>
#include <sstream>
class PasswordMaker
{


	private:
	//	char lowercaseletters[26]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};


	public:
		std::string PasswordGenerator();
		std::string Cipherer(std::string password);













};

#endif
