//SuperMutant.cpp by Carp-Bezverhnii Maxim
#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh ..." << std::endl;
}

void SuperMutant::takeDamage(int dmg) {
	dmg -= 3;

	if (_hp > 0 && dmg > 0)
	{
		if ( (_hp - dmg) < 0 )
			_hp = 0;
		else
			_hp -= dmg;
	}
}

