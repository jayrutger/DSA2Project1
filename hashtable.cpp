#include "hashtable.hpp"
#include <sstream>


/*******************************************************************
 Student Name:JAMES RUTGER
 File Name: Hashtable.cpp
 Assignment: Project 1 - Hash Table

 Data Structures and Algorithms 2
 Dr.John Coffey

 Class Description:
 Hashtable is a very simple class which only makes random 9 char
 passwords for "raw.txt"and also ciphers them for "encrypted.txt".
*******************************************************************/


/*******************************************************************
 * Constructor initializes hash table array of type List*.
 ******************************************************************/
Hashtable::Hashtable()
{
	for(int i=0;i<MAX_ARRAY_SIZE;i++)
	{
		table[i] = new List();
	}
}

/*******************************************************************
 * MakeIndex creates and returns an index for the hash table based 
 * on the input userID.
 ******************************************************************/
int Hashtable::MakeIndex(std::string name)
{
	int total=0;
	int numCount=0;//Adds variety to index number for each name
	for(char &c : name)
	{

		if(numCount > 4)
		{
			numCount = 0;
		}

		else if(numCount == 0)
		{
			total = total + int(c)*numCount*7;
		}

		else if(numCount == 1)
		{
			total = total + int(c)*numCount*11;
		}

		else if(numCount == 2)
		{
			total = total +int(c)*numCount*13;
		}

		else if(numCount == 3)
		{
			total = total + int(c)*numCount*17;
		}

		else if(numCount == 4)
		{
			total = total + int(c)*numCount*27;
		}

		numCount++;

	}

	total = total%MAX_ARRAY_SIZE;//ensures never OOB of array

	return total;
}

/*******************************************************************
 * Insert takes the calculated hash table index number from MakeIndex,
 * userID, and encrypted password to store into the hash table.
 ******************************************************************/
void Hashtable::Insert(int hashedNumIndex, std::string userID, std::string encryptedPass)
{

	table[hashedNumIndex]->InsertAtHead(userID,encryptedPass);

}

/*******************************************************************
 * Search looks through the hash table with the given userID and
 * password to see if it matches any stored userID and password
 * combination. Returns true/false depending on if they match.
 ******************************************************************/
bool Hashtable::Search(std::string userID,std::string encryptedPassword)
{	
	int index = MakeIndex(userID);

	if(table[index]->GetHead() == nullptr)//Nothing there, no match
	{
		return false;
	}

	else if(table[index]->GetHead()->GetName() == userID)//Name match, check password
	{
		if(table[index]->GetHead()->GetPassword() == encryptedPassword)//Password Matches
		{
			return true;
		}
		else
		{
			return false; //Password didnt match
		}
		
	}
	
	else if(table[index]->GetHead()->GetName() != userID)//No name match, check next node
	{
		Node* temp = table[index]->GetHead()->GetNext();

		while(temp != nullptr)
		{
			if(temp->GetName() == userID)
			{
				if(temp->GetPassword() == encryptedPassword)
				{
					return true;//Pass match next nodes
				}
				else
				{
					return false; //Password didnt match
				}
			}
			else
			{
				temp = temp->GetNext();
			}	
		}

	}


	return false;
}
