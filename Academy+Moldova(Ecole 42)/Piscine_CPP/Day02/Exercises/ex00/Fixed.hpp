//Fixed.hpp by Carp-Bezverhnii Maxim
#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

	int					_fixPointVal;
	static const int	_fracBits = 8;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed&);

	Fixed &operator=(Fixed const &rhs);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif