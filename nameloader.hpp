#ifndef NAMELOADER_H
#define NAMELOADER_H

#include "passwordmaker.hpp"
#include <fstream>

/*******************************************************************
 Student Name:JAMES RUTGER
 File Name: Nameloader.hpp
 Assignment: Project 1 - Hash Table

 Data Structures and Algorithms 2
 Dr.John Coffey

 Class Description:

 Nameloader is work-horse class that reads, writes, and stores in
 arrays the names and passwords from .txt files.
*****************************************************************/


class Nameloader
{

	private:
		std::string names[90000];
		std::string namespasswords[90000];
		std::ifstream inFile;
		std::ifstream inFile2;

	public:
		Nameloader();
		bool LoadNames(int);
		std::string GetName(int);
		bool NamePassLoader(int arrNum);
		std::string GetNamePasses(int arrNum);

};
#endif
