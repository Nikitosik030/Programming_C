#include <stdio.h>
#include <math.h>

// Функция для вычисления значения выражения e^(-2(x+2))(2x+5)/(2(x+2)^2)
double f(double x) {
    return (exp(-2*(x+2)) * (2*x+5)) / (2*pow(x+2, 2));
}

// Функция для вычисления производной выражения
double f_derivative(double x) {
    return -(exp(-2*(x+2)) * (2*pow(x,2) + 10*x + 13)) / pow(x+2, 3);
}

int main() {
    double x;
    printf("Введите значение x: ");
    scanf("%lf", &x);

    // Проверка, что x не равно -2, так как функция не определена в этой точке
    if (x == -2) {
        printf("Функция не определена в точке x = -2.\n");
        return 1;
    }

    double result = f(x);
    double derivative = f_derivative(x);

    printf("Значение функции в точке x = %.2f: %.6f\n", x, result);
    printf("Значение производной функции в точке x = %.2f: %.6f\n", x, derivative);

    return 0;
}
