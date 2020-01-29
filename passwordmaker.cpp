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


std::string PasswordMaker::Cipherer(std::string password)
{

	int numLetter=0;
	
	char letter;
	std::string word;
	//std::stringstream ss;


	for(char& c : password)
	{

    		if(numLetter==0)//j
		{	
			letter=int(c)+9;
			if(int(letter)>122){
			letter = letter-122;
			letter = letter +96;
			}

		}
		else if (numLetter==1)//o
		{	
			letter=int(c)+14;
			if(int(letter)>122){
			letter = letter-122;
			letter = letter+96;
			}

		}

		else if (numLetter==2)//n
		{	
			letter=int(c)+13;
			if(int(letter)>122){
			letter = letter-122;
			letter = letter+96;
			}

		}

		else if (numLetter==3)//e
		{	
			letter=int(c)+4;
			if(int(letter)>122){
			letter = letter-122;
			letter = letter+96;
			}

		}

		else if (numLetter==4)//s
		{	
			letter=int(c)+18;
			if(int(letter)>122){
			letter = letter-122;
			letter = letter+96;
			}

		}

	//	ss << letter;

		word = word + letter;

		numLetter++;

		if(numLetter>4)
		{
			numLetter=0;
		}
	}
	return word;

	}
