#include <iostream>

int main()
{
	int width;
	int height;

	std::cout << "너비를 입력하세요. : ";
	std::cin >> width;

	std::cout << "높이를 입력하세요. : ";
	std::cin >> height;
	for (int printHeight = 1; printHeight <= height; printHeight++)
	{
		for (int printWidth = 1; printWidth <= width; printWidth++)
		{
			std::cout << "*";
		}
		std::cout << "" << std::endl;
	}
}