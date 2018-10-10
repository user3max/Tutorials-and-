//NinjaTrap.hpp by Carp-Bezverhnii Maxim
#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#include <memory>

#include <iostream>

class NinjaTrap : public ClapTrap
{
public:
	NinjaTrap(std::string name);
	~NinjaTrap();

	void	ninjaShoebox(FragTrap & target);
	void	ninjaShoebox(ScavTrap & target);
	void	ninjaShoebox(NinjaTrap & target);

};

#endif