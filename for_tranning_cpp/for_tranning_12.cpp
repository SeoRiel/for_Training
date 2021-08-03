#include <iostream>

int main()
{
	int height;

	std::cout << "삼각형 높이를 입력하세요. : ";
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