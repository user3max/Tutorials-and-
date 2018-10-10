//Human.hpp by Carp-Bezverhnii Maxim
#ifndef HUMAN_HPP
# define HUMAN_HPP

#include <iostream>
#include <string>

class Human
{
private:
	void	meleeAttack(std::string const & target);
	void	rangedAttack(std::string const & target);
	void	intimidatingShout(std::string const & target);
public:
	void	action(std::string const & action_name, std::string const & target);
};

typedef void (Human::*attack_type)(std::string const & target);

#endif