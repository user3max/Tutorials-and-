//PlasmaRifle.cpp by Carp-Bezverhnii Maxim
#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {
	//std::cout << "Constructor for PlasmaRfile class" << std::endl;
}

PlasmaRifle::~PlasmaRifle() {
	//std::cout << "Destructor for PlasmaRfile class" << std::endl;
}

void PlasmaRifle::attack() const{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}