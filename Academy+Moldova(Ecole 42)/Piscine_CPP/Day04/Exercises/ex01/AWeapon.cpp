//AWeapon.cpp by Carp-Bezverhnii Maxim
#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage) {
	//std::cout << "Constructor for abstract AWeapon class" << std::endl;
}

AWeapon::~AWeapon() {
	//std::cout << "Destrcutor for abstract AWeapon class" << std::endl;
}

std::string AWeapon::getName() const {
	return this->_name;
}

int	AWeapon::getAPCost() const {
	return this->_apcost;
}

int AWeapon::getDamage() const {
	return this->_damage;
}