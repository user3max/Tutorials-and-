//Peon.hpp by Carp-Bezverhnii Maxim
#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim
{
public:
	Peon(void);								// Coplien’s form
	Peon(std::string name);
	Peon(Peon & src);						// Coplien’s form
	~Peon(void);							// Coplien’s form

	Peon & operator=(Peon const &);			// Coplien’s form

	void	getPolymorphed() const;
};

std::ostream & operator<<(std::ostream & o, Peon const & src);

#endif