#ifndef NAMELOADER_H
#define NAMELOADER_H

#include "passwordmaker.hpp"
#include <fstream>

// JAMES RUTGER
// Data Structures and Algorithsm 2
// Dr.John Coffey
// 
// Nameloader is work-horse class that reads, writes, and stores in
// arrays the names and passwords from .txt files.
//
// Main functions:
// LoadNames(); stores the names from "lastNames.txt" into an array.
//
// NamePassLoader(); stores names and random passwords from "raw.txt"
// into an array.
//


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
