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

	int arrNum=0;
	int arrNum2=0;

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
	
	for(int z=0;z<1;z++)
	{

		std::stringstream ss;

		ss << obj.GetNamePasses(z);
		std::string word1;	
		std::string word2;
		ss >> word1 >> word2;

	       answer= passes.Cipherer(word2); //<< "\n";
		
		if(word2==""){
			break;
		}

	}

	REQUIRE(answer == "yofwoxfqw");

}
