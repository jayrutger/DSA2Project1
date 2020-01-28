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

	PasswordMaker passes;

//	std::ofstream ofs("raw.txt",std::ofstream::out);
	
	for(int i=1;i<90000;i++)
	{	

		obj.LoadNames(arrNum);
	
//		ofs << obj.GetName(arrNum) << " ";
		ofs  << passes.PasswordGenerator() << "\n";
		arrNum++;
		if(obj.LoadNames(arrNum)==false)
		{
				break;
		}

	}

	ofs.close();

}
