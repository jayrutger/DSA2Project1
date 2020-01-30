#include "nameloader.hpp"

int main()
{

	Nameloader obj;

	int arrNum=0;
	int arrNum2=0;

	PasswordMaker passes;

	std::ofstream ofs("raw.txt",std::ofstream::out);
	
	for(int i=0;i<90000;i++)
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

	for(int j=0;j<90000;j++)
	{

		if(obj.NamePassLoader(j))//loads names and pass string into array
		{
			if(j<10){
//			std::cout << obj.GetNamePasses(j) << "\n"; //prints out 4 fun
			}
		}
		else
		{
			break;
		}
	}
	
	std::ofstream ofs2("encrypted.txt",std::ofstream::out);
	
	for(int z=0;z<90000;z++)
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

	return 0;
}
