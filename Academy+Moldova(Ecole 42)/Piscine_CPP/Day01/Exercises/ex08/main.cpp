//main.cpp by Carp-Bezverhnii Maxim
#include "Human.hpp"

int main()
{
	std::string attack_type;
	Human *Hero = new Human();

	std::cout << "Select what type of attack you want to use: " << std::endl;
	std::cout << "0 - Melee Attack" << std::endl;
	std::cout << "1 - Ranged Attack" << std::endl;
	std::cout << "2 - Intimidating Shout" << std::endl;
	std::cout << "3 - Exit" << std::endl;
	
	while(attack_type != "3")
	{
		std::cin >> attack_type;
		Hero->action(attack_type, "Monster");
	}

	delete Hero;
	return 0;
}