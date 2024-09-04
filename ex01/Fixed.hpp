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
};

std::ostream&	operator<<(std::ostream &o, Fixed const &fixed);
#endif