//Victim.hpp by Carp-Bezverhnii Maxim
#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class Victim
{
	std::string		_name;
public:
	Victim(void);										// Coplien’s form
	Victim(std::string name);
	Victim(Victim const &);								// Coplien’s form
	~Victim(void);										// Coplien’s form

	Victim & operator=(Victim const &);					// Coplien’s form

	std::string		getName() const;

	virtual	void	getPolymorphed() const;
};

std::ostream & operator<<(std::ostream & o, Victim const & src);

#endif