//ex04.cpp by Carp-Bezverhnii Maxim
#include <iostream>

int main()
{
	std::string		str = "HI THIS IS BRAIN";

	std::string* ptrStr = &str;
	std::string& refStr = str;

	std::cout << "Display string using pointer " << *ptrStr << std::endl;
	std::cout << "Display string using reference " << refStr << std::endl;
}
