#include <iostream>

int main()
{
	int fNumber = 2;

	for (int sNumber = 1; sNumber <= 9; sNumber++)
	{
		std::cout << fNumber << " x " << sNumber << " = " << fNumber * sNumber << std::endl;
	}

	return 0;
}