#include <stdio.h>
#include "triangl.h"


int main() {
    double a, b, c;

    printf("vvedite dlini storon treygolnika:\n");
    printf("ctorona a: ");
    scanf("%lf", &a);
    printf("ctotona b: ");
    scanf("%lf", &b);
    printf("ctorona c: ");
    scanf("%lf", &c);

    if (is_valid_triangle(a, b, c)) {
        double perimeter = calculate_perimeter(a, b, c);
        double area = calculate_area(a, b, c);
        printf("perimetr; %.2lf\n", perimeter);
        printf("plosad: %.2lf\n", area);
    } else {
        printf("oshibka\n");
    }

    return 0;
}
