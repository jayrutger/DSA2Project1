#include "node.hpp"


/*******************************************************************
 Student Name:JAMES RUTGER
 File Name: Node.cpp
 Assignment: Project 1 - Hash Table

 Data Structures and Algorithms 2
 Dr.John Coffey

 Class Description:
 Node is a basic class used to handle userID's and
 passwords for use in the linked lists.
*******************************************************************/


/*******************************************************************
 * Node constructor just sets the member variables to their given
 * parameter values.
 ******************************************************************/
Node::Node (std::string userID,std::string password, Node* n)
{
	this->userID = userID;
	this->password = password;
	this->next = n;
}

/*******************************************************************
 * GetName returns userID member variable
 ******************************************************************/
std::string Node::GetName()
{
	return this->userID;
}

/*******************************************************************
 * GetPassword returns password member variable
 ******************************************************************/
std::string Node::GetPassword()
{
	return this->password;
}

/*******************************************************************
 * SetNext sets the current nodes next node to the given parameter
 ******************************************************************/
void Node::SetNext(Node* n)
{
	this->next = n;
}

/*******************************************************************
 * GetNext returns the node that is next after the current node
 ******************************************************************/
Node* Node::GetNext()
{
	return this->next;
}
