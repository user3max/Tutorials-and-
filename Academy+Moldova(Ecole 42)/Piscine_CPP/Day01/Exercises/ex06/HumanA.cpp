//HumanA.cpp by Carp-Bezverhnii Maxim
#include "HumanA.hpp"

HumanA::HumanA(std::string str,Weapon& type) : name(str) , weapon(type) {}

HumanA::~HumanA() {}
	
void HumanA::attack()
{
	std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}