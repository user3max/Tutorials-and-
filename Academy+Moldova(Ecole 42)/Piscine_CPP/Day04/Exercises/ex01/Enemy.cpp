//Enemy.cpp by Carp-Bezverhnii Maxim
#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) : _hp(hp) , _type(type) {
	//std::cout << "Constructor for Enemy class" << std::endl;
}

Enemy::~Enemy() {
	//std::cout << "Destructor for Enemy class" << std::endl;
}

std::string Enemy::getType() const {
	return this->_type;
}

int Enemy::getHP() const {
	return this->_hp;
}

void Enemy::takeDamage(int dmg) {
	if (_hp > 0 && dmg > 0)
	{
		if ( (_hp - dmg) < 0 )
			_hp = 0;
		else
			_hp -= dmg;
	}
}