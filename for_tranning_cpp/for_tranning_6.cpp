#include <iostream>

int main()
{
	int fNumber;

	std::cout << "�� ���� ����ұ��> : ";
	std::cin >> fNumber;

	for (int sNumber = 1; sNumber <= 9; sNumber++)
	{
		std::cout << fNumber << " x " << sNumber << " = " << fNumber * sNumber << std::endl;
	}

	return 0;
}