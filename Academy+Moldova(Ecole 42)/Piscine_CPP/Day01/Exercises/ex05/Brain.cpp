//Brain.cpp by Carp-Bezverhnii Maxim
#include "Brain.hpp"

Brain::Brain() {}

Brain::~Brain() {}

std::string Brain::identify()
{
	std::stringstream s_stream;
	std::string str;

	s_stream << &this->iq;
	s_stream >> str;

	return str;
}
