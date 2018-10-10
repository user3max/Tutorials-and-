//Zombie.hpp by Carp-Bezverhnii Maxim
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{

public:
	std::string type;
	std::string name;

	Zombie();
	~Zombie();

	void announce(void);
};

#endif