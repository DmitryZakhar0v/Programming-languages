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
        @brief �������������� ����� ������ ������ Point
        @param x - ��������
        @param y - ��������
        */
        Point(const double x = 0, const double y = 0);

        /*
        @brief ���������� ��������� ������ ������
        @param ����� ������
        @param point �����
        @return ���������� ����� ������
        */
        friend ostream& operator<< (ostream& out, const Point& point);
    };
}
