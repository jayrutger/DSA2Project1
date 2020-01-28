#include "nameloader.hpp"
#include <fstream>

int main()
{

	Nameloader obj;

	int arrNum=0;
	int arrNum2=0;

	PasswordMaker passes;

	std::ofstream ofs("raw.txt",std::ofstream::out);
	
	for(int i=1;i<90000;i++)
	{	

		obj.LoadNames(arrNum);
	
		ofs << obj.GetName(arrNum) << " ";
		ofs  << passes.PasswordGenerator() << "\n";
		arrNum++;
		if(obj.LoadNames(arrNum)==false)
		{
				break;
		}

	}


	for(int j=1;j<90000;j++)
	{
		obj.NamePassLoader(arrNum2);
		std::cout << obj.GetNamePasses(arrNum2);
		std::cout << "\n";
		arrNum2++;
		if(j==10){break;}
		if(obj.NamePassLoader(arrNum2)==false)
		{
				break;
		}
	}

	ofs.close();

	return 0;
}
