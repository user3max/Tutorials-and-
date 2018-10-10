//ClapTrap.cpp by Carp-Bezverhnii Maxim
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "Construct ClapTrap robot!" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Claa.. pp .. Traaaaaaaa .. p . p . pp ." << std::endl;
	return ;
}

void	ClapTrap::rangedAttack(std::string const & target) {
	std::cout << "'" << _name << "'' attacks " << target \
		<< " at range, causing " << _rangedAttackDmg \
		<< " points of damage !" << std::endl;
}
	
void	ClapTrap::meleeAttack(std::string const & target) {
	std::cout << "'" << _name << "' attacks " << target \
		<< " causing " << _melleeAttackDmg \
		<< " points of damage !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (_HP == 0)
	{
		std::cout << _name << " is already dead!" << std::endl;
	}
	else if (_HP >= 1 && (amount < (_HP + _armDmgRed)))
	{
		amount -= _armDmgRed;
		_HP = _HP - amount;
		std::cout << _name << " loses -" << amount << "HP" << std::endl;

		if (_HP > 0)
		{
			std::cout << _name << " stay alive after the attack" << std::endl;
			std::cout << "| " << _name << " | HP ( " << _HP << " ) | EP ( " << _EP <<" ) |" << std::endl;
		}
		else
		{
			std::cout << "Unfortunately, you're dead!" << std::endl;
		}
	}
	else
	{
		std::cout << "Unfortunately, you're dead! " << std::endl;
		_HP = 0;
	}
}
	
void	ClapTrap::beRepaired(unsigned int amount) {
	if (_HP == _maxHP)
	{
		std::cout << "You have already full HP" << std::endl;
	}
	else if (_HP < 100 && (_HP != 0))
	{
		std::cout << _name << " has been repaired with " << amount << " HP" << std::endl;
		_HP += amount;
		if (_HP > 100)
		{
			_HP = _maxHP;
		}
	}
	else if (_HP == 0)
	{
		std::cout << _name << " is already dead!" << std::endl;
	}
	std::cout << "| " << _name << " | HP ( " << _HP << " ) | EP ( " << _EP <<" ) |" << std::endl;
}

std::string ClapTrap::getName(void)
{
	return this->_name;
}