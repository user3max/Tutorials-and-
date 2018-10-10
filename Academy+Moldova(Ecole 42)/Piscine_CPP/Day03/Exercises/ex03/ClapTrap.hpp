//ClapTrap.hpp by Carp-Bezverhnii Maxim

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
protected:
	unsigned int 			_HP;
	unsigned int 			_maxHP;
	unsigned int 			_EP;
	unsigned int			_maxEP;
	unsigned int 			_lvl;
	unsigned int 			_melleeAttackDmg;
	unsigned int 			_rangedAttackDmg;
	unsigned int 			_armDmgRed;
	std::string 			_name;
public:
	ClapTrap();
	~ClapTrap();
	
	std::string getName();

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif