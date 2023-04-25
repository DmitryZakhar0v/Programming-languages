#pragma once
#include "Point.h"

namespace MiitPoint
{
	class Triangle
	{
	public:
		/*
		@brief Создание объекта класса Point
		@param userPoint1 - первая точка треуголника (объект типа Point)
		@param userPoint2 - вторая точка треуголника (объект типа Point)
		@param userPoint3 - третья точка треуголника (объект типа Point)
		*/
		Triangle(const Point userPoint1, const Point userPoint2, const Point userPoint3);

		/*
		@brief Функция для получения первой точки треугольника
		@return Первая точка треугольника
		*/
		Point getPoint1() const;

		/*
		@brief Функция для получения второй точки треугольника
		@return Вторая точка треугольника
		*/
		Point getPoint2() const;

		/*
		@brief Функция для получения третей точки треугольника
		@return Третья точка треугольника
		*/
		Point getPoint3() const;

		/*
		@brief Функция для получения длинны первой стороны треугольника
		@return Длина первой стороны треугольника
		*/
		double getSide1() const;

		/*
		@brief Функция для получения длинны второй стороны треугольника
		@return Длина второй стороны треугольника
		*/
		double getSide2() const;

		/*
		@brief Функция для получения длинны третей стороны треугольника
		@return Длина третей стороны треугольника
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