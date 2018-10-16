//Peon.cpp by Carp-Bezverhnii Maxim
#include "Peon.hpp"

Peon::Peon(std::string name): Victim(name) {
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon() {
	std::cout << "Bleuark..." << std::endl;
}

void	Peon::getPolymorphed() const {
	std::cout << this->getName() << " has been turned into a cute little sheep !" << std::endl;
}

std::ostream & operator<<(std::ostream & o, Peon const & src) {
	o << "I'm " << src.getName() << " and I like otters !" << std::endl;
	return o;
}