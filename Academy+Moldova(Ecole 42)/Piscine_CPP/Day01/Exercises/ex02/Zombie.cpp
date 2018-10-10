//Zombie.cpp by Carp-Bezverhnii Maxim
#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "New zombie is born ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->name << " is died..." << std::endl;
}

void Zombie::announce()
{
	std::cout << "<" << name << " (" << type << ")> Braiiiiiiinnnssss..." << std::endl;
}