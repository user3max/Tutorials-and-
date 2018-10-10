//ScavTrap.hpp by Carp-Bezverhnii Maxim
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>

class ScavTrap
{

	unsigned int 			_HP;
	unsigned int 			_maxHP;
	unsigned int 			_EP;
	unsigned int			_maxEP;
	unsigned int 			_lvl;
	unsigned int 			_melleeAttackDmg;
	unsigned int 			_rangedAttackDmg;
	unsigned int 			_armDmgRed;
	std::string 	_name;

public:
	ScavTrap(std::string name);
	~ScavTrap();

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	void	challengeNewcomer(std::string const & target);

};

#endif