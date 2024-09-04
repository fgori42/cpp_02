#include "Fixed.hpp"

Fixed::Fixed(): value(0)
{
	//std::cout << "costructor called" << std::endl;
}

Fixed::Fixed(int const n)
{
	//std::cout << "int costructor called" << std::endl;
	value = n << bit;
}

Fixed::Fixed(float const n)
{
	//std::cout << "float costructor called" << std::endl;
	value = (int)roundf(n * (1 << bit));
}

Fixed::~Fixed()
{
	//std::cout << "destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fix)
{
	//std::cout << "copy costructor called" << std::endl;
	*this = fix;
}

Fixed & Fixed::operator= (const Fixed &fix)
{
	//std::cout << "copy assignament called" << std::endl;
	this->value = fix.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits called" << std::endl;
	return(value);
}

void	Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits called" << std::endl;
	value = raw;
}
float	Fixed::toFloat(void) const
{
	return((float)value / (1 << bit));
}

int		Fixed::toInt(void) const
{
	return(value >> bit);
}

std::ostream&	operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return(o);
}

bool	Fixed::operator<(Fixed const &a) const
{
	return(this->toFloat() < a.toFloat());
}

bool	Fixed::operator>(Fixed const &a) const
{
	return(this->toFloat() > a.toFloat());
}
bool	Fixed::operator<=(Fixed const &a) const
{
	return(this->toFloat() <= a.toFloat());
}
bool	Fixed::operator>=(Fixed const &a) const
{
	return(this->toFloat() >= a.toFloat());
}
bool	Fixed::operator!=(Fixed const &a) const
{
	return(this->toFloat() != a.toFloat());
}
bool	Fixed::operator==(Fixed const &a) const
{
	return(this->toFloat() == a.toFloat());
}

Fixed	Fixed::operator+(Fixed	const &a) const
{
	return(this->toFloat() + a.toFloat());
}
Fixed	Fixed::operator-(Fixed	const &a) const
{
	return(this->toFloat() - a.toFloat());
}
Fixed	Fixed::operator*(Fixed	const &a) const
{
	return(this->toFloat() * a.toFloat());
}
Fixed	Fixed::operator/(Fixed	const &a) const
{
	return(this->toFloat() / a.toFloat());
}

Fixed	Fixed::operator++()
{
	this->value ++;
	return(*this);
}
Fixed	Fixed::operator++(int)
{
	Fixed temp;
	
	temp = *this;
	this->value++;
	return(temp);
}
Fixed	Fixed::operator--()
{
	this->value --;
	return(*this);
}
Fixed	Fixed::operator--(int)
{
	Fixed temp;
	
	temp = *this;
	this->value--;
	return(temp);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if(a.toFloat() >= b.toFloat())
		return(b);
	else
		return(a);
}
const Fixed	&Fixed::min(Fixed const &a, Fixed const &b)
{
	if(a.toFloat() >= b.toFloat())
		return(b);
	else
		return(a);
}
Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if(a.toFloat() <= b.toFloat())
		return(b);
	else
		return(a);
}
const Fixed	&Fixed::max(Fixed const &a, Fixed const &b)
{
	if(a.toFloat() <= b.toFloat())
		return(b);
	else
		return(a);
}