#include <stdio.h>
#include <stdlib.h>

// Прототипы функций
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
    float num1, num2, result;
    char operation;
    float (*operationPtr)(float, float); // Указатель на функцию

    printf("Добро пожаловать в калькулятор!\n");
    printf("Введите первое число: ");
    scanf("%f", &num1);
    printf("Введите операцию (+, -, *, /): ");
    scanf(" %c", &operation);
    printf("Введите второе число: ");
    scanf("%f", &num2);

    // Присваиваем указателю на функцию нужную операцию
    switch(operation) {
        case '+':
            operationPtr = add;
            break;
        case '-':
            operationPtr = subtract;
            break;
        case '*':
            operationPtr = multiply;
            break;
        case '/':
            if(num2 == 0) {
                printf("Ошибка: деление на ноль!\n");
                return 1;
            }
            operationPtr = divide;
            break;
        default:
            printf("Неверная операция!\n");
            return 1;
    }

    // Вызываем функцию через указатель
    result = operationPtr(num1, num2);

    printf("Результат: %.2f %c %.2f = %.2f\n", num1, operation, num2, result);

    return 0;
}

// Реализации функций
float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}
