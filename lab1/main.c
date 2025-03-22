#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double a, b, c;
    double x1, x2, d;

    while (1) {
        printf("Vvedite koefitsienty a, b, c (vvedite 0 dlya zaversheniya):\n");
        printf("a: ");
        scanf("%lf", &a);
        if (a == 0) break; 
        printf("b: ");
        scanf("%lf", &b);
        printf("c: ");
        scanf("%lf", &c);

        d = pow(b, 2) - 4 * a * c;

        if (d < 0) {
            printf("KORNEI NET\n");
        } else if (d > 0) {
            x1 = (-b + sqrt(d)) / (2 * a); 
            x2 = (-b - sqrt(d)) / (2 * a); 

            printf("KORNI EST\n");
            printf("x1 = %lf\n", x1);
            printf("x2 = %lf\n", x2);
            printf("d = %lf\n", d);
        } else { // d == 0
            x1 = -b / (2 * a);
            printf("TOLKO ODIN x = %lf\n", x1);
            printf("d = %lf\n", d);
        }
    }

    return 0; 
}
