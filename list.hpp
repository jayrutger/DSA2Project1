#ifndef LIST_H
#define LIST_H

#include "node.hpp"

class List
{
	private:
		Node* head;

	public:
		List();
		void InsertAtHead(std::string userID, std::string password);
		Node* GetHead();
};

#endif
