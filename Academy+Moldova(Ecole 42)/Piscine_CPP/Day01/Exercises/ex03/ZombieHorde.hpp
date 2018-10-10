//ZombieHorde.hpp by Carp-Bezverhnii Maxim
#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{
public:
	ZombieHorde(int n);
	~ZombieHorde(void);

	void announce(void);

	Zombie*	zmb;
};

#endif