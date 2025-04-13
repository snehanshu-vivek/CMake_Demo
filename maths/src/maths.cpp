#include "maths.h"

namespace MathFunctions{
    double square(double x) {
        return x * x;
    }
    
    double cube(double x) {
        return x * x * x;
    }
    
    double power(double base, int exponent) {
        double result = 1;
        for (int i = 0; i < exponent; ++i) {
            result *= base;
        }
        return result;
    }
}