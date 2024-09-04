#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "costructor called" << std::endl;
	value = 0;
}

Fixed::~Fixed()
{
	std::cout << "destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fix)
{
	std::cout << "copy costructor called" << std::endl;
	*this = fix;
}

Fixed & Fixed::operator= (const Fixed &fix)
{
	std::cout << "copy assignament called" << std::endl;
	this->value = fix.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits called" << std::endl;
	return(value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits called" << std::endl;
	value = raw;
}