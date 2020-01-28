#include "nameloader.hpp"

int main()
{

	Nameloader obj;

	int arrNum=1;

	for(int i=1;i<90000;i++)
	{	
		obj.LoadNames(arrNum);
		arrNum++;
	}

	PasswordMaker passes;

	std::cout << passes.PasswordGenerator();

	return 0;
}
