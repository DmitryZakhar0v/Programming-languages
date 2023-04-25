#pragma once
#include <iostream>

namespace MiitPoint
{
    /*
    @brief Point class
    */
    struct Point
    {
        double abscissa;
        double ordinate;

        /*
        @brief инициализирует новый объект класса Point
        @param x - абсцисса
        @param y - ордината
        */
        Point(const double x = 0, const double y = 0);

        /*
        @brief перегрузка оператора потока вывода
        @param поток вывода
        @param point точка
        @return возвращает поток вывода
        */
        friend std::ostream& operator<< (std::ostream& out, const Point& point);

        friend bool operator ==(const Point& lhs, const Point& rhs);
    };
}
