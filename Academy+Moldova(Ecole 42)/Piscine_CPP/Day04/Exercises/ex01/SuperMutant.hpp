//SuperMutant.hpp by Carp-Bezverhnii Maxim
#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
	SuperMutant();
	virtual ~SuperMutant();

	void takeDamage(int);
};

#endif