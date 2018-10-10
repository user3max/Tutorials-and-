//FragTrap.cpp by Carp-Bezverhnii Maxim
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : _HP(100), _maxHP(100), _EP(100), _maxEP(100), _lvl(1), \
	_melleeAttackDmg(30), _rangedAttackDmg(20), _armDmgRed(5), _name(name) {
		std::cout << "Hi I'm an FragTrap, my Clap name is '" << this->_name << "'" << std::endl;
		std::cout << "| " << this->_name << " | HP ( " << this->_HP << " ) | EP ( " << this->_EP <<" ) |" << std::endl;
		return ;
	}

FragTrap::~FragTrap() {
	std::cout << "| " << this->_name << " | HP ( " << this->_HP << " ) | EP ( " << this->_EP <<" ) |" << std::endl;
	std::cout << "Cla.. pp .. Traaaaaaaa .. p . p . pp ." << std::endl;
	return ;
}

void	FragTrap::rangedAttack(std::string const & target) {
	std::cout << "'" << this->_name << "'' attacks " << target \
		<< " at range, causing " << this->_rangedAttackDmg \
		<< " points of damage !" << std::endl;
}
	
void	FragTrap::meleeAttack(std::string const & target) {
	std::cout << "'" << this->_name << "' attacks " << target \
		<< " causing " << this->_melleeAttackDmg \
		<< " points of damage !" << std::endl;
}
	
void	FragTrap::takeDamage(unsigned int amount) {
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
	
void	FragTrap::beRepaired(unsigned int amount) {
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

void	FragTrap::vaulthunter_dot_exe(std::string const & target) {
	std::string funny_attack[] = {"Laser", "Heat-Seeking Missile", "Proximity Mines", "Stasis Trap", "Flak Cannon"};

	if (this->_EP < 25)
	{
		std::cout << "You don't have enough EP for this action!" << std::endl;
	}
	else
	{
		this->_EP -= 25;
		std::cout <<  this->_name <<" use " << funny_attack[(rand() % 5)] << " attack on " << target << std::endl;
	}
	std::cout << "| " << this->_name << " | HP ( " << this->_HP << " ) | EP ( " << this->_EP <<" ) |" << std::endl;
}