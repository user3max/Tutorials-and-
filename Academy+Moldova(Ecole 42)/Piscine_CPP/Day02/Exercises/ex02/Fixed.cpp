//Fixed.cpp by Carp-Bezverhnii Maxim
#include "Fixed.hpp"

Fixed::Fixed() : _fixPointVal(0)
{
	//std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::~Fixed() {
	//std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &cpc) {
	//std::cout << "Copy constructor called" << std::endl;
	*this = cpc;
}

Fixed::Fixed(int const param) {
	//std::cout << "Int constructor called" << std::endl;
	this->_fixPointVal = param << this->_fracBits;
}

Fixed::Fixed(float const param) {
	//std::cout << "Float constructor called" << std::endl;
	this->_fixPointVal = roundf(param * (1 << this->_fracBits));
}

Fixed & Fixed::operator=(Fixed const &rhs) {
	//std::cout << "Assignation operator called" << std::endl;
	this->_fixPointVal = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const {
	//std::cout << "getRawBits member function called" << std::endl;
	return this->_fixPointVal;
}

void Fixed::setRawBits(int const raw) {
	//std::cout << "setRawBits member function called" << std::endl;
	this->_fixPointVal = raw;
}

float	Fixed::toFloat(void) const {
	return this->_fixPointVal / (float)(1 << this->_fracBits);
}

int		Fixed::toInt(void) const {
	return this->_fixPointVal >> this->_fracBits;
}

std::ostream& operator<<(std::ostream& os, Fixed const &rhs)
{
    os << rhs.toFloat();
    return os;
}

bool Fixed::operator>(Fixed const &rhs) const
{
	return this->_fixPointVal > rhs.getRawBits();
}
bool Fixed::operator<(Fixed const &rhs) const
{
	return this->_fixPointVal < rhs.getRawBits();
}
bool Fixed::operator>=(Fixed const &rhs) const
{
	return this->_fixPointVal >= rhs.getRawBits();
}
bool Fixed::operator<=(Fixed const &rhs) const
{
	return this->_fixPointVal <= rhs.getRawBits();
}
bool Fixed::operator==(Fixed const &rhs) const
{
	return this->_fixPointVal == rhs.getRawBits();
}
bool Fixed::operator!=(Fixed const &rhs) const
{
	return this->_fixPointVal != rhs.getRawBits();
}

Fixed Fixed::operator+(Fixed const &rhs) const
{
	return Fixed(this->toFloat() + rhs.toFloat());
}
Fixed Fixed::operator-(Fixed const &rhs) const
{
	return Fixed(this->toFloat() - rhs.toFloat());
}
Fixed Fixed::operator*(Fixed const &rhs) const
{
	return Fixed(this->toFloat() * rhs.toFloat());
}
Fixed Fixed::operator/(Fixed const &rhs) const
{
	return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed & Fixed::operator++(void)
{
	this->_fixPointVal = this->_fixPointVal + 1;
	return *this;
}
Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->_fixPointVal += this->_fixPointVal;

	return tmp;
}
Fixed & Fixed::operator--(void)
{
	this->_fixPointVal -= this->_fixPointVal - 1;
	return *this;
}
Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->_fixPointVal -= this->_fixPointVal;

	return tmp;
}

Fixed &	Fixed::min(Fixed & lhs, Fixed & rhs)
{
	return (lhs <= rhs) ? lhs : rhs;
}
Fixed &	Fixed::max(Fixed & lhs, Fixed & rhs)
{
	return (lhs >= rhs) ? lhs : rhs;
}

const Fixed & Fixed::min(Fixed const & lhs, Fixed const & rhs)
{
	return (lhs <= rhs) ? lhs : rhs;
}
const Fixed & Fixed::max(Fixed const & lhs, Fixed const & rhs)
{
	return (lhs >= rhs) ? lhs : rhs;
}