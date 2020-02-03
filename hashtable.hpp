#ifndef HASHTABLE_H
#define HASHTABLE_H

#include "list.hpp"
#include <string>
#include <iostream>

// JAMES RUTGER
// Data Structures and Algorithsm 2
// Dr.John Coffey
// 
// Hashtable is a very simple class which only makes random 9 char
// passwords for "raw.txt"and also ciphers them for "encrypted.txt"


class Hashtable
{

	private:
		List* table[90000];
		const int MAX_ARRAY_SIZE = 90000;

	public:
		Hashtable();

		std::string GetNameAtIndex(int index);
		int MakeIndex(std::string name);
		void Insert(int hashedNumIndex, std::string userID, std::string encryptedPass );
		bool Search(std::string userID,std::string encryptedPassword);
		std::string IsNameInHashtable(std::string userID);






};

#endif
