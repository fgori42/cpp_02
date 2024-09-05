#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int	main( void )
{
	Point a(2,3);
	Point b(6,3);
	Point c(4,6);
	Point point(14,4);

	if (((a.getX() == b.getX()) && (b.getX() == c.getX())) || ((a.getY() == b.getY()) && (b.getY()== c.getY())))
	{
		std::cout << "it isn't a triangle"<< std::endl;
		return(1);
	}
	if (bsp(a, b, c, point))
		std::cout << "point is in triangle"<< std::endl;
	else
		std::cout << "point out of triangle" << std::endl;
	
	return 0;
}