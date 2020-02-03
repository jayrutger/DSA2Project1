#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <string>

/*******************************************************************
 Student Name:JAMES RUTGER
 File Name: Node.hpp
 Assignment: Project 1 - Hash Table

 Data Structures and Algorithms 2
 Dr.John Coffey

 Class Description:
 Node is a basic class used to handle userID's and
 passwords for use in the linked lists.
*******************************************************************/

class Node
{
	private:
		std::string userID;
		std::string password;
		Node* next = nullptr;
	public:
		Node (std::string userID,std::string password, Node* next = nullptr);
		std::string GetName ();
		std::string GetPassword ();
		Node* GetNext ();
		void SetNext (Node* n);
};

#endif
