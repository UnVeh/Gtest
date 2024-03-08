#include "func.h"
#include <math.h>

int quadraticEquation(double a, double b, double c, double& root1, double& root2) {
    if (a == 0) {
        root1 = std::numeric_limits<double>::infinity();
        root2 = std::numeric_limits<double>::infinity();
        return 0;
    } else {
        double discriminant = b * b - 4 * a * c;
        if (discriminant < 0) {
            root1 = std::numeric_limits<double>::quiet_NaN();
            root2 = std::numeric_limits<double>::infinity();
            return 0;
        } else {
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            return 2;
        }
    }

}
