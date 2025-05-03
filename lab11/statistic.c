#include "statistic.h"
#include <stdarg.h>
#include <float.h>
#include <limits.h>

double sum(int count, ...) {
    double sum = 0.0;
    va_list args;
    va_start(args, count);
    for (int i = 0; i < count; i++) {
        sum += va_arg(args, double);
    }
    va_end(args);
    return sum;
}

double max(int count, ...) {
    double max_val = -DBL_MAX;
    va_list args;
    va_start(args, count);
    for (int i = 0; i < count; i++) {
        double val = va_arg(args, double);
        if (val > max_val) {
            max_val = val;
        }
    }
    va_end(args);
    return max_val;
}

double min(int count, ...) {
    double min_val = DBL_MAX;
    va_list args;
    va_start(args, count);
    for (int i = 0; i < count; i++) {
        double val = va_arg(args, double);
        if (val < min_val) {
            min_val = val;
        }
    }
    va_end(args);
    return min_val;
}

double average(int count, ...) {
    double sum_val = 0.0;
    va_list args;
    va_start(args, count);
    for (int i = 0; i < count; i++) {
        sum_val += va_arg(args, double);
    }
    va_end(args);
    return sum_val / count;
}
