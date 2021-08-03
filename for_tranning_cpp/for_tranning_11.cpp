#include <iostream>

int main()
{
	for (int fNumber = 1; fNumber <= 5; fNumber++)
	{
		for (int sNumber = 1; sNumber <= fNumber; sNumber++)
		{
			std::cout << sNumber;
		}
		std::cout << "" << std::endl;
	}

	return 0;
}
