//FragTrap.cpp by Carp-Bezverhnii Maxim
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) {
	_HP = 100;
	_maxHP = 100;
	_EP = 100;
	_maxEP = 100;
	_lvl = 1;
	_name = name;
	_melleeAttackDmg = 30;
	_rangedAttackDmg = 20;
	_armDmgRed = 5;
	std::cout << "Loading ... all modules" << std::endl;
	std::cout << "New Frag Frag Clap is created... " << "Hi, my new friend, my Frag Clap Name is " << _name << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Robot with name '" << _name << "' was destroyed!" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target) {
	std::string funny_attack[] = {"Laser", "Heat-Seeking Missile", "Proximity Mines", "Stasis Trap", "Flak Cannon"};

	if (this->_EP < 25)
	{
		std::cout << "You don't have enough EP for this action!" << std::endl;
	}
	else if(this->_HP == 0)
	{
		std::cout << this->_name << " is already dead!" << std::endl;
	}
	else
	{
		this->_EP -= 25;
		std::cout <<  this->_name <<" use " << funny_attack[(rand() % 5)] << " attack on " << target << std::endl;
	}
	std::cout << "| " << this->_name << " | HP ( " << this->_HP << " ) | EP ( " << this->_EP <<" ) |" << std::endl;
}