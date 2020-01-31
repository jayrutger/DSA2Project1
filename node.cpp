#include "node.hpp"

Node::Node (std::string userID,std::string password, Node* n)
{
	this->userID = userID;
	this->password = password;
	this->next = n;
}

std::string Node::GetName()
{
	return this->userID;
}


std::string Node::GetPassword()
{
	return this->password;
}

void Node::SetNext(Node* n)
{
	this->next = n;
}

Node* Node::GetNext()
{
	return this->next;
}
