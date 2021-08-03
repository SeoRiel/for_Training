#include <iostream>

int main()
{
	int inputNumber;

	std::cout << "Up and Down Game!" << std::endl;

	while (true)
	{
		std::cout << "입력 : ";
		std::cin >> inputNumber;

		if (inputNumber < 6)
		{
			std::cout << "더 큰 수를 입력하세요." << std::endl;
		}
		else if (inputNumber > 6)
		{
			std::cout << "더 작은 수를 입력하세요." << std::endl;
		}
		else if (inputNumber == 6)
		{
			std::cout << "정답입니다!" << std::endl;
			break;
		}
	}

	return 0;
}