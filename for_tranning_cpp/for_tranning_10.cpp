#include <iostream>

int main()
{
	int width;
	int height;

	std::cout << "�ʺ� �Է��ϼ���. : ";
	std::cin >> width;

	std::cout << "���̸� �Է��ϼ���. : ";
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