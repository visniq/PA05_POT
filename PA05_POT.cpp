#include <iostream>




int main()
{
	long long int numoftries{ 0 };
	long long int num1{ 0 };
	long long int num2{ 0 };



	std::cin >> numoftries;


	for (int i = 0; i < numoftries; i++)
	{
		std::cin >> num1 >> num2;
		num1 = num1 % 10;


		if (num2 > 0) {
			if (num2 > 10)
				num2 = num2 % 4;
			if (num1 == 1)
			{
				std::cout << '1' << '\n';

			}
			else if (num1 == 0)
			{
				std::cout << '0' << '\n';

			}
			else if (num1 == 2)
			{
				int patternfor2[4]{ 1,2,4,8 };
				std::cout << patternfor2[num2] << '\n';

			}
			else if (num1 == 3)
			{
				int patternfor3[4]{ 1,3,9,7 };
				std::cout << patternfor3[num2] << '\n';

			}
			else if (num1 == 4)
			{
				int patternfor4[4]{ 1,4,6,4 };
				std::cout << patternfor4[num2] << '\n';

			}
			else if (num1 == 5)
			{
				std::cout << '5' << '\n';

			}
			else if (num1 == 6)
			{
				std::cout << '6' << '\n';

			}
			else if (num1 == 7)
			{
				int patternfor7[4]{ 1,7,9,3 };
				std::cout << patternfor7[num2] << '\n';

			}
			else if (num1 == 8)
			{
				int patternfor8[4]{ 1,8,4,2 };
				std::cout << patternfor8[num2] << '\n';

			}
			else if (num1 == 9)
			{
				int patternfor9[4]{ 1,9,1,9 };
				std::cout << patternfor9[num2] << '\n';

			}

		}
		else
			std::cout << '1' << '\n';

	}



	return 0;
}