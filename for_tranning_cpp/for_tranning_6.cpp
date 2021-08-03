#include <iostream>

int main()
{
	int fNumber;

	std::cout << "몇 단을 출력할까요> : ";
	std::cin >> fNumber;

	for (int sNumber = 1; sNumber <= 9; sNumber++)
	{
		std::cout << fNumber << " x " << sNumber << " = " << fNumber * sNumber << std::endl;
	}

	return 0;
}