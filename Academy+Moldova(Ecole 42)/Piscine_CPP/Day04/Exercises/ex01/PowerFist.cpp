//PowerFist.cpp by Carp-Bezverhnii Maxim
#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {
	//std::cout << "Constructor for PowerFist class" << std::endl;
}

PowerFist::~PowerFist() {
	//std::cout << "Destructor for PowerFist class" << std::endl;
}

void	PowerFist::attack() const {
	std::cout << "* pschhh... SBAM!*" << std::endl;
}