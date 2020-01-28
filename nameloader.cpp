#include "nameloader.hpp"

Nameloader::Nameloader()
{
	inFile.open("lastNames.txt");
}

bool Nameloader::LoadNames(int arrNum)
{

	if(inFile.peek()==EOF)
	{
		return false;
	}

	std::string line1;

	std::getline(inFile,line1);

	std::stringstream ss;

	ss << line1;

	ss >> names[arrNum];

//	std::cout << arrNum << "\n";

	return true;
}

std::string Nameloader::GetName(int arrNum)
{
	return names[arrNum];
}
