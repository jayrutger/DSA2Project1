#include "nameloader.hpp"


/*******************************************************************
 Student Name:JAMES RUTGER
 File Name: Nameloader.cpp
 Assignment: Project 1 - Hash Table

 Data Structures and Algorithms 2
 Dr.John Coffey

 Class Description:

 Nameloader is work-horse class that reads, writes, and stores in
 arrays the names and passwords from .txt files.
*****************************************************************/


/*******************************************************************
 * Constructor opens the two files to start reading names and 
 * passwords from.
 ******************************************************************/
Nameloader::Nameloader()
{
	inFile.open("lastNames.txt");
	inFile2.open("raw.txt");
}

/*******************************************************************
 * LoadNames is lstores the names from "lastNames.txt" into an array.
 ******************************************************************/
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

/*******************************************************************
 * GetName returns names from stored name array.
 ******************************************************************/
std::string Nameloader::GetName(int arrNum)
{
	return names[arrNum];
}

/*******************************************************************
 * GetNamePasses return the names and unencrypted passwords from the
 * stored array.
 ******************************************************************/
std::string Nameloader::GetNamePasses(int arrNum)
{
	return namespasswords[arrNum];
}

/*******************************************************************
 * NamePassLoader reads names and passwords from "raw.txt" and 
 * stores into an array.
 ******************************************************************/
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
