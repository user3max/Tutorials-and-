//main.cpp by Carp-Bezverhnii Maxim
#include "ZombieHorde.hpp"

int main()
{
	int n;

	std::cout << "Enter how much zombie you want to create?" << std::endl;
	std::cin >> n;
	ZombieHorde	zmb(n);
	
	return 0;
}
