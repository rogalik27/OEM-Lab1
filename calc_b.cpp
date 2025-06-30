#include <cmath>
#include "calc_b.h"

double calculateB(double x, double y, double z) {
    return x * (atan(z) + pow(cos(y), 3));
}
