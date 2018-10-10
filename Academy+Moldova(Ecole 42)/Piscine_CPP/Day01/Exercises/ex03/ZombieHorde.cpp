//ZombieHorde.cpp by Carp-Bezverhnii Maxim
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	int i = 0;
	std::string	nameList[] = {"Jery", "Lisa", "Mura", "Dred", "Naso", \
										"Tristan", "Gira", "Punil", "Greg", "Kusto"};

	zmb = new Zombie[n];
	while (i < n)
	{
		zmb[i].name = nameList[rand() % 10];
		zmb[i].type = "Horde";
		announce();
		i++;
	}

}

ZombieHorde::~ZombieHorde(void)
{
	delete [] zmb;
}

void ZombieHorde::announce()
{
	zmb->announce();
}