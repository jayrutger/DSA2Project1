#ifndef LIST_H
#define LIST_H

#include "node.hpp"

/*******************************************************************
 Student Name:JAMES RUTGER
 File Name: List.hpp
 Assignment: Project 1 - Hash Table

 Data Structures and Algorithms 2
 Dr.John Coffey

 Class Description:
 The list class works with node to hold extra elements put into the 
 hash table at the same index number.
*******************************************************************/

class List
{
	private:
		Node* head=nullptr;

	public:
		List();
		void InsertAtHead(std::string userID, std::string password);
		Node* GetHead();
};

#endif
