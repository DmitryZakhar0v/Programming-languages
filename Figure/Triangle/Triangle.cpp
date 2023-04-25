#include "Triangle.h"
#include <cmath>
#include <exception>

MiitPoint::Triangle::Triangle(const Point userPoint1, const Point userPoint2, const Point userPoint3)
	:point1(userPoint1), point2(userPoint2), point3(userPoint3)
{
	if ((userPoint1 == userPoint2) or (userPoint1 == userPoint3) or (userPoint2 == userPoint3))
	{
		throw std::invalid_argument("Not Triangle");
	}
	
	if ((userPoint3.abscissa - userPoint1.abscissa) / (userPoint2.abscissa - userPoint1.abscissa) - (userPoint3.ordinate - userPoint1.ordinate) / (userPoint2.ordinate - userPoint1.ordinate) <= 1e-20)
	{
		throw std::invalid_argument("Not Triangle, Line");
	}
	this->side1 = std::sqrt(std::pow((userPoint1.abscissa - userPoint2.abscissa), 2) + std::pow((userPoint1.ordinate - userPoint2.ordinate), 2));
	this->side2 = std::sqrt(std::pow((userPoint2.abscissa - userPoint3.abscissa), 2) + std::pow((userPoint2.ordinate - userPoint3.ordinate), 2));
	this->side3 = std::sqrt(std::pow((userPoint3.abscissa - userPoint1.abscissa), 2) + std::pow((userPoint3.ordinate - userPoint1.ordinate), 2));

}

MiitPoint::Point MiitPoint::Triangle::getPoint1() const
{
	return this->point1;
}

MiitPoint::Point MiitPoint::Triangle::getPoint2() const
{
	return this->point2;
}

MiitPoint::Point MiitPoint::Triangle::getPoint3() const
{
	return this->point3;
}

double MiitPoint::Triangle::getSide1() const
{
	return this->side1;
}

double MiitPoint::Triangle::getSide2() const
{
	return this->side2;
}

double MiitPoint::Triangle::getSide3() const
{
	return this->side3;
}

double MiitPoint::Triangle::getArea() const
{
	double p = this->getPerimetr() / 2;
	return std::sqrt(p * (p - this->side1) * (p - this->side2) * (p - this->side3));
}


double MiitPoint::Triangle::getPerimetr() const
{
	return this->side1 + this->side2 + this->side3;
}

std::ostream& MiitPoint::operator<<(std::ostream& out, const Triangle& triangle)
{
	return out << triangle.point1 << "\n" << triangle.point2 << "\n" << triangle.point3;
}