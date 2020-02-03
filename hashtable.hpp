#ifndef HASHTABLE_H
#define HASHTABLE_H

#include "list.hpp"
#include <string>
#include <iostream>

// JAMES RUTGER
// Data Structures and Algorithms 2
// Dr.John Coffey
//
// Class Description:
//
// Hashtable is a very simple class which only makes random 9 char
// passwords for "raw.txt"and also ciphers them for "encrypted.txt".
//
// Main Functions:
//
// MakeIndex(); makes the very unique array index number for hash table.
// Insert(int, string, string); inserts userID and password at given index number.
// Search(string,string); searches hash table for given name and password to match.
//


class Hashtable
{

	private:
		List* table[90000];
		const int MAX_ARRAY_SIZE = 90000;

	public:
		Hashtable();
		int MakeIndex(std::string name);
		void Insert(int hashedNumIndex, std::string userID, std::string encryptedPass );
		bool Search(std::string userID,std::string encryptedPassword);






};

#endif
