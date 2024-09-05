#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"
#include <iostream>

class Point
{
private:
	Fixed const _x;
	Fixed const _y;
public:
	Point();
	Point(Fixed const x, Fixed const y);
	Point(const Point &copy);
	Point & operator = (const Point &lead);
	~Point();
	const Fixed &getX(void)const;
	const Fixed &getY(void)const;
};



#endif