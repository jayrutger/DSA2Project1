#include "hashtable.hpp"

Hashtable::Hashtable()
{
	for(int i=0;i<90000;i++)
	{
		table[i] = new List();
	}
}

int Hashtable::MakeIndex(std::string name)
{
	int total;
	int numCount=0;
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
			total = total + int(c)*numCount*7;
		}

		else if(numCount == 2)
		{
			total = total +int(c)*numCount*7;
		}

		else if(numCount == 3)
		{
			total = total + int(c)*numCount*7;
		}

		else if(numCount == 4)
		{
			total = total + int(c)*numCount*7;
		}

		numCount++;

	}

	total = total%90000;//ensures never OOB 

	return total;
}

void Hashtable::Insert(int hashedNumIndex, std::string userID, std::string encryptedPass)
{

	table[hashedNumIndex]->InsertAtHead(userID,encryptedPass);

}

std::string Hashtable::IsNameInHashtable(std::string userID)
{
	int index = MakeIndex(userID);

	std::string name = "DEFAULT\n";

	if(table[index]->GetHead() == nullptr)//Nothing there, no match
	{
		return "null\n";
	}

	name = table[index]->GetHead()->GetName() + "\n";
	
	return name;

}

std::string Hashtable::Search(int index, std::string userID,std::string encryptedPassword)
{	

//	int index = MakeIndex(userID);

	if(table[index]->GetHead() == nullptr)//Nothing there, no match
	{
		return "nullptr";
	}

	else if(table[index]->GetHead()->GetName() == userID)//Name match, check password
	{
		if(table[index]->GetHead()->GetPassword() == encryptedPassword)//Password Matches
		{
			return "password matches at head";
		}
		else
		{
			return "name match no pass match"; //Password didnt match
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
					return "pass match after next node";
				}
				else
				{
					return "next node wrong pass"; //Password didnt match
				}
			}
			else
			{
				temp = temp->GetNext();
			}	
		}

	}


	return "last result, false";
}
