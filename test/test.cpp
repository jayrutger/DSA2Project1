#define CATCH_CONFIG_MAIN

#include "catch/catch.hpp"
#include "../nameloader.hpp"
#include "../passwordmaker.hpp"
#include <string>

const std::string PUBLISHER = "Some Lucky Duck";
const int NUMBER_AVAILABLE  = 0;

TEST_CASE ("Book creation and checkout/in")
{

	Nameloader obj;


	std::string answer;
	
	PasswordMaker passes;

//	std::ofstream ofs("raw.txt",std::ofstream::out);
	
	for(int i=0;i<90000;i++)
	{	

		if(obj.LoadNames(i))
		{

//			ofs << obj.GetName(i) << " ";
//			ofs  << passes.PasswordGenerator() << "\n";

		}
	       	else
		{	
			break;
		}
	}

//	ofs.close();

	for(int j=0;j<90000;j++)
	{

		if(obj.NamePassLoader(j))//loads names and pass string into array
		{
		//	std::cout << obj.GetNamePasses(j) << "\n"; //prints out 4 fun
		}
		else
		{
			break;
		}
	}
	
	//std::stringstream ss;
	
	std::stringstream ss2;
	
	for(int z=0;z<5;z++)
	{

		std::stringstream ss;

		ss << obj.GetNamePasses(z);
		std::string word1;	
		std::string word2;
		ss >> word1 >> word2;

		//ss2 << word2;
	       	ss2 << passes.Cipherer(word2) << "\n";
		
		if(word2==""){
			break;
		}

	}

	REQUIRE(ss2.str() == "wkyvtkadf\nqqqejicjo\ntmumvmefg\nmlenexksv\nggwcturoi\n");
}
