#include "nameloader.hpp"

Nameloader::Nameloader()
{
	inFile.open("lastNames.txt");
	inFile2.open("raw.txt");
}

bool Nameloader::LoadNames(int arrNum)
{

	if(inFile.peek()==EOF)
	{
		inFile.close();
		return false;
	}

	std::string line1;

	std::getline(inFile,line1);

	std::stringstream ss;

	ss << line1;

	ss >> names[arrNum];

	return true;
}

std::string Nameloader::GetName(int arrNum)
{
	return names[arrNum];
}

std::string Nameloader::GetNamePasses(int arrNum)
{
	return namespasswords[arrNum];
}

bool Nameloader::NamePassLoader(int arrNum)
{
	if(inFile2.peek()==EOF)
	{
		inFile2.close();
	}

	std::string line1;

	std::getline(inFile2,line1);

	namespasswords[arrNum] = line1;

	return true;

}
