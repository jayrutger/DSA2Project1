#include "hashtable.hpp"
#include <sstream>
Hashtable::Hashtable()
{
	for(int i=0;i<MAX_ARRAY_SIZE;i++)
	{
		table[i] = new List();
	}
}

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

void Hashtable::Insert(int hashedNumIndex, std::string userID, std::string encryptedPass)
{

	table[hashedNumIndex]->InsertAtHead(userID,encryptedPass);

}


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
