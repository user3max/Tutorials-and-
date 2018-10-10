//Human.hpp by Carp-Bezverhnii Maxim
#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class Human
{
	Brain	*br;
public:
	Human();
	~Human();

	std::string identify();
	Brain& getBrain();
};

#endif