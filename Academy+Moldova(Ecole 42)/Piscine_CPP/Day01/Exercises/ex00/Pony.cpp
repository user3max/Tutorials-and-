//Pony.cpp by Carp-Bezverhnii Maxim
#include "Pony.hpp"

Pony::Pony(void)
{
	std::cout << "Say \"Hi\" to pony"  << std::endl;
}

Pony::~Pony(void)
{
	std::cout << "Say \"goodbye\" to " << getNr() << " pony " << getName() << std::endl;
}

void Pony::setName(std::string name)
{
	this->_name = name;
}

void Pony::setNr(std::string nr)
{
	this->_nr = nr;
}

std::string Pony::getName()
{
	return this->_name;
}

std::string Pony::getColor()
{
	return this->_color;
}

std::string Pony::getNr()
{
	return this->_nr;
}