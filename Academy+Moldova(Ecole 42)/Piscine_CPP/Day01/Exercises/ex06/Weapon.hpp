//Weapon.hpp by Carp-Bezverhnii Maxim
#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
public:
	Weapon(void);
	Weapon(std::string);
	~Weapon(void);

	std::string type;
	std::string const &	getType();
	void		setType(std::string);
};

#endif