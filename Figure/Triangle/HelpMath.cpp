#include "HelpMath.h"

bool Miit::Math::doubleequal(const double value1, const double value2, const double precision)
{
    return std::abs(value1-value2)<=precision;
}
