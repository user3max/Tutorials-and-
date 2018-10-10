//HumanA.hpp by Carp-Bezverhnii Maxim
#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Weapon.hpp"

class HumanA
{
public:
	HumanA();
	HumanA(std::string, Weapon&);
	~HumanA();

	std::string name;
	Weapon& weapon;
	void attack();
};

#endif