//main.cpp by Carp-Bezverhnii Maxim
#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::string print;
		while(std::getline(std::cin, print))
			std::cout << print << std::endl;
	}
	else
	{
		int i = 1;
		std::ifstream file;
		std::string buffer;
		while(i < argc)
		{
			file.open(argv[i]);
			if(file.is_open())
			{
				while(std::getline(file, buffer))
				{
					std::cout << buffer << std::endl;
				}
				file.close();	
			}
			else
			{
				std::cout << "cat: " << argv[i] << ": No such file or directory" << std::endl;
			}
			i++;
		}
	}
	return 0;
}