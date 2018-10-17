//Character.cpp by Carp-Bezverhnii Maxim
#include "Character.hpp"

Character::Character(std::string const & name) : _name(name) , _AP(40), awp(NULL) {
	//std::cout << std::endl;
}

Character::~Character() {
	//std::cout << std::endl;
}


void Character::recoverAP() {
	if (this->_AP <= 30)
		this->_AP += 10;
	else if(this->_AP > 30)
		this->_AP = 40;

}

void Character::equip(AWeapon* weapon) {
	awp = weapon;
}

void Character::attack(Enemy* target) {
	if(awp != NULL && target != NULL)
	{
		if(_AP >= awp->getAPCost())
		{
			if (target->getHP() > 0)
			{
			_AP -= awp->getAPCost();
			std::cout << getName() << " attacks " << target->getType() << " with a " << awp->getName() << std::endl;
			awp->attack();
			target->takeDamage(awp->getDamage());
			if (target->getHP() <= 0)
				delete target;
			}
		}
		else
			std::cout << "You don't have enough AP !" << std::endl;
	}
}

std::string Character::getName() const {
	return this->_name;
}

int Character::getAP() const {
	return this->_AP;
}

std::ostream & operator<<(std::ostream & o, Character const & src) {
	if (src.awp == NULL)
		o << src.getName() << " has " << src.getAP() << " and is unarmed" << std::endl;
	else
		o << src.getName() << " has " << src.getAP() << " and wields a " << src.awp->getName() << std::endl;
	return o;
}