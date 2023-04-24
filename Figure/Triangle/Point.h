#pragma once
#include <iostream>
using namespace std;

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
        friend ostream& operator<< (ostream& out, const Point& point);
    };
}
