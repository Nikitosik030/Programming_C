#include <math.h>
#include "triangl.h"

double calculate_perimeter(double a, double b, double c) {
    return a + b + c;
}

double calculate_area(double a, double b, double c) {
    double s = (a + b + c) / 2; 
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
