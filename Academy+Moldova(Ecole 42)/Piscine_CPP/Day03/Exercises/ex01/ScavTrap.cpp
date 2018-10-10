//ScavTrap.cpp by Carp-Bezverhnii Maxim
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : _HP(100), _maxHP(100), _EP(50), _maxEP(50), _lvl(1), \
	_melleeAttackDmg(20), _rangedAttackDmg(15), _armDmgRed(3), _name(name) {
		std::cout << "Hi I'm and ScavTrap, my Clap name is '" << this->_name << "'" << std::endl;
		std::cout << "| " << this->_name << " | HP ( " << this->_HP << " ) | EP ( " << this->_EP <<" ) |" << std::endl;
		return ;
	}

ScavTrap::~ScavTrap() {
	std::cout << "| " << this->_name << " | HP ( " << this->_HP << " ) | EP ( " << this->_EP <<" ) |" << std::endl;
	std::cout << "Claa.. pp .. Traaaaaaaa .. p . p . pp ." << std::endl;
	return ;
}

void	ScavTrap::rangedAttack(std::string const & target) {
	std::cout << "'" << this->_name << "'' attacks " << target \
		<< " at range, causing " << this->_rangedAttackDmg \
		<< " points of damage !" << std::endl;
}
	
void	ScavTrap::meleeAttack(std::string const & target) {
	std::cout << "'" << this->_name << "' attacks " << target \
		<< " causing " << this->_melleeAttackDmg \
		<< " points of damage !" << std::endl;
}
	
void	ScavTrap::takeDamage(unsigned int amount) {
	if (this->_HP == 0)
	{
		std::cout << this->_name << " is already dead!" << std::endl;
	}
	else if (this->_HP >= 1)
	{
		amount -= this->_armDmgRed;
		this->_HP = this->_HP - amount;
		std::cout << this->_name << " loses -" << amount << "HP" << std::endl;
		if (this->_HP > 0)
		{
			std::cout << this->_name << " stay alive after the attack" << std::endl;
			std::cout << "| " << this->_name << " | HP ( " << this->_HP << " ) | EP ( " << this->_EP <<" ) |" << std::endl;
		}
		else
		{
			std::cout << "Unfortunately, you're dead!" << std::endl;
		}
	}
}
	
void	ScavTrap::beRepaired(unsigned int amount) {
	if (this->_HP == this->_maxHP)
	{
		std::cout << "You have already full HP" << std::endl;
	}
	else if (this->_HP < 100)
	{
		std::cout << this->_name << " has been repaired with " << amount << " HP" << std::endl;
		this->_HP += amount;
		if (this->_HP > 100)
		{
			this->_HP = this->_maxHP;
		}
	}
	std::cout << "| " << this->_name << " | HP ( " << this->_HP << " ) | EP ( " << this->_EP <<" ) |" << std::endl;
}

void	ScavTrap::challengeNewcomer(std::string const & target) {
	std::string funny_attack[] = {"dance", "sing"};

	std::cout <<  this->_name <<" " << funny_attack[(rand() % 2)] << " for " << target << std::endl;
	
}