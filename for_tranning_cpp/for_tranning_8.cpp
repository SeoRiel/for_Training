#include <iostream>

int main()
{
	for (int fDice = 1; fDice <= 6; fDice++)
	{
		for (int sDice = 1; sDice <= 6; sDice++)
		{
			if (fDice + sDice == 6)
			{
				std::cout << "ù��° �ֻ��� : " << fDice << " " << "�ι�° �ֻ��� : " << sDice << std::endl;
			}
		}
	}
}
