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
		std::string names[90000];
		std::ifstream inFile;

	public:
		Nameloader();
		bool LoadNames(int);
		std::string GetName(int);


};
#endif
