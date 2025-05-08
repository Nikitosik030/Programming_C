#include <stdio.h>
#include <stdlib.h>

// ��������� �������
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
    float num1, num2, result;
    char operation;
    float (*operationPtr)(float, float); // ��������� �� �������

    printf("����� ���������� � �����������!\n");
    printf("������� ������ �����: ");
    scanf("%f", &num1);
    printf("������� �������� (+, -, *, /): ");
    scanf(" %c", &operation);
    printf("������� ������ �����: ");
    scanf("%f", &num2);

    // ����������� ��������� �� ������� ������ ��������
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
                printf("������: ������� �� ����!\n");
                return 1;
            }
            operationPtr = divide;
            break;
        default:
            printf("�������� ��������!\n");
            return 1;
    }

    // �������� ������� ����� ���������
    result = operationPtr(num1, num2);

    printf("���������: %.2f %c %.2f = %.2f\n", num1, operation, num2, result);

    return 0;
}

// ���������� �������
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
