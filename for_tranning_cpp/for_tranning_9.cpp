#include <iostream>

int main()
{
	int inputNumber;

	std::cout << "Up and Down Game!" << std::endl;

	while (true)
	{
		std::cout << "�Է� : ";
		std::cin >> inputNumber;

		if (inputNumber < 6)
		{
			std::cout << "�� ū ���� �Է��ϼ���." << std::endl;
		}
		else if (inputNumber > 6)
		{
			std::cout << "�� ���� ���� �Է��ϼ���." << std::endl;
		}
		else if (inputNumber == 6)
		{
			std::cout << "�����Դϴ�!" << std::endl;
			break;
		}
	}

	return 0;
}