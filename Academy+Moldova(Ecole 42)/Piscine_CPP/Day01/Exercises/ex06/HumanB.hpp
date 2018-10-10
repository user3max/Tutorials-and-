//HumanB.hpp by Carp-Bezverhnii Maxim
#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
public:
	HumanB();
	HumanB(std::string);
	~HumanB();

	Weapon* weapon;
	std::string name;
	void attack();
	void setWeapon(Weapon&);
};

#endif