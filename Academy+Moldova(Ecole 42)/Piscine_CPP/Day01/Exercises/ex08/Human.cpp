//Human.cpp by Carp-Bezverhnii Maxim \
	Visit this site www.cs.technion.ac.il/users/yechiel/c++-faq/array-memfnptrs.html \
	for little info about how to create and use array of pointer to member function.

#include "Human.hpp"

void	Human::meleeAttack(std::string const & target)
{
	std::cout << "Generate melee attack to kill " << target << std::endl;
}

void	Human::rangedAttack(std::string const & target)
{
	std::cout << "Generate ranged attack to kill " << target << std::endl;
}

void	Human::intimidatingShout(std::string const & target)
{
	std::cout << "Generate intimidating shout to kill " << target << std::endl;
}

void	Human::action(std::string const & action_name, std::string const & target)
{
	int i = 0;
	attack_type type[3] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};

	while (i < 3)
	{
		if(std::stoi(action_name) == i)
			(this->*type[i])(target);
		i++;
	}
}