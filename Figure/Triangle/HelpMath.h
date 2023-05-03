#pragma once
#include <limits>

namespace Miit::Math
{
    /*
    @brief Сравниние двух объектов типа double
    @param value1 Первый объект для сравнения
    @param value2 Второй объект для сравнения
    @param precision Точность (необязательный параметр)
    @return true - если два объекта равны в рамках precision, false - если два объекта не равны в рамках precision
    */
    bool doubleequal(const double value1, const double value2, const double precision = std::numeric_limits<double>::min());
}