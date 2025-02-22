#include <stdio.h>

int main() {
    // Объявляем массив типа double размером 3 на 3
    double matrix1[3][3];
    double mainDiagonalSum = 0.0;
    double secondaryDiagonalSum = 0.0;

    // Вводим значения массива с консоли
    printf("vvedite elementi matrici 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("element [%d][%d]: ", i, j);
            scanf("%lf", &matrix1[i][j]);
            // Считаем суммы диагоналей
            if (i == j) {
                mainDiagonalSum += matrix1[i][j]; // Главная диагональ
            }
            if (i + j == 2) {
                secondaryDiagonalSum += matrix1[i][j]; // Побочная диагональ
            }
        }
    }

    // Выводим суммы диагоналей
    printf("cymma elementov glavnou diagonali: %.2lf\n", mainDiagonalSum);
    printf("cymma elementov pobochnou diagonali: %.2lf\n", secondaryDiagonalSum);

    // Объявляем массив типа int размером 2 на 2
    int matrix2[2][2];

    // Вводим значения массива с консоли
    printf("\nvvedite elementi matrici 2x2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("element [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Выводим квадрат данной матрицы
    printf("\nkvadrat matrici 2x2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            int squareValue = matrix2[i][j] * matrix2[i][j];
            printf("%d ", squareValue);
        }
        printf("\n");
    }

    return 0;
}
