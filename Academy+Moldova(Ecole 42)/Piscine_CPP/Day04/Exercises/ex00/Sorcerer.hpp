//Sorcerer.hpp by Carp-Bezverhnii Maxim
#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
	std::string		_name;
	std::string		_title;
public:
	Sorcerer(void);										// Coplien’s form
	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const &);							// Coplien’s form
	~Sorcerer(void);									// Coplien’s form

	Sorcerer & operator=(Sorcerer const &);				// Coplien’s form

	virtual std::string	getName() const;
	virtual std::string	getTitle() const;

	void		polymorph(Victim const &) const;
};

std::ostream & operator<<(std::ostream & o, Sorcerer const & src);

#endif