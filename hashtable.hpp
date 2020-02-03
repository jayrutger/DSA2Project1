#ifndef HASHTABLE_H
#define HASHTABLE_H

#include "list.hpp"
#include <string>
#include <iostream>

/*******************************************************************
 Student Name:JAMES RUTGER
 File Name: Hashtable.hpp
 Assignment: Project 1 - Hash Table

 Data Structures and Algorithms 2
 Dr.John Coffey

 Class Description:
 Hashtable is a very simple class which only makes random 9 char
 passwords for "raw.txt"and also ciphers them for "encrypted.txt".
*******************************************************************/

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
