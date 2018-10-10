//ScavTrap.cpp by Carp-Bezverhnii Maxim

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) {
	_HP = 100;
	_maxHP = 100;
	_EP = 50;
	_maxEP = 50;
	_lvl = 1;
	_name = name;
	_melleeAttackDmg = 20;
	_rangedAttackDmg = 15;
	_armDmgRed = 3;
	std::cout << "Loading ... all modules" << std::endl;
	std::cout << "New Scav Scav Clap is created... " << "Hi, my new friend, my Scav Clap Name is " << _name << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Robot with name '" << _name << "' was destroyed!" << std::endl;
}

void	ScavTrap::challengeNewcomer(std::string const & target) {
	std::string funny_attack[] = {"dance", "sing"};

	if (this->_HP > 0)
	{
		std::cout <<  this->_name <<" " << funny_attack[(rand() % 2)] << " for " << target << std::endl;
	}
	else
	{
		std::cout << this->_name << " is already dead!" << std::endl;
	}
	
}