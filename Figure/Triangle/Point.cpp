#include "Point.h"
using namespace MiitPoint;
Point::Point(const double x, const  double y)
	:abscissa(x), ordinate(y)
{
}

std::ostream& MiitPoint::operator<<(std::ostream& out, const Point& point)
{
	out << "Точка{" << point.abscissa << ", " << point.ordinate << '}';
	return out;
}

bool MiitPoint::operator==(const Point& lhs, const Point& rhs)
{
	return (lhs.abscissa == rhs.abscissa && lhs.ordinate == rhs.ordinate);;
}
