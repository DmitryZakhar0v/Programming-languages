#pragma once
#include "Point.h"

namespace MiitPoint
{
	class Triangle
	{
	public:
		/*
		@brief Создание объекта класса Point
		@param userPoint1 - 1 точка треуголника (объект типа Point)
		@param userPoint2 - 2 точка треуголника (объект типа Point)
		@param userPoint3 - 3 точка треуголника (объект типа Point)
		*/
		Triangle(const Point userPoint1, const Point userPoint2, const Point userPoint3);

		/*
		@brief Функция для получения 1 точки треугольника
		@return 1 точка треугольника
		*/
		Point getPoint1() const;

		/*
		@brief Функция для получения 2 точки треугольника
		@return 2 точка треугольника
		*/
		Point getPoint2() const;

		/*
		@brief Функция для получения 3 точки треугольника
		@return 3 точка треугольника
		*/
		Point getPoint3() const;

		/*
		@brief Функция для получения длинны 1 стороны треугольника
		@return Длинна 1 стороны треугольника
		*/
		double getSide1() const;

		/*
		@brief Функция для получения длинны 2 стороны треугольника
		@return Длинна 2 стороны треугольника
		*/
		double getSide2() const;

		/*
		@brief Функция для получения длинны 3 стороны треугольника
		@return Длинна 3 стороны треугольника
		*/
		double getSide3() const;

		/*
		@brief Функция для получения площади треугольника
		@return Площадь треугольника
		*/
		double getArea() const;

		/*
		@brief Функция для получения периметра треугольника
		@return Периметр треугольника
		*/
		double getPerimetr() const;

		/*
		@brief перегрузка оператора потока вывода
		@param out поток вывода
		@param triangle треугольник (объект класса Triangle)
		@return поток вывода, содержащий информацию из triangle
		*/
		friend std::ostream& operator<< (std::ostream& out, const Triangle& triangle);

	private:
		Point point1;
		Point point2;
		Point point3;
		double side1;
		double side2;
		double side3;
	};
}