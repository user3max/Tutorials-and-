//megaphone.cpp by Carp-Bezverhnii Maxim
#include <iostream>

int main(int argc, char ** argv)
{
	int i = 1;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		int i = 1;
		while(argv[i] && i <= argc)
		{
			int j = 0;
			while(argv[i][j])
			{
				if(argv[i][j] >= 'a' && argv[i][j] <= 'z')
				{
					argv[i][j] = argv[i][j] - 32;
					std::cout << argv[i][j];
					j++;
				}
				else
				{
					std::cout << argv[i][j];
					j++;
				}
			}
			i++;
		}
		std::cout << std::endl;
	}
	return 0;
}