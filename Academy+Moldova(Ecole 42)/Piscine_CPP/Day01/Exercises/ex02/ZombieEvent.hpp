//ZombieEvent by Carp-Bezverhnii Maxim
#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent
{
	std::string _type;		
public:
	ZombieEvent();
	~ZombieEvent();

	void setZombieType(std::string);
	Zombie*	newZombie(std::string name);
	Zombie*	randomChump(void);
};

#endif