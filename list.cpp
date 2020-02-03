#include "list.hpp"

/*******************************************************************
 Student Name:JAMES RUTGER
 File Name: List.cpp
 Assignment: Project 1 - Hash Table

 Data Structures and Algorithms 2
 Dr.John Coffey

 Class Description:
 The list class works with node to hold extra elements put into the 
 hash table at the same index number.
*******************************************************************/

/*******************************************************************
 * List constructor seats the initial Node* heads to nullptr since
 * they are all empty initially.
 ******************************************************************/
List::List ()
{
	this->head = nullptr;
}

/*******************************************************************
 * InsertAtHead assigns a new node with the given userID and
 * password as the head of the list
 ******************************************************************/
void List::InsertAtHead (std::string userID,std::string password)
{
	Node* newNode = new Node(userID,password, this->head);
	this->head = newNode;
}

/*******************************************************************
 * GetHead return the Node* head of the list
 ******************************************************************/
Node* List::GetHead()
{
	return this->head;
}


