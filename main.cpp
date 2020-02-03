#include "nameloader.hpp"
#include "hashtable.hpp"

int main()
{

	Nameloader obj;

	PasswordMaker passes;

	const int MAX_FILE_SIZE = 90000;
	const int TEST_NAME_LIMIT = 5;
	std::string testNames[5] = {"SMITH","JOHNSON","WILLIAMS","JONES","BROWN"};
	std::string illegalPasswords[5] = {"jdksltoyu","pdjtulatu","qpwidhtyu","nvmzowpryi","paowithcb"};	
	std::string legalPasswords[5] = {"nwlrbbmqb", "hcdarzowk","kyhiddqsc", "dxrjmowfr","xsjybldbe"};

	//LOADS NAMES FROM FILE AND PRINTS OUT TO "raw.txt" WITH RANDOM PASSWORD

	std::ofstream ofs("raw.txt",std::ofstream::out);
	
	for(int i=0;i<MAX_FILE_SIZE;i++)
	{	

		if(obj.LoadNames(i))
		{

			ofs << obj.GetName(i) << " ";
			ofs  << passes.PasswordGenerator() << "\n";

		}
	       	else
		{	
			break;
		}
	}

	ofs.close();


//STORES "raw.txt" NAMES AND PASSWORDS IN ARRAY FOR LATER USE//


	for(int j=0;j<MAX_FILE_SIZE;j++)
	{

		if(obj.NamePassLoader(j))//loads names and password string into array
		{
		}
		else
		{
			break;
		}
	}
	

//READS NAME & PASSWORDS FROM STORAGE ARRAY, CIPHERS PASSWORD AND PRINTS TO "encrypted.txt"//


	std::ofstream ofs2("encrypted.txt",std::ofstream::out);
	
	for(int z=0;z<MAX_FILE_SIZE;z++)
	{

		std::stringstream ss;

		ss << obj.GetNamePasses(z);
		std::string word1;	
		std::string word2;
		ss >> word1 >> word2;

		ofs2 << passes.Cipherer(word2) << "\n";//print to file instead of cout
		
		if(word2==""){
			break;
		}

	}

	ofs2.close();


//GETS ENCRYPTED PASSWORDS AND STORES WITH UNENCRYPTED USERID IN HASH TABLE
//MAKES HASH TABLE INDEX VALUE FROM USERID WITH hash.MakeIndex(userID)


	Hashtable hash;

	for(int i=0; i<MAX_FILE_SIZE;i++)
	{

		std::stringstream ss;

		ss << obj.GetNamePasses(i);
		std::string userID;	
		std::string password;//NOT ENCRYPTED YET
		std::string encryptedPassword;
		ss >> userID >> password;

		if(userID==""){
			break;
		}

		encryptedPassword = passes.Cipherer(password);

		hash.Insert(hash.MakeIndex(userID), userID, encryptedPassword);
	}


	std::cout << "Legal:\n";
	std::cout << "UserID   Password        Result\n";
	
	for(int i=0; i<TEST_NAME_LIMIT;i++)
	{
		std::string encryptedPasswordTest;

		encryptedPasswordTest = passes.Cipherer(legalPasswords[i]);

		bool searchResult = hash.Search(testNames[i],encryptedPasswordTest);

		if(testNames[i].size() > 7)
		{
			std::cout << testNames[i] << " " << legalPasswords[i] << "\t";
		}
		else
		{
			std::cout <<  testNames[i] << "\t " << legalPasswords[i] << "\t";
		}
		if(searchResult){ 
			std::cout << " Match\n";
		}
		else
		{
			std::cout << " No match\n";
		}
	}

	std::cout << "\nIllegal:\n";
	std::cout << "UserID   Password        Result\n";
	
	for(int i=0; i<TEST_NAME_LIMIT;i++)
	{
		std::string encryptedPasswordTest;

		encryptedPasswordTest = passes.Cipherer(illegalPasswords[i]);

		bool searchResult = hash.Search(testNames[i],encryptedPasswordTest);

		if(testNames[i].size() > 7)
		{
			std::cout << testNames[i] << " " << illegalPasswords[i] << "\t";
		}
		else
		{
			std::cout <<  testNames[i] << "\t " << illegalPasswords[i] << "\t";
		}
		if(searchResult){ 
			std::cout << " Match\n";
		}
		else
		{
			std::cout << " No match\n";
		}
	}

	return 0;
}
