//ZombieEvent.cpp by Carp-Bezverhnii Maxim
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void){}

ZombieEvent::~ZombieEvent(void){}

void ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	Zombie* zmb = new Zombie;

	zmb->name = name;
	zmb->type = this->_type;


	zmb->announce();
	
	return(zmb);
}

Zombie*	ZombieEvent::randomChump(void)
{
	std::string	nameList[] = {"Jery", "Lisa", "Mura", "Dred", "Naso", \
										"Tristan", "Gira", "Punil", "Greg", "Kusto"};
	Zombie* zmb = newZombie(nameList[rand() % 10]);

	

	return (zmb);
}