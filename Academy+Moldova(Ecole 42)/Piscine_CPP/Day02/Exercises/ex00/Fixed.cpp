//Fixed.cpp by Carp-Bezverhnii Maxim
#include "Fixed.hpp"

Fixed::Fixed(void)
{
	_fixPointVal = 0;
	std::cout << "Default constructor are called" << std::endl;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Default destructor are called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &cpc)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpc;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixPointVal;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixPointVal = raw;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fixPointVal = rhs.getRawBits();
	return *this;
}