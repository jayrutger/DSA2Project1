#ifndef LIST_H
#define LIST_H

#include "node.hpp"

// JAMES RUTGER
// Data Structures and Algorithms 2
// Dr.John Coffey
//
// Class Description:
//
// List class works with node to hold extra elements put into the hash table
// at the same index number.
//

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
