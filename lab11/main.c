#include "statistic.h"
#include <stdio.h>

int main() {
    printf("Sum: %.2f\n", sum(5, 2.0, 1.0, 10.0, 24.0, 15.0));
    printf("Max: %.2f\n", max(5, 2.0, 1.0, 10.0, 24.0, 15.0));
    printf("Min: %.2f\n", min(5, 2.0, 1.0, 10.0, 24.0, 15.0));
    printf("Average: %.2f\n", average(5, 2.0, 1.0, 10.0, 24.0, 15.0));

    return 0;
}
