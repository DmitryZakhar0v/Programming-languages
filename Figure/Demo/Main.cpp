#include <iostream>
#include "../Triangle/Triangle.h"

using namespace MiitPoint;

int main()
{
	try 
	{
		Point point1 = Point(0,3);
		Point point2 = Point(3,0);
		Point point3 = Point(0,0);
		Triangle triangle1{ point1, point2, point3 };

		std::cout << triangle1.getArea();
		return 0;
	}
	catch (std::exception& err)
	{
		std::cout << err.what();
	}
	
}