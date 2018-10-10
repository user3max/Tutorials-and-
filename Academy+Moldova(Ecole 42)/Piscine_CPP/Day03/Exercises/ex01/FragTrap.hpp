//FragTrap.hpp by Carp-Bezverhnii Maxim
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>

class FragTrap
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
	FragTrap(std::string name);
	~FragTrap();

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	void	vaulthunter_dot_exe(std::string const & target);

};

#endif