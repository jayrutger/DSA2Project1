#define CATCH_CONFIG_MAIN

#include "catch/catch.hpp"
#include "../nameloader.hpp"
#include "../passwordmaker.hpp"
#include "../hashtable.hpp"

#include <string>


TEST_CASE ("Book creation and checkout/in")
{

	Nameloader obj;


	std::string answer;
	
	PasswordMaker passes;
	
	for(int i=0;i<90000;i++)
	{	

		if(obj.LoadNames(i))
		{
			//just loads names until none left
		}
	       	else
		{	
			break;
		}
	}


	for(int j=0;j<90000;j++)
	{

		if(obj.NamePassLoader(j))//loads names and passes full line string into array
		{
		}
		else
		{
			break;
		}
	}
	
	
	std::stringstream ss2;
	
	for(int z=0;z<5;z++)
	{

		std::stringstream ss;

		ss << obj.GetNamePasses(z);
		std::string word1;	
		std::string word2;
		ss >> word1 >> word2;

	       	ss2 << passes.Cipherer(word2) << "\n";
		
		if(word2==""){
			break;
		}

	}

	REQUIRE(ss2.str() == "wkyvtkadf\nqqqejicjo\ntmumvmefg\nmlenexksv\nggwcturoi\n");//Tests cipher on first 5 passwords


	Hashtable hash;

	for(int i=0; i<2;i++)
	{

		std::stringstream ss;

		ss << obj.GetNamePasses(i);
		std::string userID;
		std::string password;	
		std::string encryptedPassword;
		ss >> userID >> password;

		encryptedPassword = passes.Cipherer(password);

	//	int index = hash.MakeIndex(userID);

		hash.Insert(0, userID, encryptedPassword);			

	}//INSERTS 3 NAMES INTO INDEX 0

	std::string userIDTest = "SMITH";
	std::string encryptedPasswordTest = "wkyvtkadf";

	std::string searchResult = hash.Search(0,userIDTest,encryptedPasswordTest);

	REQUIRE(searchResult == "pass match after next node");


	std::string userIDTest2 = "JOHNSON";
	std::string encryptedPasswordTest2 = "qqqejicjo";

	std::string searchResult2 = hash.Search(0,userIDTest2,encryptedPasswordTest2);

	REQUIRE(searchResult2 == "password matches at head");





}
