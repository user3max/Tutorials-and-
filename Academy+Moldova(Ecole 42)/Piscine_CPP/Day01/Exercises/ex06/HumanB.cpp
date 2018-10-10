//HumanB.cpp by Carp-Bezverhnii Maxim
#include "HumanB.hpp"

HumanB::HumanB() {}

HumanB::HumanB(std::string str) : name(str) {}

HumanB::~HumanB() {}
	
void HumanB::attack()
{
	std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& new_weapon)
{
	weapon = &new_weapon;
}