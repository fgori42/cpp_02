#include "Point.hpp"

static float isIn(const Point a, const Point b, const Point point)
{
	if (((b.getX().toFloat() - a.getX().toFloat())*(point.getY().toFloat() - a.getY().toFloat())) - ((b.getY().toFloat() - a.getY().toFloat())*(point.getX().toFloat() - a.getX().toFloat())) > 0)
		return(1);
	else
		return(0);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float aB;
	float bC;
	float aC;

	aB = isIn(a, b, point);
	bC = isIn(b, c, point);
	aC = isIn(c, a, point);
	if (aB == isIn(a, b, c) && bC == isIn(b, c , a) && aC == isIn(c, a, b))
		return(true);
	else 
		return(false);
}