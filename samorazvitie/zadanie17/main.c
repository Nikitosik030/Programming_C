#include <stdio.h>
#include <math.h>

// ������� ��� ���������� �������� ��������� e^(-2(x+2))(2x+5)/(2(x+2)^2)
double f(double x) {
    return (exp(-2*(x+2)) * (2*x+5)) / (2*pow(x+2, 2));
}

// ������� ��� ���������� ����������� ���������
double f_derivative(double x) {
    return -(exp(-2*(x+2)) * (2*pow(x,2) + 10*x + 13)) / pow(x+2, 3);
}

int main() {
    double x;
    printf("������� �������� x: ");
    scanf("%lf", &x);

    // ��������, ��� x �� ����� -2, ��� ��� ������� �� ���������� � ���� �����
    if (x == -2) {
        printf("������� �� ���������� � ����� x = -2.\n");
        return 1;
    }

    double result = f(x);
    double derivative = f_derivative(x);

    printf("�������� ������� � ����� x = %.2f: %.6f\n", x, result);
    printf("�������� ����������� ������� � ����� x = %.2f: %.6f\n", x, derivative);

    return 0;
}
