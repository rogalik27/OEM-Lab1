#include <iostream>
#include <iomanip>
#include "calc_a.h"
#include "calc_b.h"

int main() {
    double x = 0.33;
    double y = 0.02;
    double z = 32;

    double A = calculateA(x);
    double B = calculateB(x, y, z);

    std::cout << std::fixed << std::setprecision(5);
    std::cout << "A = " << A << std::endl;
    std::cout << "B = " << B << std::endl;

    return 0;
}
