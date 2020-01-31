#ifndef HASHTABLE_H
#define HASHTABLE_H

#include "list.hpp"
#include <string>
#include <iostream>
class Hashtable
{

	private:
		List* table[90000];


	public:
		Hashtable();
		int MakeIndex(std::string name);
		void Insert(int hashedNumIndex, std::string userID, std::string encryptedPass );
		std::string Search(int index, std::string userID,std::string encryptedPassword);
		std::string IsNameInHashtable(std::string userID);






};

#endif
