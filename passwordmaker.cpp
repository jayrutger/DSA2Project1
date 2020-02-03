#include "passwordmaker.hpp"

std::string PasswordMaker::PasswordGenerator()
{
	const int PASSWORD_LENGTH = 9;	
	char lowercaseletters[26]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

	std::string password;

	for(int i=0;i<PASSWORD_LENGTH;i++){
	
		password = password + lowercaseletters[rand() % 26];
	}

	return password;

}


std::string PasswordMaker::Cipherer(std::string password)
{

	int numLetter=0;
	
	char letter;
	std::string word;

	for(char& c : password)
	{

    		if(numLetter==0)//j
		{	
			letter=int(c)+9;
			if(letter>122 || letter < 0){
			letter = letter-122;
			letter = letter +96;
			}

		}
		else if (numLetter==1)//o
		{	
			letter=int(c)+14;
			if(letter>122 || letter < 0){
			letter = letter-122;
			letter = letter+96;
			}

		}

		else if (numLetter==2)//n
		{	
			letter=int(c)+13;
			if(letter>122 || letter < 0){
			letter = letter-122;
			letter = letter+96;
			}

		}

		else if (numLetter==3)//e
		{	
			letter=int(c)+4;
			if(letter>122 || letter < 0){
			letter = letter-122;
			letter = letter+96;
			}

		}

		else if (numLetter==4)//s
		{	
			letter=int(c)+18;
			if(letter>122 || letter < 0){
			letter = letter-122;
			letter = letter+96;
			}

		}

		word = word + letter;

		numLetter++;

		if(numLetter>4)
		{
			numLetter=0;
		}
	}
	return word;

	}
