#include "calc.h"

//  A = P(1 + r/n)^(nt)
double calculate_future_value(double P, double r, double n, double t) {
    return P * pow((1 + r / n), (n * t));
}