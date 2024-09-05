#include "Point.hpp"

Point::Point() : _x(0) , _y(0)
{
}

Point::~Point()
{
}

Point::Point(Fixed const x, Fixed const y) : _x(x) , _y(y) 
{}

Point::Point(const Point &copy) : _x(copy.getX()), _y(copy.getY())
{
}
Point & Point::operator = (const Point &lead)
{
	(void)lead;
	return(*this);
}

const Fixed	&Point::getX(void)const
{
	return (this->_x);
}

const Fixed	&Point::getY(void)const
{
	return (this->_y);
}