//Fixed.hpp by Carp-Bezerhnii Maxim
#ifndef FIXED_HPP
# define FIXED_HPP

#include <cmath>
#include <iostream>

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

	bool operator>(Fixed const &rhs) const;
	bool operator<(Fixed const &rhs) const;
	bool operator>=(Fixed const &rhs) const;
	bool operator<=(Fixed const &rhs) const;
	bool operator==(Fixed const &rhs) const;
	bool operator!=(Fixed const &rhs) const;

	Fixed operator+(Fixed const &rhs) const;
	Fixed operator-(Fixed const &rhs) const;
	Fixed operator*(Fixed const &rhs) const;
	Fixed operator/(Fixed const &rhs) const;

	Fixed & operator++(void);
	Fixed operator++(int);
	Fixed & operator--(void);
	Fixed operator--(int);

	static Fixed &	min(Fixed &, Fixed &);
	static Fixed &	max(Fixed &, Fixed &);
	static const Fixed & min(Fixed const &, Fixed const &);
	static const Fixed & max(Fixed const &, Fixed const &);

};

std::ostream& operator<<(std::ostream& os, Fixed const &rhs);

#endif