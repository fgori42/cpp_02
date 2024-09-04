#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed
{

private:
	int	value;
	static const int bit = 8;

public:
	Fixed();
	Fixed(int const n);
	Fixed(float const n);
	~Fixed();
	Fixed(const Fixed &fix);
	Fixed & operator = (const Fixed &fix);

	float	toFloat(void) const;
	int		toInt(void) const;
	int getRawBits( void ) const;
	void setRawBits( int const raw );

	bool	operator<(Fixed const &a) const;
	bool	operator>(Fixed const &a) const;
	bool	operator<=(Fixed const &a) const;
	bool	operator>=(Fixed const &a) const;
	bool	operator!=(Fixed const &a) const;
	bool	operator==(Fixed const &a) const;

	Fixed	operator+(Fixed	const &a) const;
	Fixed	operator-(Fixed	const &a) const;
	Fixed	operator*(Fixed	const &a) const;
	Fixed	operator/(Fixed	const &a) const;

	Fixed	operator++();
	Fixed	operator++(int);
	Fixed	operator--();
	Fixed	operator--(int);

	static Fixed	&min(Fixed &a, Fixed &b);
	static const Fixed	&min(Fixed const &a, Fixed const &b);
	static Fixed	&max(Fixed &a, Fixed &b);
	static const Fixed	&max(Fixed const &a, Fixed const &b);
};

std::ostream&	operator<<(std::ostream &o, Fixed const &fixed);
#endif