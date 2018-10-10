//Human.cpp by Carp-Bezverhnii Maxim
#include "Human.hpp"

Human::Human() {}

Human::~Human() {}

std::string Human::identify()
{
	return br->identify();
}

Brain& Human::getBrain()
{
	return *this->br;
}