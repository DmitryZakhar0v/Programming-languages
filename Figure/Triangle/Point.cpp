#include "Point.h"
using namespace MiitPoint;
Point::Point(const double x, const  double y)
	:abscissa(x), ordinate(y)
{
}

ostream& MiitPoint::operator<<(ostream& out, const Point& point)
{
	out << "�����{" << point.abscissa << ", " << point.ordinate << '}';
	return out;
}