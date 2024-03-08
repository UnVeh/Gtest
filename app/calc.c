#include "calc.h"

#include <math.h>

void solve_quadratic_equation(double a, double b, double c, double* x1, double* x2) {
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        *x1 = (-b + sqrt(discriminant)) / (2 * a);
        *x2 = (-b - sqrt(discriminant)) / (2 * a);
    } else if (discriminant == 0) {
        *x1 = *x2 = -b / (2 * a);
    } else {
        // no real roots
        *x1 = *x2 = 0;
    }
}
