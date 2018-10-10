//Fixed.hpp by Carp-Bezverhnii Maxim
#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

	int					_fixPointVal;
	static const int	_fracBits = 8;

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed&);
	Fixed(int const param);
	Fixed(float const param);

	Fixed & operator=(Fixed const &rhs);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

};

std::ostream& operator<<(std::ostream& os, Fixed const &rhs);

#endif