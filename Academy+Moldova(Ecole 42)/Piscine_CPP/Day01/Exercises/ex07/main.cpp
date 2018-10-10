//main.cpp by Carp-Bezverhnii Maxim
#include <iostream>
#include <string>
#include <fstream>

void	replace_function(std::string filename, std::string str1, std::string str2)
{
	std::ifstream file;
	std::string buffer;

	file.open(filename);
	if (!file.is_open())
	{
		std::cout << "Can't open file.Check please filename!" << std::endl;
	}
	else
	{
		std::ofstream replace_file(filename + ".replace");
		
		while(std::getline(file, buffer))
		{
			std::size_t index = buffer.find(str1, 0);
			while (index != std::string::npos)
			{
				buffer.replace(index, str1.length(), str2);
				index = buffer.find(str1, index + str2.length());
			}
			replace_file << buffer + "\n";
		}
		replace_file.close();
		file.close();
	}
}

int main(int argc, char **argv)
{
	if(argc == 4 && argv[1] != NULL && argv[2] != NULL && argv[3] != NULL)
	{
		replace_function(argv[1], argv[2], argv[3]);
	}
	else
		std::cout << "You must have 4 arguments(./replace filename str1 str2)" << std::endl;
	return 0;
}