//Weapon.cpp by Carp-Bezverhnii Maxim
#include "Weapon.hpp"

Weapon::Weapon(void): type("none") {}

Weapon::Weapon(std::string str) : type(str) {}

Weapon::~Weapon() {}

std::string const &	Weapon::getType()
{
	return type;
}

void		Weapon::setType(std::string set_type)
{
	type = set_type;
}
