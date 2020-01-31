#include "list.hpp"

List::List ()
{
	this->head = nullptr;
}

void List::InsertAtHead (std::string userID,std::string password)
{
	Node* newNode = new Node(userID,password, this->head);
	this->head = newNode;
}

Node* List::GetHead()
{
	return this->head;
}


