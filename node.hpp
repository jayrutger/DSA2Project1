#pragma once

#include <iostream>
#include <string>

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
