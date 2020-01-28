#include "passwordmaker.hpp"

//PasswordMaker::PasswordMaker()
//{
//}

std::string PasswordMaker::PasswordGenerator()
{
	
	char lowercaseletters[26]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

	std::string password;

	for(int i=0;i<9;i++){
	
		password = password + lowercaseletters[rand() % 26];
	}

	return password;

}
