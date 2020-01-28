#include "nameloader.hpp"
#include <fstream>

int main()
{

	Nameloader obj;

	int arrNum=0;

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

	ofs.close();

//	std::cout << passes.PasswordGenerator();

	return 0;
}
