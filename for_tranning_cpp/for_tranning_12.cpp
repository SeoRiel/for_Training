#include <iostream>

int main()
{
	int height;

	std::cout << "�ﰢ�� ���̸� �Է��ϼ���. : ";
	std::cin >> height;

	for (int printWidth = 1; printWidth <= height; printWidth++)
	{
		for (int space = height; space > printWidth; space--)
		{
			std::cout << " ";
		}

		for (int printHeight = 1; printHeight <= height; printHeight++)
		{
			if (printWidth >= printHeight)
			{
				std::cout << "*";
			}
			std::cout << " ";
		}
		std::cout << "" << std::endl;
	}
	return 0;
}