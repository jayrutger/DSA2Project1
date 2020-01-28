#ifndef NAMELOADER_H
#define NAMELOADER_H

#include "passwordmaker.hpp"
#include <string>
#include <iostream>
#include <sstream>
#include <fstream>

class Nameloader
{

	private:
		bool isFile2Open = false;
		std::string names[90000];
		std::string namespasswords[90000];
		std::ifstream inFile;

	public:
		Nameloader();
		bool LoadNames(int);
		std::string GetName(int);
		bool NamePassLoader(int arrNum);
		std::string GetNamePasses(int arrNum);

};
#endif
