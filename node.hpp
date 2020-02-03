#pragma once

#include <iostream>
#include <string>

// JAMES RUTGER
// Data Structures and Algorithsm 2
// Dr.John Coffey
// 
// Node is a basic class used to handle userID's and
// passwords for use in the linked lists
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
