#include <iostream>

int main()
{
	for (int fNumber = 2; fNumber <= 9; fNumber++)
	{
		for (int sNumber = 1; sNumber <= 9; sNumber++)
		{
			std::cout << fNumber << " x " << sNumber << " = " << fNumber * sNumber << std::endl;
		}
	}

	return 0;
}